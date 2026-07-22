// Fill out your copyright notice in the Description page of Project Settings.


#include "AndroidFlexController.h"

#include "Interface/BLEDeviceInterface.h"
#include "Interface/BLEManagerInterface.h"

void UAndroidFlexController::SubscribeToDeviceNotification(FString characteristicUUID, const FOnServiceSetDelegate& onFirstNotification)
{
	DeviceHolder->SubscribeForNotifications(FOnNotificationReceivedDelegate::CreateLambda([onFirstNotification, this]( const TArray<uint8>& controllerNotifData)
	{
		if (!bHasReceivedFirstNotif)
		{
			bHasReceivedFirstNotif = true;
			onFirstNotification.ExecuteIfBound();
		}
		ProcessRawData(controllerNotifData);
	}),
	FOnNotificationErrorDelegate::CreateLambda([](FString error)
	{
		UE_LOG(LogTemp, Error, TEXT("Notification error: %s"), *error);
	}),
	characteristicUUID, false);

}

void UAndroidFlexController::SubscribeToDeviceNotification(const FOnServiceSetDelegate& onFirstNotification)
{
	SubscribeToDeviceNotification(CharacteristicUUID, onFirstNotification);
}

void UAndroidFlexController::Initialize(TScriptInterface<IBLEDeviceInterface> deviceHolder, FString characteristicUUID)
{
	DeviceHolder = deviceHolder;
	CharacteristicUUID = characteristicUUID;
	
	if (!DeviceHolder)
	{
		UE_LOG(LogTemp, Error, TEXT("%hs() failed. No DeviceHolder"), __FUNCTION__);
		return;
	}
}

template<class T>
TArray<T> ConvertVectorToArray(std::vector<T> vector)
{
	TArray<T> tarray{};
	for (int i = 0; i < vector.size(); i++)
	{
		tarray.Add(vector[i]);
	}

	return tarray;
}

void UAndroidFlexController::SetColor(EFlexColor color, TFunction<void()> colorSetCallback)
{
	Super::SetColor(color, colorSetCallback);

	if (!DeviceHolder)return;

    TArray<uint8> characteristicTArray = ConvertVectorToArray( CreateCharacteristicPacket( color, SensorData.Scale));
	
	DeviceHolder->WriteCharacteristic(FOnWriteSuccessDelegate::CreateLambda([colorSetCallback]()
	{
		if (colorSetCallback)
			colorSetCallback();
	}), {}, CharacteristicUUID, characteristicTArray);

}

void UAndroidFlexController::SetScale(uint8 scale, TFunction<void()> scaleSetCallback)
{
	Super::SetScale(scale, scaleSetCallback);
	
	if (!DeviceHolder)return;

	TArray<uint8> characteristicTArray = ConvertVectorToArray( CreateCharacteristicPacket( SensorData.Color, scale));
	
	DeviceHolder->WriteCharacteristic(FOnWriteSuccessDelegate::CreateLambda([scaleSetCallback]()
	{
		if (scaleSetCallback)
			scaleSetCallback();
	}), {}, CharacteristicUUID, characteristicTArray);
}

