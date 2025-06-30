// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClasses/LimbitlessLocalPlayer.h"
#include "Engine/LocalPlayer.h"
#include "BashLocalPlayer.generated.h"

class UFlexController;
class UCustomizableObjectInstance;
class UCustomizableObject;

UCLASS(BlueprintType)
class UPlayerData : public UObject
{
	GENERATED_BODY()

public:
	//Player Data getters/setters
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetTilePos() const
	{
		return TilePos;
	};

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetCoins() const
	{
		return Coins;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetMobius() const
	{
		return Mobius;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetPlayerNum() const
	{
		return PlayerNum;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void SetTilePos(int newTilePos)
	{
		TilePos = newTilePos;
	}
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void SetCoins(int newCoins)
	{
		Coins = newCoins;
	}
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void SetMobius(int newMobius)
	{
		Mobius = newMobius;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	UCustomizableObjectInstance* GetCustomizableInstance() const
	{
		return CustomizableObjectInstance;
	}

public:
	int PlayerNum = -1;
	UPROPERTY()
	int PlayerOrder = 0;
	UPROPERTY(BlueprintReadWrite, Category = "Player Data")
	int TilePos = 0;
	UPROPERTY(BlueprintReadWrite, Category = "Player Data")
	int Coins = 0;
	UPROPERTY(BlueprintReadWrite, Category = "Player Data")
	int Mobius = 0;

	UPROPERTY()
	UCustomizableObjectInstance* CustomizableObjectInstance;

	void InitializeCustomizableInstance(UCustomizableObject* CO);
	
};

UCLASS()
class BASHCORE_API UBashLocalPlayer : public ULimbitlessLocalPlayer
{
	GENERATED_BODY()

public:
	UBashLocalPlayer();
	
	UFUNCTION(BlueprintGetter)
	UPlayerData* GetPlayerData()
	{
		return PlayerData;
	};

	virtual void PlayerAdded(class UGameViewportClient* InViewportClient, FPlatformUserId InUserId) override;
	virtual void PlayerAdded(class UGameViewportClient* InViewportClient, int32 InControllerID) override;

protected:
	UPROPERTY(BlueprintGetter = GetPlayerData, Category = "Player Data")
	TObjectPtr<UPlayerData> PlayerData;

	UPROPERTY()
	TObjectPtr<UCustomizableObject> CustomizableObject;
};
