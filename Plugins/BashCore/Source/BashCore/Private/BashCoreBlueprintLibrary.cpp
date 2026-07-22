// Fill out your copyright notice in the Description page of Project Settings.


#include "BashCoreBlueprintLibrary.h"

#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Player/AIPlayerDataSubsystem.h"
#include "Player/BashPlayerController.h"

UPlayerData* UBashCoreBlueprintLibrary::GetPlayerData(const UObject* WorldContextObject, int32 PlayerIndex)
{
	if (ABashPlayerController* PC = Cast<ABashPlayerController>(UGameplayStatics::GetPlayerController(WorldContextObject, PlayerIndex)))
	{
		if (!PC->Tags.Contains("Fake"))
		{
			return PC->GetBashLocalPlayer()->GetPlayerData();
		}
	}

	if (UAIPlayerDataSubsystem* AIDataSubsystem = UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UAIPlayerDataSubsystem>())
	{
		return AIDataSubsystem->GetAIPlayerData(PlayerIndex);
	}

	return nullptr;
}
