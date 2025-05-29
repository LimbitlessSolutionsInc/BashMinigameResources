// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "PlayerMeshComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup=(Rendering, Common), hidecategories=(Object), editinlinenew, meta=(BlueprintSpawnableComponent))
class BASHCORE_API UPlayerMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Player Mesh")
	void LoadMeshFromLocalPlayer();
	
protected:
	virtual void BeginPlay() override;
};
