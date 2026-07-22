// Fill out your copyright notice in the Description page of Project Settings.


#include "FlexSensorDisplayTool.h"
#include "Editor.h"
#include "FlexController.h"
#include "BluetoothManagerSubsystem.h"
#include "Subsystems/UnrealEditorSubsystem.h"

void UFlexSensorDisplayTool::RefreshDevices()
{
	UWorld* GameWorld = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>()->GetGameWorld();
	if (!GameWorld) { return; }
	
	UBluetoothManagerSubsystem* BluetoothSubsystem = GameWorld->GetGameInstance()->GetSubsystem<UBluetoothManagerSubsystem>();
	if (!BluetoothSubsystem) { return; }

	const TArray<UFlexController*>& ConnectedControllers = BluetoothSubsystem->GetConnectedControllers();

	// Untracked controllers that are no longer connected
	for (auto TrackedController : TrackedControllers)
	{
		if (!ConnectedControllers.Contains(TrackedController))
		{
			ControllerData.Remove(TrackedController);
		}
	}
	
	// Track controllers that are newly connected
	for (const auto Controller : ConnectedControllers)
	{
		if (!ControllerData.Contains(Controller))
		{
			FSensorDisplayData DisplayData{MaxValuesStored};
			ControllerData.Add(Controller, DisplayData);
		}
	}

	// Update tracked controllers
	ControllerData.GetKeys(TrackedControllers);
}

void UFlexSensorDisplayTool::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	for (auto& DataPair : ControllerData)
	{
		if (!IsValid(DataPair.Key)) { continue; }
		
		FSensorDisplayData& StoredData = DataPair.Value;
		const FSensorData& CurrentData = DataPair.Key->GetSensorData();
		
		AddDataToArray(StoredData.AngularVelocityX, CurrentData.AngularVelocity.X, MaxValuesStored);
		AddDataToArray(StoredData.AngularVelocityY, CurrentData.AngularVelocity.Y, MaxValuesStored);
		AddDataToArray(StoredData.AngularVelocityZ, CurrentData.AngularVelocity.Z, MaxValuesStored);

		AddDataToArray(StoredData.ProperAccelerationX, CurrentData.ProperAcceleration.X, MaxValuesStored);
		AddDataToArray(StoredData.ProperAccelerationY, CurrentData.ProperAcceleration.Y, MaxValuesStored);
		AddDataToArray(StoredData.ProperAccelerationZ, CurrentData.ProperAcceleration.Z, MaxValuesStored);

		// Transform from device-coordinates to global-coordinates
		FVector CoordinateAcceleration = DataPair.Key->GetCoordinateAcceleration();
		CoordinateAcceleration = DataPair.Key->GetCurRot().RotateVector(CoordinateAcceleration);
		
		AddDataToArray(StoredData.CoordinateAccelerationX, CoordinateAcceleration.X, MaxValuesStored);
		AddDataToArray(StoredData.CoordinateAccelerationY, CoordinateAcceleration.Y, MaxValuesStored);
		AddDataToArray(StoredData.CoordinateAccelerationZ, CoordinateAcceleration.Z, MaxValuesStored);
		
		AddDataToArray(StoredData.EMGReadings, CurrentData.EMGReading, MaxValuesStored);

	}
}

void UFlexSensorDisplayTool::AddDataToArray(TArray<float>& Array, float Data, int MaxSize)
{
	Array.Add(Data);
	if (Array.Num() > MaxSize)
	{
		// Pushes all elements forward, very slow but this doesn't need to be optimal
		Array.RemoveAt(0);
	}
}






