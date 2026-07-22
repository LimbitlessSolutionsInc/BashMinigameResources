// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClasses/LimbitlessLocalPlayer.h"
#include "Engine/LocalPlayer.h"
#include "BashLocalPlayer.generated.h"

class UCanvasRenderTarget2D;
class UFlexController;
class UCustomizableObjectInstance;
class UCustomizableObject;

UCLASS(BlueprintType)
class BASHCORE_API UPlayerData : public UObject
{
	GENERATED_BODY()

public:
	UPlayerData();
	
	//Player Data getters/setters
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	const FString& GetCurrentTileName() const
	{
		return CurrentTileName;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void SetPlayerNum(int Num)
	{
		PlayerNum = Num;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void SetCurrentTile(const FString& TileName)
	{
		CurrentTileName = TileName;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	int GetCoins() const;

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
	void SetCoins(int newCoins);

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void ModifyCoins(int DeltaCoins)
	{
		SetCoins(FMath::Max(Coins + DeltaCoins, 0));
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

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	UCanvasRenderTarget2D* GetPortraitTexture() const
	{
		return PortraitTexture;
	}

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	UMaterialInstanceDynamic* GetPortraitMaterial() const
	{
		return PortraitMaterial;
	}
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void AddBoardItem(UObject* Item);

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	void RemoveBoardItem(UObject* Item);
	
	UFUNCTION(BlueprintCallable, Category = "Player Data")
	const TArray<UObject*>& GetBoardItems() const;

	void Initialize(UCustomizableObject* CO, bool bInIsAI = false);

	UFUNCTION(BlueprintCallable, Category = "Player Data")
	bool GetIsAI() const { return bIsAI; }

private:
	void InitializeCustomizableInstance(UCustomizableObject* CO);
	void InitializePortraitTexture();
	
	int PlayerNum = -1;

	// Name of the tile the player was last on in the board
	FString CurrentTileName;
	
	int Coins = 0;
	int Mobius = 0;

	UPROPERTY()
	TArray<TObjectPtr<UObject>> BoardItems{};

	UPROPERTY()
	TObjectPtr<UCustomizableObjectInstance> CustomizableObjectInstance;

	UPROPERTY()
	TObjectPtr<UCanvasRenderTarget2D> PortraitTexture;
	
	UPROPERTY()
	TObjectPtr<UMaterialInstanceDynamic> PortraitMaterial;

	UPROPERTY()
	bool bIsAI;
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

private:
	UPROPERTY()
	TObjectPtr<UCustomizableObject> CustomizableObject;
};
