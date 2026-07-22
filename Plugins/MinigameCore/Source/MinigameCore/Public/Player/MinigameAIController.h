// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Player/BashController.h"
#include "MinigameAIController.generated.h"

class AMinigamePlayer;
class AMinigameBase;

UCLASS()
class MINIGAMECORE_API AMinigameAIController : public AAIController, public IBashController
{
	GENERATED_BODY()

public:
	AMinigameAIController();

	virtual void OnPossess(APawn* InPawn) final override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnMinigamePlayerPossessed();

	virtual APawn* GetPlayerPawn() const override;

	virtual UPlayerData* GetPlayerData() const override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Minigame")
	TObjectPtr<AMinigameBase> Minigame;

	UPROPERTY(BlueprintReadOnly, Category = "Minigame")
	TObjectPtr<AMinigamePlayer> Player;

private:
	TObjectPtr<UPlayerData> PlayerData;
};
