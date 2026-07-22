// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/BluetoothManager.h"

// Add default functionality here for any IBluetoothManager functions that are not pure virtual.

void IBluetoothManager::Init(const FString& writeCharacteristic)
{
}

void IBluetoothManager::Deinit()
{
}

void IBluetoothManager::SetServiceUUIDsToScanFor(const TArray<FString>& filteredServiceUUIDs)
{
}


void IBluetoothManager::ScanForDevices(const FOnFlexFoundSignature& onDeviceFoundCallback)
{
}

void IBluetoothManager::StopScan()
{
}

void IBluetoothManager::ConnectToDevice(UFlexController* device, const TArray<FString> characteristicIds,
	const FOnFlexConnectedSignature& onDeviceConnectedCallback,
	const FOnFlexConnectionErrorSignature& onFailToConnectDeviceCallback,
	const FOnFlexServiceSetSignature& onServiceSetCallback) const
{
}

void IBluetoothManager::DisconnectDevice(const UFlexController* device,
                                         const FOnFlexDisconnectedSignature& onDeviceDisconnectedCallback,
                                         const FOnFlexDisconnectionErrorSignature& onFailToDisconnectDeviceCallback) const
{
}
