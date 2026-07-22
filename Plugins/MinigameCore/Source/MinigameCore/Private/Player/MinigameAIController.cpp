// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MinigameAIController.h"

#include "MinigameBase.h"
#include "Kismet/GameplayStatics.h"
#include "Player/AIPlayerDataSubsystem.h"
#include "Player/MinigamePlayer.h"

AMinigameAIController::AMinigameAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMinigameAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	Player = Cast<AMinigamePlayer>(InPawn);
	Minigame = Cast<AMinigameBase>(UGameplayStatics::GetGameMode(this));
	
	UAIPlayerDataSubsystem* AIDataSubsystem = Minigame->GetGameInstance()->GetSubsystem<UAIPlayerDataSubsystem>();
	PlayerData = AIDataSubsystem->GetAIPlayerData(Player->PlayerNumber);

	if (Minigame->IsPractice())
	{
		Minigame->ReadyPlayer(Player->PlayerNumber, true);
	}
	
	OnMinigamePlayerPossessed();
}

APawn* AMinigameAIController::GetPlayerPawn() const
{
	return Player;
}

UPlayerData* AMinigameAIController::GetPlayerData() const
{
	return PlayerData;
}
