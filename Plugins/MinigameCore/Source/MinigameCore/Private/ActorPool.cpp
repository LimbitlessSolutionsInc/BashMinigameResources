// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPool.h"

#include "MinigameCoreLogChannel.h"

void UActorPool::InitializePool(TSubclassOf<AActor> ActorClass, int32 Count, UObject* WorldContextObject)
{
	if (bIsInitialized) { return; }
	bIsInitialized = true;

	PoolClass = ActorClass;
	UWorld* World = WorldContextObject->GetWorld();

	Pool.Init(nullptr, Count);
	for (int32 i = 0; i < Pool.Num(); ++i)
	{
		AActor* Actor = World->SpawnActor(ActorClass, {}, {});
		Actor->SetActorTickEnabled(false);
		Actor->SetActorHiddenInGame(true);
		Actor->SetActorEnableCollision(false);
		Pool[i] = Actor;
	}
}

AActor* UActorPool::GetActorFromPoolTyped(TSubclassOf<AActor> Class)
{
	return GetActorFromPool();
}

AActor* UActorPool::GetActorFromPool()
{
	if (CurrentIndex >= Pool.Num())
	{
		UE_LOG(LogMinigameCore, Error, TEXT("Actor Pool %s is empty"), *GetName());
		return nullptr;
	}
	AActor* Actor = Pool[CurrentIndex++];
	Actor->SetActorTickEnabled(true);
	Actor->SetActorHiddenInGame(false);
	Actor->SetActorEnableCollision(true);
	return Actor;
}

void UActorPool::ReturnToPool(AActor* Actor)
{
	if (CurrentIndex <= 0)
	{
		UE_LOG(LogMinigameCore, Error, TEXT("Actor Pool %s is full"), *GetName());
		return;
	}
	Actor->SetActorTickEnabled(false);
	Actor->SetActorHiddenInGame(true);
	Actor->SetActorEnableCollision(false);
	Pool[--CurrentIndex] = Actor;
}
