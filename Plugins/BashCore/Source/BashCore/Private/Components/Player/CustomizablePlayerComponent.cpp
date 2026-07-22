// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Player/CustomizablePlayerComponent.h"
#include "GameFramework/Pawn.h"
#include "BashCoreLog.h"
#include "Player/BashPlayerController.h"
#include "Player/BashLocalPlayer.h"

UCustomizablePlayerComponent::UCustomizablePlayerComponent()
{
	SetComponentName("Main");
}

void UCustomizablePlayerComponent::LoadCustomizableInstance(UPlayerData* PlayerData)
{
	if (!PlayerData)
	{
		UE_LOG(LogBashCore, Error, TEXT("CustomizablePlayerComponent: Invalid controller"));
		return;
	}
	CustomizableObjectInstance = PlayerData->GetCustomizableInstance();
}

void UCustomizablePlayerComponent::BeginPlay()
{
	Super::BeginPlay();

	// Try to load from owner's controller
	APawn* AsPawn = Cast<APawn>(GetOwner());
	if (!AsPawn)
	{
		return;
	}

	if (IBashController* BashController = Cast<IBashController>(AsPawn->GetController()))
	{
		LoadCustomizableInstance(BashController->GetPlayerData());
	}
}

