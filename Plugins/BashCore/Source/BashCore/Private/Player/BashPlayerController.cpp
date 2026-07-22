// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BashPlayerController.h"

#include "Components/Player/UIInputComponent.h"
#include "Player/BashLocalPlayer.h"

ABashPlayerController::ABashPlayerController()
{
	UIInputComponent = CreateDefaultSubobject<UUIInputComponent>(FName("UIInputComponent"));

}

UUIInputComponentBase* ABashPlayerController::GetUiInputComponent() const
{
	return GetPlayerUiInputComponent();
}

UUIInputComponent* ABashPlayerController::GetPlayerUiInputComponent() const
{
	return UIInputComponent;
}

UPlayerData* ABashPlayerController::GetPlayerData() const
{
	if (BashLocalPlayer)
	{
		return BashLocalPlayer->GetPlayerData();
	}
	return nullptr;
}

APawn* ABashPlayerController::GetPlayerPawn() const
{
	return GetPawn();
}

UBashLocalPlayer* ABashPlayerController::GetBashLocalPlayer()
{
	if (!BashLocalPlayer)
	{
		SetupBashLocalPlayer();
	}
	if (!BashLocalPlayer)
	{
		return nullptr;
	}
	return BashLocalPlayer.Get();
	
}

void ABashPlayerController::BeginPlay()
{
	Super::BeginPlay();
	

	SetupBashLocalPlayer();
	//TODO: disable default UMG navigation because we use a custom system.


}

void ABashPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	SetupBashLocalPlayer();
}

void ABashPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	UIInputComponent->SetupInput(this);
	FInputModeGameOnly inputMode;
	SetInputMode(inputMode);
}


void ABashPlayerController::SetupBashLocalPlayer()
{
	if (!GetLocalPlayer())
	{
		UE_LOG(LogTemp, Warning, TEXT("Local player is null"))
		return;
	}
	BashLocalPlayer = Cast<UBashLocalPlayer>(GetLocalPlayer());
	if (!BashLocalPlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("Local player is not a BashLocalPlayer"))
	}
}
