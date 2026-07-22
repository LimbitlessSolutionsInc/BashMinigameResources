// Fill out your copyright notice in the Description page of Project Settings.


#include "Cutscenes/MinigameCutsceneManager.h"

void UMinigameCutsceneManager::OnStartCutscene_Implementation(AMinigameBase* Minigame)
{
	UE_LOG(LogTemp, Error, TEXT("Unimplemented cutscene"));
}

void UMinigameCutsceneManager::StartCutscene(AMinigameBase* InMinigame)
{
	CurrentMinigame = InMinigame;
	OnStartCutscene(CurrentMinigame);
}

void UMinigameCutsceneManager::EndCutscene()
{
	OnCutsceneCompleted.ExecuteIfBound();
}


class UWorld* UMinigameCutsceneManager::GetWorld() const
{
	if (UObject* Outer = GetOuter())
	{
		return Outer->GetWorld();
	}
	return {};
}
