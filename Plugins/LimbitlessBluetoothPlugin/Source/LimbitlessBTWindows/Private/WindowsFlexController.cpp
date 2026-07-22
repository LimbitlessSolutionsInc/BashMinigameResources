// Fill out your copyright notice in the Description page of Project Settings.
#include "WindowsFlexController.h"

#include "BtDeviceHolder.h"




void UWindowsFlexController::Initialize(BtDeviceHolder* deviceHolder, winrt::guid writeCharacteristicUUID)
{
	DeviceHolder = deviceHolder;

	if (DeviceHolder)
	{
		DeviceHolder->OnDataReceived.BindLambda([this]( TArray<uint8_t>& data)
		{
			ProcessRawData(data);
		});
	}

	DeviceID = FString::Printf(TEXT("%llu"), DeviceHolder->GetDevice().BluetoothAddress());

	WriteCharacteristicUUID = writeCharacteristicUUID;
}



void UWindowsFlexController::SetColor(EFlexColor color, TFunction<void()> colorSetCallback)
{
	Super::SetColor(color, colorSetCallback);
	
	DeviceHolder->WriteCharacteristicAsync(WriteCharacteristicUUID,CreateCharacteristicPacket( color, SensorData.Scale));

	if (colorSetCallback)
		colorSetCallback();

}

void UWindowsFlexController::SetScale(uint8 scale, TFunction<void()> scaleSetCallback)
{
	// Avoid writing if scale is repeated
	if (SensorData.Scale == scale)
	{
		if (scaleSetCallback)
		{
			scaleSetCallback();
		}
		return;
	}
	Super::SetScale(scale, scaleSetCallback);

	DeviceHolder->WriteCharacteristicAsync(WriteCharacteristicUUID, CreateCharacteristicPacket( SensorData.Color, scale));

	if (scaleSetCallback)
		scaleSetCallback();
}
