#include "BtDeviceHolder.h"

#include <winrt/Windows.Devices.Bluetooth.h>
#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Devices.Bluetooth.Advertisement.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <mutex>

using namespace winrt::Windows::Devices::Bluetooth;
using namespace winrt::Windows::Devices::Bluetooth::Advertisement;
using namespace winrt::Windows::Storage::Streams;

BtDeviceHolder::BtDeviceHolder(const winrt::Windows::Devices::Bluetooth::BluetoothLEDevice& device) : Device(device)
{
	Characteristics.reserve(3);
}

BtDeviceHolder::~BtDeviceHolder()
{
	for (int i = 0; i < Characteristics.size(); ++i)
	{
		if (i < CharacteristicTokens.size())
		{
			if (Characteristics[i])
			{
				Characteristics[i].get().ValueChanged(CharacteristicTokens[i]);
				Characteristics[i] = nullptr;
			}
		}
	}
}

std::mutex VectorAccesing;

void BtDeviceHolder::AddTrackedCharacteristic(
	winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic characteristic)
{
	if (!characteristic) {
		UE_LOG(LogTemp, Error, TEXT("Invalid GattCharacteristic!"));
		return;
	}

	{ // Lock scope for thread safety (important!)
		std::lock_guard<std::mutex> lock(VectorAccesing); // Use std::mutex for winrt

		// TODO: Fix issues when adding characteristics with identical UUID. Clearing before adding is temp fix
		Characteristics.clear();
		
		Characteristics.push_back(winrt::weak_ref<GenericAttributeProfile::GattCharacteristic>(characteristic)); // Store a weak_ref!

		if (!Characteristics.empty()) {
			if (auto strongRef = Characteristics.back().get()) { // Check before using

				SubscribeToCharacteristic(strongRef); // Pass the strong ref
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Characteristic is no longer valid!"));
			}
		}
	} // Lock automatically released here
}

bool BtDeviceHolder::operator==(BtDeviceHolder const& other) const
{
	return Device.BluetoothAddress() == other.Device.BluetoothAddress();
}

bool BtDeviceHolder::operator==(uint64_t const& other) const
{
	return Device.BluetoothAddress() == other;
}



void BtDeviceHolder::SubscribeToCharacteristic(
	winrt::impl::com_ref<GenericAttributeProfile::GattCharacteristic> characteristic)  
{
	auto configOp = characteristic.WriteClientCharacteristicConfigurationDescriptorAsync(
		GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue::Notify
		);

	configOp.Completed([characteristic, this](winrt::Windows::Foundation::IAsyncOperation<GenericAttributeProfile::GattCommunicationStatus> asyncOp, winrt::Windows::Foundation::AsyncStatus status) { // Now captures the com_ptr!


		if (status == winrt::Windows::Foundation::AsyncStatus::Completed) {
			GenericAttributeProfile::GattCommunicationStatus result = asyncOp.GetResults();
			
			if (result == GenericAttributeProfile::GattCommunicationStatus::Success) {
				UE_LOG(LogTemp, Log, TEXT("Successfully subscribe to characteristic notifications!"));

				UE_LOG(LogTemp, Log, TEXT("Characteristic UUID: %s"), *FString(winrt::to_hstring(characteristic.Uuid()).c_str()));

				//subscribe to value changed
				CharacteristicTokens.push_back(characteristic.ValueChanged([characteristic, this](GenericAttributeProfile::GattCharacteristic sender, GenericAttributeProfile::GattValueChangedEventArgs args) { // Capture com_ptr in inner lambda too!
					auto buffer = args.CharacteristicValue();

					if (buffer == nullptr) { // Check for null buffer (important!)
						UE_LOG(LogTemp, Warning, TEXT("Received null buffer!"));
						return; // Or handle the null case as needed
					}

				//	try {
						auto reader = winrt::Windows::Storage::Streams::DataReader::FromBuffer(buffer);
						reader.ByteOrder(winrt::Windows::Storage::Streams::ByteOrder::LittleEndian); // Important: Set byte order

						//read data into byte array
						std::vector<uint8_t> data(reader.UnconsumedBufferLength()); // Efficiently allocate
						reader.ReadBytes(data);

						TArray<uint8_t> dataAsTArray;
						for (uint8_t byte : data)
						{
							dataAsTArray.Add(byte);
						}
						/* //Printing data:
						FString hexData;
						for (uint8_t byte : data) {
							hexData += FString::Printf(TEXT("%02X "), byte);
						}

						UE_LOG(LogTemp, Log, TEXT("Notification received: %s"), *hexData);

						// Or log as a byte array (more compact):
						FString byteArrayLog = "";
						for (uint8_t byte : data) {
							byteArrayLog += FString::Printf(TEXT("%d "), byte); // Decimal representation
						}
						UE_LOG(LogTemp, Log, TEXT("Data (bytes): %s"), *byteArrayLog);
						*/

						OnDataReceived.ExecuteIfBound(dataAsTArray);
						

						/*
					} catch (winrt::hresult_error const& ex) {
						UE_LOG(LogTemp, Error, TEXT("Error reading characteristic value: %s"), *FString(ex.message().c_str()));
					} catch (const std::exception& ex) {
						UE_LOG(LogTemp, Error, TEXT("Error reading characteristic value: %s"), *FString(ex.what()));
					}
					*/
				}));
			} else {
				UE_LOG(LogTemp, Error, TEXT("Failed to subscribe to characteristic."));
			}
		}
	});
}


void BtDeviceHolder::WriteCharacteristicAsync(winrt::guid characteristicUUID, const std::vector<uint8_t>& dataToWrite)
{
	winrt::weak_ref<GenericAttributeProfile::GattCharacteristic> characteristic = GetCharacteristic(characteristicUUID);

	if (characteristic.get())
	{

		DataWriter dataWriter;

		dataWriter.WriteBytes(dataToWrite);
		
		IBuffer buffer = dataWriter.DetachBuffer();
		/*
		uint8_t* bufferPtr = buffer.data();
		UE_LOG(LogTemp, Log, TEXT("Buffer content:"));
		for (size_t i = 0; i < buffer.Length(); i++)
		{
			UE_LOG(LogTemp, Log, TEXT("buffer[%llu] = %d"), i, bufferPtr[i]);
		}
		*/
		auto writeOperation = characteristic.get().WriteValueAsync(buffer);

		writeOperation.Completed([](winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp,
			winrt::Windows::Foundation::AsyncStatus status)
		{
			if (status == winrt::Windows::Foundation::AsyncStatus::Completed)
			{
				//try {
					auto writeResult = asyncOp.GetResults();
					if (writeResult == winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus::Success) {
							UE_LOG(LogTemp, Log, TEXT("Characteristic value written successfully!"));
					}
					else {
							UE_LOG(LogTemp, Log, TEXT("Error writing characteristic value: %d"), static_cast<int>(writeResult));

					}
				
			/*	}catch (winrt::hresult_error const& ex) {
						UE_LOG(LogTemp, Log, TEXT("Error getting result: %s"), ex.message().c_str());

				}*/
			}
		});
		

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get write value"));
	}
}

winrt::weak_ref<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> BtDeviceHolder::GetCharacteristic(winrt::guid characteristicUUID) const
{
	for (auto characteristic : Characteristics)
	{
		if (characteristic.get() != nullptr && characteristic.get().Uuid() == characteristicUUID)
		{
			return characteristic;
		}
	}

	return nullptr;
}
