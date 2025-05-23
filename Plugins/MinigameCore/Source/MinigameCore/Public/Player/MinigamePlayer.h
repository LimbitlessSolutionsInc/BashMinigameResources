// Copyright Limbitless Solutions, Inc. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MinigamePlayer.generated.h"

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

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame Input", meta = (AllowPrivateAccess = true))
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame Input",  meta=(AllowPrivateAccess = true))
	TObjectPtr<UInputAction> ReadyAction;

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* playerInputComponent) override;
};
