// Fill out your copyright notice in the Description page of Project Settings.

#include "BluetoothManagerSubsystem.h"
#include "FlexController.h"
#include "BaseClasses/LimbitlessPlayerController.h"
#include "BaseClasses/LimbitlessLocalPlayer.h"
#include "LimbitlessBluetoothManager.h"

void UBluetoothManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	BLEManager = NewObject<ULimbitlessBluetoothManager>(this);
	if (BLEManager)
	{
		BLEManager->Initialize();
	}
}

void UBluetoothManagerSubsystem::Deinitialize()
{
	if (BLEManager)
	{
		BLEManager->Deinitialize();
	}
	UE_LOG(LogTemp, Warning, TEXT("Deinitialize Bluetooth Manager Subsystem"));
}

void UBluetoothManagerSubsystem::StartScan()
{
	UE_LOG(LogTemp, Warning, TEXT("Starting bluetooth scan"));
	if (BLEManager == nullptr) 
	{ 
		UE_LOG(LogTemp, Warning, TEXT("No BLEManager found.")); 
		return; 
	}

	BLEManager->ScanForDevices(FOnFlexFoundSignature::CreateLambda([this](Device InDevice)
		{
			//TODO: must add timer
			if (ConnectedControllers.Contains(InDevice)) { return; }
			ConnectedControllers.Add(InDevice);
		
			auto OnConnectError = FOnConnectionErrorDelegate::CreateLambda([=, this](FString Error) 
			{ 
				UE_LOG(LogTemp, Warning, TEXT("Could not connect to device: %s"), *Error);
				ConnectedControllers.Remove(InDevice);
			});

			auto OnServiceSet = FOnServiceSetDelegate::CreateLambda([InDevice, this]()
			{
				OnDeviceConnect(InDevice);
			});

			auto OnConnectSuccess = FOnFlexConnectedSignature::CreateLambda([](){ });
			BLEManager->ConnectToDevice(InDevice, BLEManager->GetDefaultCharacteristicIds(), OnConnectSuccess, OnConnectError, OnServiceSet);
		}
	));
}

void UBluetoothManagerSubsystem::StopScan()
{
	if (BLEManager)
	{
		BLEManager->StopScan();
	}
}

void UBluetoothManagerSubsystem::AssignControllerToPlayer(ALimbitlessPlayerController* player, UFlexController* device)
{
	if (player && player->GetLimbitlessLocalPlayer())
	{
		if (UFlexController* cont = player->GetLimbitlessLocalPlayer()->GetFlexController())
		{
			PairedFlexDevices.Remove(cont);
			UnpairedFlexDevices.Add(cont);
		}
		
		player->GetLimbitlessLocalPlayer()->SetFlexController(device);

		if (device && UnpairedFlexDevices.Contains(device))
		{
			UnpairedFlexDevices.Remove(device);
			PairedFlexDevices.Add(device);
		}
	}
}

void UBluetoothManagerSubsystem::OnDeviceConnect(Device Device)
{
	Device->OnDeviceDisconnected.BindLambda([=, this](){ OnDeviceDisconnect(Device); } );
	
	UnpairedFlexDevices.Add(Device);
	
	// Write color to Device
	Device->SetColor(GetNextColor(), nullptr);
}

void UBluetoothManagerSubsystem::OnDeviceDisconnect(Device Device)
{
	if (UnpairedFlexDevices.Contains(Device))
	{
		UnpairedFlexDevices.Remove(Device);
	}
	if (PairedFlexDevices.Contains(Device))
	{
		PairedFlexDevices.Remove(Device);
	}
	ConnectedControllers.Remove(Device);
	Device->UFlexController::SetColor(EFlexColor::EFC_White, nullptr);
}


bool UBluetoothManagerSubsystem::DoesFlexControllerArrayContainColor(EFlexColor color, const TArray<UFlexController*>& controllers)
{
	bool contained = false;
	for (int j = 0; j < controllers.Num(); ++j)
	{
		if (controllers[j] && controllers[j]->GetSensorData().Color == color)
		{
			contained = true;
			break;
		}
	}
	return contained;
}

EFlexColor UBluetoothManagerSubsystem::GetNextColor() const
{
	// First color is reserved for unassigned players and should not be used by a controller
	for (int i = 1; i < DeviceColors.Num(); ++i)
	{
		if (!DoesFlexControllerArrayContainColor(DeviceColors[i], UnpairedFlexDevices) && !DoesFlexControllerArrayContainColor(DeviceColors[i], PairedFlexDevices))
		{
			return DeviceColors[i];
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("No color found"));
	return DeviceColors[1];
}

