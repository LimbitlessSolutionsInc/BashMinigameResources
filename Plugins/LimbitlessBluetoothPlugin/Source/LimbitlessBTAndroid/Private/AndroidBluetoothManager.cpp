// Fill out your copyright notice in the Description page of Project Settings.


#include "AndroidBluetoothManager.h"
#include "AndroidPermissionFunctionLibrary.h"
#include "AndroidFlexController.h"
#include "BleUtilitiesBPL.h"

void UAndroidBluetoothManager::Init(const FString& writeCharacteristic)
{
	IBluetoothManager::Init(writeCharacteristic);

	WriteCharacteristic = writeCharacteristic;
	TArray<FString> writeCharacteristicArray {writeCharacteristic};
	
	BLEManager = UBleUtilitiesUtilsBPL::CreateBLEManager(writeCharacteristicArray);

	TArray<FString> RequiredPermissions {
		"android.permission.BLUETOOTH",
		"android.permission.BLUETOOTH_ADMIN",
		"android.permission.ACCESS_COARSE_LOCATION",
		"android.permission.ACCESS_FINE_LOCATION"
	};
	UAndroidPermissionFunctionLibrary::AcquirePermissions(RequiredPermissions);
	
	if (!BLEManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create BLE Manager"));
	}

}

void UAndroidBluetoothManager::Deinit()
{
	IBluetoothManager::Deinit();
	
	BLEManager = nullptr;
}

void UAndroidBluetoothManager::SetServiceUUIDsToScanFor(const TArray<FString>& filteredServiceUUIDs)
{
	IBluetoothManager::SetServiceUUIDsToScanFor(filteredServiceUUIDs);
	
	if (!BLEManager)return;

	BLEManager->SetServiceUUIDsToScanFor(filteredServiceUUIDs);

}

void UAndroidBluetoothManager::ScanForDevices(const FOnFlexFoundSignature& onDeviceFoundCallback)
{
	IBluetoothManager::ScanForDevices(onDeviceFoundCallback);

	if (!BLEManager)return;
	
	OnDeviceFoundCallback = onDeviceFoundCallback;
	
	BLEManager->ScanForDevices(FOnDeviceFoundDelegate::CreateLambda([this, onDeviceFoundCallback](TScriptInterface<IBLEDeviceInterface> device){
		FoundDeviceQueue.Enqueue(device);
	}));
}

void UAndroidBluetoothManager::StopScan()
{
	IBluetoothManager::StopScan();

	if (!BLEManager)return;

	BLEManager->StopScan();
}

void UAndroidBluetoothManager::ConnectToDevice(UFlexController* device, const TArray<FString> characteristicIds,
	const FOnFlexConnectedSignature& onDeviceConnectedCallback,
	const FOnFlexConnectionErrorSignature& onFailToConnectDeviceCallback,
	const FOnFlexServiceSetSignature& onServiceSetCallback) const
{
	IBluetoothManager::ConnectToDevice(device, characteristicIds, onDeviceConnectedCallback,
	                                   onFailToConnectDeviceCallback, onServiceSetCallback);

	if (!BLEManager || !device)return;


	if (UAndroidFlexController* androidBluetoothController = Cast<UAndroidFlexController>(device))
	{
		auto managerServiceSetCallback = FOnServiceSetDelegate::CreateLambda([=]()
		{
			androidBluetoothController->SubscribeToDeviceNotification(onServiceSetCallback);
		});
		BLEManager->ConnectToDevice(androidBluetoothController->GetDevice(),
			onDeviceConnectedCallback, onFailToConnectDeviceCallback, managerServiceSetCallback);
	}
}

void UAndroidBluetoothManager::DisconnectDevice(const UFlexController* device,
	const FOnFlexDisconnectedSignature& onDeviceDisconnectedCallback,
	const FOnFlexDisconnectionErrorSignature& onFailToDisconnectDeviceCallback) const
{
	IBluetoothManager::DisconnectDevice(device, onDeviceDisconnectedCallback, onFailToDisconnectDeviceCallback);

	if (!BLEManager || !device)return;

	if (const UAndroidFlexController* androidBluetoothController = Cast<UAndroidFlexController>(device))
	{
		BLEManager->DisconnectDevice(androidBluetoothController->GetDevice(), FOnDeviceConnectedDelegate::CreateLambda([onDeviceDisconnectedCallback]()
		{
			onDeviceDisconnectedCallback.ExecuteIfBound();
		}), FOnDisconnectionErrorDelegate::CreateLambda([onFailToDisconnectDeviceCallback](FString error)
		{
			onFailToDisconnectDeviceCallback.ExecuteIfBound(error);
		}));
	}
}

bool UAndroidBluetoothManager::IsTickable() const
{
	return true;
}

bool UAndroidBluetoothManager::IsTickableInEditor() const
{
	return false;
}

bool UAndroidBluetoothManager::IsTickableWhenPaused() const
{
	return true;
}

bool UAndroidBluetoothManager::IsAllowedToTick() const
{
	return !FoundDeviceQueue.IsEmpty();
}

void UAndroidBluetoothManager::Tick(float DeltaTime)
{
	while (!FoundDeviceQueue.IsEmpty())
	{
		TScriptInterface<IBLEDeviceInterface> device {};
		FoundDeviceQueue.Dequeue(device);

		FString address = device->GetDeviceId();

		if (CreatedControllers.Contains(address))
		{
			OnDeviceFoundCallback.ExecuteIfBound(CreatedControllers[address]);
		}else
		{
			UAndroidFlexController* androidBluetoothController = NewObject<UAndroidFlexController>();
			
			androidBluetoothController->Initialize(device, WriteCharacteristic);
			CreatedControllers.Add(address, androidBluetoothController);
			
			OnDeviceFoundCallback.ExecuteIfBound(androidBluetoothController);
		}
	}
	
}
