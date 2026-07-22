// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "CustomizerPortraitCapture.generated.h"

class UCustomizableSkeletalComponent;
class UPlayerData;
class USceneComponent;
class USceneCaptureComponent2D;

UCLASS()
class BASHCORE_API ACustomizerPortraitCapture : public AActor
{
	GENERATED_BODY()

public:
	ACustomizerPortraitCapture();
	
	UFUNCTION(BlueprintCallable)
	void CapturePortrait(UPlayerData* InPlayerData);
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portrait")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portrait")
	TObjectPtr<USceneCaptureComponent2D> CaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portrait")
	TObjectPtr<USkeletalMeshComponent> PlayerMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Portrait")
	TObjectPtr<UCustomizableSkeletalComponent> CustomizableSkeletal;

private:
	UFUNCTION()
	void FinishPortraitCapture(const FUpdateContext& Context);

	TObjectPtr<UPlayerData> PlayerData;
};
