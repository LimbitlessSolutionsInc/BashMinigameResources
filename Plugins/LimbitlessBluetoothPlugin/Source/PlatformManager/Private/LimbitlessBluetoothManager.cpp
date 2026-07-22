// Fill out your copyright notice in the Description page of Project Settings.


#include "LimbitlessBluetoothManager.h"

#include "FlexController.h"
#include "Managers/BluetoothManager.h"

#if PLATFORM_WINDOWS || UE_EDITOR
#include "WindowsBluetoothManager.h"
#endif
#if PLATFORM_ANDROID
#include "AndroidBluetoothManager.h"
#endif

void ULimbitlessBluetoothManager::Initialize()
{
	BLEManager = CreateBluetoothManager();
	
	AddToRoot();

	SetServiceUUIDsToScanFor(ServiceUUIDs);
}

void ULimbitlessBluetoothManager::Deinitialize()
{
	BLEManager->Deinit();
	RemoveFromRoot();	
}

void ULimbitlessBluetoothManager::SetServiceUUIDsToScanFor(const TArray<FString>& filteredServiceUUIDs)
{
	if (!BLEManager) return;

	BLEManager->SetServiceUUIDsToScanFor(filteredServiceUUIDs);
}

void ULimbitlessBluetoothManager::ScanForDevices(const FOnFlexFoundSignature& onDeviceFoundCallback)
{
	if (!BLEManager) return;

	BLEManager->ScanForDevices(onDeviceFoundCallback);
}

void ULimbitlessBluetoothManager::StopScan()
{
	if (!BLEManager) return;

	BLEManager->StopScan();
}

void ULimbitlessBluetoothManager::ConnectToDevice(UFlexController* device, const TArray<FString> characteristicIds,
	const FOnFlexConnectedSignature& onDeviceConnectedCallback,
	const FOnFlexConnectionErrorSignature& onFailToConnectDeviceCallback,
	const FOnFlexServiceSetSignature& onServiceSetCallback) const
{
	if (!BLEManager) return;

	FOnFlexConnectedSignature connectedCallback = FOnFlexConnectedSignature::CreateLambda(
		[=, this]()
		{
			OnDeviceConnected(device, onDeviceConnectedCallback);
		});
	
	BLEManager->ConnectToDevice(device, characteristicIds, connectedCallback, onFailToConnectDeviceCallback, onServiceSetCallback);
}

void ULimbitlessBluetoothManager::OnDeviceConnected(UFlexController* device, const FOnFlexConnectedSignature& nextCallback) const
{
	UE_LOG(LogTemp, Log, TEXT("Device successfully connected"));
	
	auto t = FOnFlexDisconnectionErrorSignature::CreateLambda([](FString error)
			{
				UE_LOG(LogTemp, Warning, TEXT("Timeout disconnection failed. %s"), *error);
			});
	device->OnDeviceTimedOut.BindLambda(
		[=, this]()
		{
			UE_LOG(LogTemp, Warning, TEXT("Timing out device."));
			device->OnDeviceTimedOut.Unbind();
			DisconnectDevice(device, device->OnDeviceDisconnected, t);
			
		});
	nextCallback.ExecuteIfBound();
}

void ULimbitlessBluetoothManager::DisconnectDevice(const UFlexController* device,
	const FOnFlexDisconnectedSignature& onDeviceDisconnectedCallback,
	const FOnFlexDisconnectionErrorSignature& onFailToDisconnectDeviceCallback) const
{
	if (!BLEManager) return;

	BLEManager->DisconnectDevice(device, onDeviceDisconnectedCallback, onFailToDisconnectDeviceCallback);
}

TScriptInterface<IBluetoothManager> ULimbitlessBluetoothManager::CreateBluetoothManager()
{
#if PLATFORM_WINDOWS || UE_EDITOR
	UWindowsBluetoothManager* winManager = NewObject<UWindowsBluetoothManager>(this);
	winManager->Init(CharacteristicUUIDs[0]);
	
	return winManager;
#elif PLATFORM_ANDROID
	UAndroidBluetoothManager* androidManager = NewObject<UAndroidBluetoothManager>(this);
	androidManager->Init(CharacteristicUUIDs[0]);
	return androidManager;
#else
	return nullptr;
#endif
}

