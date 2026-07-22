/**************************************************************************************************
 * BasePointCounter.cpp
 * LIMBITLESS SOLUTIONS INC.                                                              2/21/2025
 * https://limbitless-solutions.org/                                                         
 * 
 * Author:  Donny Akers
 * 
 * Copyright (C) 2025 Limbitless Solutions Inc.
 * Copyright (C) 2025 University of Central Florida
 * 
 * This work is licensed under the:
 * Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/ 
 * or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
 */

#include "Components/BasePointCounter.h"

#include "MinigameCoreLogChannel.h"
#include "Data/MinigameStanding.h"

UBasePointCounter::UBasePointCounter()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBasePointCounter::AddPoints_Implementation(int Team, int Amount)
{
	if (0 <= Team && Team < TeamPoints.Num())
	{
		TeamPoints[Team] += Amount;
		if (Amount != 0)
		{
			OnPointsChanged.Broadcast(Team, TeamPoints[Team]);
		}
	}
	else
	{
		UE_LOG(LogMinigameCore, Error, TEXT("PointCounter: Invalid team number."));
	}
}

void UBasePointCounter::SetPoints_Implementation(int Team, int Amount)
{
	if (!bIsInitialized)
	{
		UE_LOG(LogMinigameCore, Error, TEXT("Point Counter: Attempted to set points on uninitialized point counter! Point counter should only be used after the minigame's StartGame is called"));
		return;
	}
	if (0 <= Team && Team < TeamPoints.Num())
	{
		int original = TeamPoints[Team];
		TeamPoints[Team] = Amount;
		if (original != Amount)
		{
			OnPointsChanged.Broadcast(Team, TeamPoints[Team]);
		}
	}
	else
	{
		UE_LOG(LogMinigameCore, Error, TEXT("PointCounter: Invalid team number."));
	}
}

int UBasePointCounter::GetPoints_Implementation(int Team) const
{
	if (!bIsInitialized)
	{
		UE_LOG(LogMinigameCore, Error, TEXT("Point Counter: Attempted to set points on uninitialized point counter! Point counter should only be used after the minigame's StartGame is called"));
		return -999;
	}
	if (0 <= Team && Team < TeamPoints.Num())
	{
		return TeamPoints[Team];
	}
	else
	{
		UE_LOG(LogMinigameCore, Error, TEXT("PointCounter: Invalid team number."));
		return -999;
	}
}

void UBasePointCounter::InitializePointCounter_Implementation(int NumTeams, const TArray<int>& TeamAssignment)
{
	bIsInitialized = true;
	SetupTeamAssignment(NumTeams, TeamAssignment);
}

void UBasePointCounter::SetupTeamAssignment_Implementation(int NumTeams, const TArray<int>& TeamAssignments)
{
	TeamPoints.Init(0, NumTeams);
	PlayersToTeams = TeamAssignments;
}


int UBasePointCounter::GetPointsByPlayer_Implementation(int Player) const
{
	if (0 <= Player && Player < PlayersToTeams.Num())
	{
		return GetPoints(PlayersToTeams[Player]);
	}
	else
	{
		UE_LOG(LogMinigameCore, Error, TEXT("PointCounter: Invalid player number."));
		return -999;
	}
}

TArray<FMinigameStanding> UBasePointCounter::GetStandings_Implementation() const
{
	int Num = PlayersToTeams.Num();
	TArray<FMinigameStanding> Res;
	Res.Init({ 0,0 }, Num);

	for (int i = 0; i < Num; i++)
	{
		Res[i].Player = i;
	}

	// Insertion sort
	// Sort the array of player indices such that their corresponding points
	// are in descending order.
	for (int i = 1; i < Num; i++)
	{
		for (int j = i; j > 0; j--)
		{
			// Check if adjacent elements are inverted
			if (GetPointsByPlayer(Res[i - 1].Player) < GetPointsByPlayer(Res[i].Player))
			{
				// Swap elements
				int Temp{ Res[i].Player };
				Res[j].Player = Res[j - 1].Player;
				Res[j - 1].Player = Temp;
			}
		}
	}

	// Set standings based on ordered player indices
	for (int i = 0; i < Num; i++) {
		// Check if there is a tie. Tied players should have the same ranking
		if (i > 0 && GetPointsByPlayer(Res[i - 1].Player) == GetPointsByPlayer(Res[i].Player))
		{
			Res[i].Place = Res[i - 1].Place;
		}
		else
		{
			Res[i].Place = i + 1;
		}
	}

	FString Log{};
	for (const auto& Standing : Res)
	{
		Log += FString::Printf(TEXT("Player: %d | Place: %d\n"), Standing.Player, Standing.Place);
	}
	UE_LOG(LogMinigameCore, Log, TEXT("%s"), *Log);

	return Res;
}


