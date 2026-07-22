// Copyright (c) 2019 Nineva Studios

#pragma once

#include "UObject/Interface.h"
#include "BLEDeviceInterface.generated.h"

DECLARE_DELEGATE_OneParam(FOnNotificationReceivedDelegate, const TArray<uint8>&);
DECLARE_DELEGATE(FOnNotificationsStoppedDelegate);
DECLARE_DELEGATE_OneParam(FOnNotificationErrorDelegate, FString);
DECLARE_DELEGATE_OneParam(FOnNotificationsStoppedErrorDelegate, FString);
DECLARE_DELEGATE_OneParam(FOnReadSuccessDelegate, const TArray<uint8>&);
DECLARE_DELEGATE_OneParam(FOnReadErrorDelegate, FString);
DECLARE_DELEGATE(FOnWriteSuccessDelegate);
DECLARE_DELEGATE_OneParam(FOnWriteErrorDelegate, FString);

UINTERFACE()
class BLEUTILITIES_API UBLEDeviceInterface : public UInterface
{
	GENERATED_BODY()
};

class BLEUTILITIES_API IBLEDeviceInterface
{
	GENERATED_BODY()
public:

	/**
	* Get BLE device name
	*/
	virtual FString GetDeviceName() = 0;

	/**
	* Get BLE device Id
	*/
	virtual FString GetDeviceId() = 0;

	/**
	* Get BLE device service UUID
	*/
	virtual FString GetServiceUUID() const = 0;

	/**
	* Check BLE connection status
	*/
	virtual bool IsConnected() = 0;

	/**
	* Read service characteristic value
	*/
	virtual void ReadCharacteristic(const FOnReadSuccessDelegate& onReadSuccessCallback,
		const FOnReadErrorDelegate& onReadErrorCallback, FString characteristicUUID) = 0;

	/**
	* Write service characteristic value
	*/
	virtual void WriteCharacteristic(const FOnWriteSuccessDelegate& onWriteSuccessCallback,
		const FOnWriteErrorDelegate& onWriteErrorCallback, FString characteristicUUID, TArray<uint8> data) = 0;

	/**
	* Subscribe to a service characteristic to receive notifications
	*/
	virtual void SubscribeForNotifications(const FOnNotificationReceivedDelegate& onNotificationReceivedCallback,
		const FOnNotificationErrorDelegate& onNotificationErrorCallback, FString characteristicUUID, bool isIndicationCharacteristic) = 0;

	/**
	* Stop receiving service characteristic notifications
	*/
	virtual void StopNotifications(const FOnNotificationsStoppedDelegate& onNotificationsStoppedCallback,
		const FOnNotificationsStoppedErrorDelegate& onNotificationErrorCallback, FString characteristicUUID) = 0;
};
