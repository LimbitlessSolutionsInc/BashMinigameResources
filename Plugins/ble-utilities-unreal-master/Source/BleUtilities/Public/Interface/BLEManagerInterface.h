// Copyright (c) 2019 Nineva Studios

#pragma once

#include "UObject/Interface.h"
#include "BLEDeviceInterface.h"
#include "BLEManagerInterface.generated.h"


DECLARE_DELEGATE_OneParam(FOnDeviceFoundDelegate, TScriptInterface<IBLEDeviceInterface>);
DECLARE_DELEGATE(FOnDeviceConnectedDelegate);
DECLARE_DELEGATE(FOnDeviceDisconnectedDelegate);
DECLARE_DELEGATE_OneParam(FOnConnectionErrorDelegate, FString);
DECLARE_DELEGATE_OneParam(FOnDisconnectionErrorDelegate, FString);
DECLARE_DELEGATE(FOnServiceSetDelegate)

UINTERFACE()
class BLEUTILITIES_API UBLEManagerInterface : public UInterface
{
	GENERATED_BODY()
};

class BLEUTILITIES_API IBLEManagerInterface
{
	GENERATED_BODY()
public:
	
	virtual void SetServiceUUIDsToScanFor(TArray<FString> serviceUUIDs) = 0;

	/**
	* Check if BLE supported
	*/
	virtual bool CheckBleSupport() = 0;
	
	/**
	* Check if bluetooth is turned on
	*/
	virtual bool IsBluetoothEnabled() = 0;

	/**
	* Turn bluetooth on/off
	* @note Works ONLY for Android
	*/
	virtual void SetBluetoothState(bool enable) = 0;
	
	/**
	* Find nearby BLE devices with specific services
	*/
	virtual void ScanForDevices(const FOnDeviceFoundDelegate& onDeviceFoundCallback) = 0;

	/**
	* Stop searching for nearby BLE devices
	*/
	virtual void StopScan() = 0;
	
	/**
	* Connect to specified BLE device
	*/
	virtual void ConnectToDevice(TScriptInterface<IBLEDeviceInterface> device,
		const FOnDeviceConnectedDelegate& onDeviceConnectedCallback, const FOnConnectionErrorDelegate& onFailToConnectDeviceCallback, const FOnServiceSetDelegate& onServiceSetCallback) = 0;

	/**
	* Disconnect specified BLE device
	*/
	virtual void DisconnectDevice(TScriptInterface<IBLEDeviceInterface> device,
		const FOnDeviceDisconnectedDelegate& onDeviceDisconnectedCallback, const FOnDisconnectionErrorDelegate& onFailToDisconnectDeviceCallback) = 0;
};
