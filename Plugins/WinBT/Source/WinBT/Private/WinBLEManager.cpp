#include "WinBLEManager.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/WindowsHWrapper.h"

#include <Windows.Devices.Bluetooth.Advertisement.h>
#include <winrt/Windows.Devices.Bluetooth.Advertisement.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Foundation.Collections.h>

#include "Windows/HideWindowsPlatformTypes.h"


#include "Async/Async.h"
#include "BtDeviceHolder.h"

using namespace winrt::Windows::Devices::Bluetooth;
using namespace winrt::Windows::Devices::Bluetooth::Advertisement;
using namespace winrt::Windows::Storage::Streams;

UWinBLEManager::UWinBLEManager()
{
}

void UWinBLEManager::Init()
{
	if (bIsInitialized)return;
	
	//try{
		// Ensure WinRT is properly initialized
		winrt::init_apartment(winrt::apartment_type::single_threaded);
		bIsInitialized = true;

		// Your BLE setup code here
		UE_LOG(LogTemp, Log, TEXT("WinRT Apartment initialized successfully!"));

	/*}
	catch (const winrt::hresult_error& e)
	{
		UE_LOG(LogTemp, Error, TEXT("WinRT Initialization Failed: %s"), e.message().c_str());
	}*/
}

void UWinBLEManager::Deinit()
{
	DisconnectAllDevices(nullptr);
	winrt::uninit_apartment();
}

void UWinBLEManager::SetServiceUUIDsToScanFor(const TArray<winrt::guid>& filteredServiceUUIDs)
{
	FilteredServiceUUIDs = filteredServiceUUIDs;

	BluetoothLEAdvertisementFilter filter;

	BluetoothLEAdvertisement advertisement;
	for (const winrt::guid &g : filteredServiceUUIDs)
	{
		advertisement.ServiceUuids().Append(g);
	}

	filter.Advertisement(advertisement);

	AdvertisementWatcher.AdvertisementFilter(filter);
}

/*
void UWinBLEManager::CheckBleSupport(const TFunction<void(bool)>& Callback)
{
	// Get the Bluetooth adapter asynchronously
	auto adapterAsync = BluetoothAdapter::GetDefaultAsync();

	// Use Completed to define what happens when the operation finishes
	adapterAsync.Completed([Callback](winrt::Windows::Foundation::IAsyncOperation<BluetoothAdapter> const& op, AsyncStatus status)
	{
		if (status == AsyncStatus::Completed && op.GetResults())
		{
			// Check if Bluetooth is enabled and return it via the callback
			bool bIsEnabled = op.GetResults().IsLowEnergySupported();
			Callback(bIsEnabled); // Invoke the callback with the result
		}
		else
		{
			// If there was an error or Bluetooth is not available, call the callback with false
			Callback(false);
		}
	});
}
*/

void UWinBLEManager::ScanForDevices(const FOnDeviceFoundSignature& onDeviceFoundCallback)
{
	if (AdvertisementWatcher.Status() == Advertisement::BluetoothLEAdvertisementWatcherStatus::Started)
	{
		UE_LOG(LogTemp, Warning, TEXT("Windows BLE scan already running."))
		return;
	}

	AdvertisementWatcher.ScanningMode(Advertisement::BluetoothLEScanningMode::Active);

	AdvertisementWatcher.Received([this, onDeviceFoundCallback](BluetoothLEAdvertisementWatcher sender, BluetoothLEAdvertisementReceivedEventArgs args)
	{
		BluetoothLEAdvertisement advertisement = args.Advertisement();

		bool bContainsService = false;
		for (const auto& service : advertisement.ServiceUuids())
		{
			if (FilteredServiceUUIDs.Contains(service))
			{
				bContainsService = true;
			}
		}
		
		FString deviceName = args.Advertisement().LocalName().c_str();
		uint64 deviceAddress = args.BluetoothAddress();

		if (deviceName.IsEmpty())
		{
			deviceName = TEXT("Unknown Device");
		}
		UE_LOG(LogTemp, Log, TEXT("Discovered BLE Device: %s, Address: %llu"), *deviceName, deviceAddress);


		AsyncTask(ENamedThreads::GameThread, [this, onDeviceFoundCallback, deviceName, deviceAddress]()
		{
			auto device = BluetoothLEDevice::FromBluetoothAddressAsync(deviceAddress);

			device.Completed([&, onDeviceFoundCallback, this](winrt::Windows::Foundation::IAsyncOperation<BluetoothLEDevice> asyncOperation, winrt::Windows::Foundation::AsyncStatus asyncStatus)
			{
				if (asyncStatus == winrt::Windows::Foundation::AsyncStatus::Completed)
				{
					BluetoothLEDevice curDevice = asyncOperation.GetResults();

					BtDeviceHolder* deviceHolder{};
					
					bool found = false;
					for (std::unique_ptr<BtDeviceHolder>& pastDevice : FoundBluetoothDevices)
					{
						if (pastDevice && *pastDevice == curDevice.BluetoothAddress())
						{
							found = true;
							deviceHolder = pastDevice.get();
						}
					}
					
					if (!found)
					{
						deviceHolder = FoundBluetoothDevices.emplace_back(std::make_unique<BtDeviceHolder>(curDevice)).get();
					}

					if (deviceHolder)
					{
						onDeviceFoundCallback.ExecuteIfBound(*deviceHolder);
					}

				}
			});
			/*
			UBTDevice* newDevice = NewObject<UBTDevice>(this);
			if (newDevice)
			{
				newDevice->Initialize(deviceName, deviceAddress);
				
			}*/
		});


	});

	AdvertisementWatcher.Start();
	UE_LOG(LogTemp, Log, TEXT("Started scanning for BLE devices."));

}

