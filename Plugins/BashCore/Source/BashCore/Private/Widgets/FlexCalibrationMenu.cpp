// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/FlexCalibrationMenu.h"

#include "FlexController.h"
#include "Player/BashLocalPlayer.h"
#include "Player/BashPlayerController.h"

void UFlexCalibrationMenu::NativeConstruct()
{
	Super::NativeConstruct();
	FlexData.Init(0, NumStoredValues);
}

void UFlexCalibrationMenu::OnOpenMenu(TScriptInterface<IBashController> InOwningPlayer)
{
	// Flex calibration menu should only be accessed by a Player Controller
	ABashPlayerController* OwningPC = Cast<ABashPlayerController>(InOwningPlayer.GetObject()); 
	TrackedController = OwningPC->GetBashLocalPlayer()->GetFlexController();

	FlexData.Init(0, NumStoredValues);

	Super::OnOpenMenu(InOwningPlayer);
}

void UFlexCalibrationMenu::OnCloseMenu()
{
	TrackedController.Reset();
	FlexData.Init(0, NumStoredValues);
	
	Super::OnCloseMenu();
}

void UFlexCalibrationMenu::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!TrackedController.IsValid()) { return; }

	FlexData.RemoveAt(0);
	FlexData.Add(TrackedController->GetSensorData().EMGReading);
}

void UFlexCalibrationMenu::SetTrackedController(UFlexController* Controller)
{
	TrackedController = Controller;
}

UFlexController* UFlexCalibrationMenu::GetTrackedController() const
{
	if (TrackedController.IsValid())
	{
		return TrackedController.Get();
	}
	return nullptr;
}

float UFlexCalibrationMenu::GetTrackedRestThreshold() const
{
	if (TrackedController.IsValid())
	{
		return TrackedController->GetRestThreshold();
	}
	return 0;
}
