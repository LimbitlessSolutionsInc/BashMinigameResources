// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorPool.generated.h"

UCLASS(BlueprintType)
class MINIGAMECORE_API UActorPool : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void InitializePool(TSubclassOf<AActor> ActorClass, int32 Count, UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable)
	TSubclassOf<AActor> GetPoolClass() const { return PoolClass; }

	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType="Class"))
	AActor* GetActorFromPoolTyped(TSubclassOf<AActor> Class);
	
	UFUNCTION(BlueprintCallable)
	AActor* GetActorFromPool();

	UFUNCTION(BlueprintCallable)
	void ReturnToPool(AActor* Actor);

private:
	UPROPERTY()
	TArray<AActor*> Pool;
	
	int32 CurrentIndex;

	TSubclassOf<AActor> PoolClass;
	bool bIsInitialized;
};
