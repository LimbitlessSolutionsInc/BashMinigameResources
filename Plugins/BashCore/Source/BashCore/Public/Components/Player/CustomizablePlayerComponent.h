// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MuCO/CustomizableSkeletalComponent.h"
#include "CustomizablePlayerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BASHCORE_API UCustomizablePlayerComponent : public UCustomizableSkeletalComponent
{
	GENERATED_BODY()

	UCustomizablePlayerComponent();
	
protected:
	virtual void BeginPlay() override;
};
