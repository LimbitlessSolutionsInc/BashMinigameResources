// Fill out your copyright notice in the Description page of Project Settings.


#include "AsyncActions/AsyncActionCalibrateIMU.h"

#include "FlexController.h"

UAsyncActionCalibrateIMU* UAsyncActionCalibrateIMU::AsyncCalibrateIMU(UFlexController* FlexController)
{
	if (!IsValid(FlexController) || FlexController->bIsCalibrating())
	{
		return nullptr;
	}
	
	UAsyncActionCalibrateIMU* Action = NewObject<UAsyncActionCalibrateIMU>();
	Action->FlexController = FlexController;

	FlexController->OnStartIMUCalibration.AddDynamic(Action, &UAsyncActionCalibrateIMU::HandleCalibrationStart);
	FlexController->OnFinishIMUCalibration.AddDynamic(Action, &UAsyncActionCalibrateIMU::HandleCalibrationEnd);
	
	Action->RegisterWithGameInstance(FlexController);

	return Action;
}

void UAsyncActionCalibrateIMU::HandleCalibrationStart(float Duration)
{
	OnCalibrationStarted.Broadcast(Duration);
}

void UAsyncActionCalibrateIMU::HandleCalibrationEnd()
{
	FlexController->OnStartIMUCalibration.RemoveAll(this);
	FlexController->OnFinishIMUCalibration.RemoveAll(this);
	
	OnCalibrationComplete.Broadcast();

	SetReadyToDestroy();
	MarkAsGarbage();
}

void UAsyncActionCalibrateIMU::Activate()
{
	Super::Activate();

	FlexController->BeginIMUCalibration();
}
