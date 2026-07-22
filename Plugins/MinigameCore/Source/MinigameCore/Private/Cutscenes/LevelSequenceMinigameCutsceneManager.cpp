// Fill out your copyright notice in the Description page of Project Settings.


#include "Cutscenes/LevelSequenceMinigameCutsceneManager.h"

#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "MinigameBase.h"
#include "MinigameCapture.h"
#include "Player/MinigamePlayer.h"

ULevelSequenceMinigameCutsceneManager::ULevelSequenceMinigameCutsceneManager()
{
	bShouldSpawnPlayers = true;
}

void ULevelSequenceMinigameCutsceneManager::OnStartCutscene_Implementation(AMinigameBase* Minigame)
{
	ALevelSequenceActor* SequenceActor{};
	ULevelSequencePlayer* SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(this, LevelSequence, {}, SequenceActor);

	SequencePlayer->OnNativeFinished.BindUObject(this, &ULevelSequenceMinigameCutsceneManager::OnLevelSequenceComplete);

	InitializeLevelSequence(SequenceActor);
	
	SequencePlayer->Play();
}

void ULevelSequenceMinigameCutsceneManager::InitializeLevelSequence_Implementation(ALevelSequenceActor* SequenceActor)
{
	if (bBindSpawnedPlayersToSequence)
	{
		const TArray<AMinigamePlayer*>& Players = CurrentMinigame->GetPlayers();

		for (const auto Player : Players)
		{
			SequenceActor->SetBindingByTag(*FString::Printf(TEXT("Player%d"), Player->PlayerNumber), { Player });
		}
	}

	AMinigameCapture* MinigameCamera = CurrentMinigame->GetCamera(0);
	SequenceActor->SetBindingByTag(TEXT("Camera"), { MinigameCamera });
}

void ULevelSequenceMinigameCutsceneManager::OnLevelSequenceComplete_Implementation()
{
	EndCutscene();
}
