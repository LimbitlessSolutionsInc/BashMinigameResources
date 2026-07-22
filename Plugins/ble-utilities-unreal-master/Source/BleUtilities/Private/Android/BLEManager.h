// Copyright (c) 2019 Nineva Studios

#pragma once

#include "Interface/BLEManagerInterface.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include "Android/AndroidJava.h"
#endif

#include "BLEManager.generated.h"

class UBLEDevice;

UCLASS()
class UBLEManager : public UObject, public IBLEManagerInterface
{
	GENERATED_UCLASS_BODY()

public:

	virtual ~UBLEManager() = default;

	virtual void SetServiceUUIDsToScanFor(TArray<FString> serviceUUIDs) override;

	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;

	virtual bool CheckBleSupport() override;

	virtual bool IsBluetoothEnabled() override;

	virtual void SetBluetoothState(bool enable) override;

	virtual void ScanForDevices(const FOnDeviceFoundDelegate& onDeviceFoundCallback) override;

	virtual void StopScan() override;

	virtual void ConnectToDevice(TScriptInterface<IBLEDeviceInterface> device,
		const FOnDeviceConnectedDelegate& onDeviceConnectedCallback, const FOnConnectionErrorDelegate& onFailToConnectDeviceCallback, const FOnServiceSetDelegate& onServiceSetCallback) override;

	virtual void DisconnectDevice(TScriptInterface<IBLEDeviceInterface> device,
		const FOnDeviceDisconnectedDelegate& onDeviceDisconnectedCallback, const FOnDisconnectionErrorDelegate& onFailToDisconnectDeviceCallback) override;

	// Callbacks interface methods to be called from Android
	void OnDeviceFound(UBLEDevice* device);
	void OnDeviceConnected();
	void OnFailedToConnectDevice(FString error);
	void OnDeviceDisconnected();
	void OnFailedToDisconnectDevice(FString error);
	void OnServiceSet();
private:

	// Unique BLE manager identifier
	FGuid Guid;

	TMap<FString, TSharedPtr<FJavaClassObject>> BLEManagerJavaObjectMap;

	// Java methods
	FJavaClassMethod StartScanMethod;
	FJavaClassMethod StopScanMethod;
	FJavaClassMethod IsBluetoothEnabledMethod;
	FJavaClassMethod IsBleSupportedMethod;
	FJavaClassMethod SetBluetoothEnabled;
	FJavaClassMethod ConnectToDeviceMethod;
	FJavaClassMethod DisconnectDeviceMethod;	

	FOnDeviceFoundDelegate OnDeviceFoundDelegate;
	FOnDeviceConnectedDelegate OnDeviceConnectedDelegate;
	FOnConnectionErrorDelegate OnConnectionErrorDelegate;
	FOnDeviceDisconnectedDelegate OnDeviceDisconnectedDelegate;
	FOnDisconnectionErrorDelegate OnDisconnectionErrorDelegate;
	FOnServiceSetDelegate OnServiceSetDelegate;
};