void UWinBLEManager::StopScan()
{
	if (AdvertisementWatcher.Status() == Advertisement::BluetoothLEAdvertisementWatcherStatus::Started)
	{
		AdvertisementWatcher.Stop();
		UE_LOG(LogTemp, Log, TEXT("Stopped scanning for BLE devices."));
	}
}

void UWinBLEManager::ConnectToDevice(BtDeviceHolder& device, const TArray<winrt::guid> characteristicIds,
	const FOnDeviceConnectedSignature& onDeviceConnectedCallback,
	const FOnConnectionErrorSignature& onFailToConnectDeviceCallback,
	const FOnServiceSetSignature& onServiceSetCallback) const
{

	if (!device.GetDevice())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid BluetoothLEDevice!"));
		onFailToConnectDeviceCallback.ExecuteIfBound(TEXT("Invalid device."));
		return;
	}

	if (device.GetDevice().ConnectionStatus() == BluetoothConnectionStatus::Connected)
	{
		return;
	}

	auto serviceOp = device.GetDevice().GetGattServicesAsync();

	serviceOp.Completed([this,&device, characteristicIds, onDeviceConnectedCallback, onFailToConnectDeviceCallback, onServiceSetCallback](winrt::Windows::Foundation::IAsyncOperation<GenericAttributeProfile::GattDeviceServicesResult> asyncOperation, winrt::Windows::Foundation::AsyncStatus asyncStatus)
	{
		if ( asyncStatus == winrt::Windows::Foundation::AsyncStatus::Completed)
		{
			GenericAttributeProfile::GattDeviceServicesResult serviceResult = asyncOperation.GetResults();
			if (serviceResult.Status() == GenericAttributeProfile::GattCommunicationStatus::Success)
			{
				auto services = serviceResult.Services();
				//UE_LOG(LogTemp, Log, TEXT("Found %d GATT services"), services.Size());

				for (auto service : services)
				{
					//UE_LOG(LogTemp, Log, TEXT("Service UUID: %s"), *FString(winrt::to_hstring(service.Uuid()).c_str()));

					// Check if the service contains our characteristic
					DiscoverAndSubscribeToCharacteristics(device, characteristicIds, service, onServiceSetCallback);
				}

				// Notify that the device is connected successfully
				onDeviceConnectedCallback.ExecuteIfBound();
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to get GATT services."));
				onFailToConnectDeviceCallback.ExecuteIfBound(TEXT("Failed to retrieve GATT services."));
			}
		}
	});
}

void UWinBLEManager::DiscoverAndSubscribeToCharacteristics(BtDeviceHolder& device, const TArray<winrt::guid> characteristicIds,GenericAttributeProfile::GattDeviceService service, const FOnServiceSetSignature& onServiceSetCallback) const
{
	
	auto charOp = service.GetCharacteristicsAsync();
	charOp.Completed([this, &device, onServiceSetCallback, characteristicIds](winrt::Windows::Foundation::IAsyncOperation<GenericAttributeProfile::GattCharacteristicsResult> asyncOp, winrt::Windows::Foundation::AsyncStatus status)
	{
		if (status == winrt::Windows::Foundation::AsyncStatus::Completed)
		{
			GenericAttributeProfile::GattCharacteristicsResult charResult = asyncOp.GetResults();
			if (charResult.Status() == GenericAttributeProfile::GattCommunicationStatus::Success)
			{
				auto characteristics = charResult.Characteristics();
				for (auto characteristic : characteristics)
				{
					for (auto requestedCharacteristic : characteristicIds)
					{
						if (characteristic.Uuid() == requestedCharacteristic)
						{
							//UE_LOG(LogTemp, Log, TEXT("Found target characteristic!"));
							device.AddTrackedCharacteristic(characteristic);
							onServiceSetCallback.ExecuteIfBound();
							return;
						}
					}
				}
			}
		}
	});
}



void UWinBLEManager::DisconnectDevice(const BtDeviceHolder& device,
	const FOnDeviceDisconnectedSignature& onDeviceDisconnectedCallback,
	const FOnDisconnectionErrorSignature& onFailToDisconnectDeviceCallback) const
{
	if (onDeviceDisconnectedCallback.IsBound())
	{
		onDeviceDisconnectedCallback.Execute();
	}
	//if not connected, do nothing.
	if (device.GetDevice().ConnectionStatus() != BluetoothConnectionStatus::Connected)
	{
		return;
	}

	//try{
	// Attempt to close the BLE device connection
	device.GetDevice().Close();

	// Log and call success callback
	UE_LOG(LogTemp, Log, TEXT("Successfully disconnected BLE device."));
	
/*
	}
	catch (const std::exception& e)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to disconnect BLE device: %s"), *FString(e.what()));
		if (onFailToDisconnectDeviceCallback.IsBound())
		{
			onFailToDisconnectDeviceCallback.Execute(FString(e.what()));
		}
	}*/
}

void UWinBLEManager::DisconnectAllDevices(const FOnDeviceDisconnectedSignature& onDeviceDisconnectedCallback) const
{
	for (int i = 0; i < FoundBluetoothDevices.size(); i++)
	{
		if (FoundBluetoothDevices[i] && FoundBluetoothDevices[i]->GetDevice().ConnectionStatus() == BluetoothConnectionStatus::Connected)
		{
			DisconnectDevice(*FoundBluetoothDevices.at(i), nullptr, nullptr);

		}
	}

}
