// Copyright Limbitless Solutions, Inc. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerSpawn.generated.h"

UCLASS()
class MINIGAMECORE_API APlayerSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Team associated with this player spawn
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Spawn Properties", 
		meta = (ClampMin = "0", ClampMax = "1"))
	int Team{ 0 };

	// The position of this player spawn in the team
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Spawn Properties",
		meta = (ClampMin = "0", ClampMax = "3"))
	int Position{ 0 };

	// The number of players that must be playing to consider this player spawn
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Spawn Properties",
		meta = (ClampMin = "1", ClampMax = "4"))
	int NumPlayersRequired{ 1 };

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Spawn Properties")
	bool bUseOnAnyPlayerCount{};
};
