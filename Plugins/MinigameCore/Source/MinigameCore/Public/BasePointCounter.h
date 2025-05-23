// Copyright Limbitless Solutions, Inc. All Rights Reserved


#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinigameEnums.h"
#include "BasePointCounter.generated.h"

struct FMinigameStanding;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPointsChanged, int, Team, int, Amount);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MINIGAMECORE_API UBasePointCounter : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBasePointCounter();

	UPROPERTY(BlueprintAssignable, Category = "Point Counter");
	FPointsChanged OnPointsChanged;

	// Adds points to the team's point counter. In FFA, the player number is the team number.
	UFUNCTION(BlueprintCallable, Category = "Point Counter")
	virtual void AddPoints(int Team, int Amount);

	// Sets a team's point counter to the amount. In FFA, the player number is the team number.
	UFUNCTION(BlueprintCallable, Category = "Point Counter")
	virtual void SetPoints(int Team, int Amount);

	// Returns the current number of points of a team. In FFA, the player number is the team number.
	UFUNCTION(BlueprintCallable, Category = "Point Counter")
	virtual int GetPoints(int Team) const;

	// Returns the current number of points of a player. In FFA, the player number is the team number.
	UFUNCTION(BlueprintCallable, Category = "Point Counter")
	virtual int GetPointsByPlayer(int Player) const;

	// Gets the results of the minigame based on the current score
	virtual TArray<FMinigameStanding> GetStandings() const;

	// Initializes point counter with team information
	virtual void InitializePointCounter(int NumTeams, TArray<int> TeamAssignment);

protected:
	TArray<int> TeamPoints{};

	// Maps player numbers to teams
	TArray<int> PlayersToTeams{};

private:
};
