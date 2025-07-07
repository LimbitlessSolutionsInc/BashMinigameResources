// Copyright Limbitless Solutions, Inc. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MinigamePlayer.generated.h"

struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class AMinigameBase;

UCLASS()
class MINIGAMECORE_API AMinigamePlayer : public APawn
{
	GENERATED_BODY()

public:
	AMinigamePlayer();

	UPROPERTY(BlueprintReadOnly, Category = "Minigame Player")
	int Team{};

	UPROPERTY(BlueprintReadOnly, Category = "Minigame Player")
	int PlayerNumber{};

	UPROPERTY(BlueprintReadOnly, Category = "Minigame Player")
	bool bHasFlexDevice{};

	UPROPERTY(BlueprintReadOnly, Category = "Minigame Player")
	bool bIsReady{};
	
	UFUNCTION()
	void ReadyPlayer(const FInputActionValue& value);

	UPROPERTY(BlueprintReadOnly, Category = "Minigame Player")
	AMinigameBase* Minigame;

	UFUNCTION(BlueprintCallable, Category = "Minigame Player")
	void AddMappingContext();

	UFUNCTION(BlueprintCallable, Category = "Minigame Player")
	void RemoveMappingContext();

private:
	TObjectPtr<UInputMappingContext> InputMapping;
	TObjectPtr<UInputAction> ReadyAction;

#if WITH_EDITOR
	TObjectPtr<UInputAction> ReadyAllPlayersAction;

	void ReadyAllPlayers();
#endif
	
protected:
	virtual void SetupPlayerInputComponent(UInputComponent* playerInputComponent) override;
};
