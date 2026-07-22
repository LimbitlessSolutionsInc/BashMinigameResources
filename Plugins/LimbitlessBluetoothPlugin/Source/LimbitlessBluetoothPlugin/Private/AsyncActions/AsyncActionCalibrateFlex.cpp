// Fill out your copyright notice in the Description page of Project Settings.


#include "AsyncActions/AsyncActionCalibrateFlex.h"

#include "FlexController.h"

UAsyncActionCalibrateFlex* UAsyncActionCalibrateFlex::AsyncCalibrateFlexController(UFlexController* FlexController)
{
	if (!IsValid(FlexController) || FlexController->bIsCalibrating())
	{
		return nullptr;
	}
	
	UAsyncActionCalibrateFlex* Action = NewObject<UAsyncActionCalibrateFlex>();
	Action->FlexController = FlexController;

	FlexController->OnStartRestCalibration.AddDynamic(Action, &UAsyncActionCalibrateFlex::OnRestStarted);
	FlexController->OnStartFlexCalibration.AddDynamic(Action, &UAsyncActionCalibrateFlex::OnFlexStarted);
	FlexController->OnFinishFlexCalibration.AddDynamic(Action, &UAsyncActionCalibrateFlex::OnFlexFinished);
	
	Action->RegisterWithGameInstance(FlexController);

	return Action;
}

void UAsyncActionCalibrateFlex::Activate()
{
	Super::Activate();

	FlexController->BeginFlexCalibration();

}

void UAsyncActionCalibrateFlex::OnRestStarted(float Duration)
{
	OnRestCalibrationStarted.Broadcast(Duration);
}

void UAsyncActionCalibrateFlex::OnFlexStarted(float Duration)
{
	OnFlexCalibrationStarted.Broadcast(Duration);
}

void UAsyncActionCalibrateFlex::OnFlexFinished()
{
	FlexController->OnStartFlexCalibration.RemoveAll(this);
	FlexController->OnStartRestCalibration.RemoveAll(this);
	FlexController->OnFinishFlexCalibration.RemoveAll(this);

	OnCalibrationComplete.Broadcast();

	SetReadyToDestroy();
	MarkAsGarbage();
}
