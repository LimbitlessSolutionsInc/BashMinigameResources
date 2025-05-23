// Copyright Limbitless Solutions, Inc. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BashGamemode.h"
#include "ControlDisplay.h"
#include "MinigameEnums.h"
#include "MinigameBase.generated.h"

// Forward declarations
class UMinigameUI;
class UPracticeModeUI;
class APlayerSpawn;
class UMinigameSessionSubsystem;
class AMinigamePlayer;
class USplitscreenUI;
class ULevelSequence;
class ULevelSequencePlayer;
class UBasePointCounter;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameStartedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameEndedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameResetSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPracticeModeEndSignature);

/**
 * 
 */

constexpr int MaxTeams{};
constexpr int MaxPlayers{};

UCLASS()
class MINIGAMECORE_API AMinigameBase : public ABashGamemode
{
	GENERATED_BODY()

public:
	AMinigameBase();

	UPROPERTY(BlueprintAssignable);
	FGameStartedSignature OnGameStart;

	UPROPERTY(BlueprintAssignable)
	FGameEndedSignature OnGameEnd;
	
	UPROPERTY(BlueprintAssignable)
	FGameResetSignature OnGameReset;

	UPROPERTY(BlueprintAssignable)
	FPracticeModeEndSignature OnPracticeModeEnd;

	// Readies a Player to exit practice mode
	UFUNCTION(BlueprintCallable, Category = "Minigame|Practice")
	void ReadyPlayer(int Player, bool state);

	// Checks the ready status of a player in practice mode
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Minigame|Practice")
	int CheckReady(int Player) const;

	// Ends the minigame early
	UFUNCTION(BlueprintCallable, Category = "Minigame")
	void EndGame();

	UFUNCTION(BlueprintCallable, Category = "Minigame|Player")
	AMinigamePlayer* GetPlayer(int PlayerNum) const;

	/**
	*	Handles ending of the game.
	*	@param bTransitionToPractice True if the game will transition 
	*/
	void EndGame(bool bTransitionToPractice, bool bIgnoreIfEnding = false);

	// Registers a camera to be used by the splitscreen system
	UFUNCTION(BlueprintCallable, Category = "Minigame|Splitscreen")
	void AddCamera(AMinigameCapture* Camera, int CameraNumber);

	// Gets the camera assigned to this player through the splitscreen system
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Minigame|Splitscreen")
	AMinigameCapture* GetCamera(int PlayerNumber) const;

	// Returns the number of camera splits this gamemode should have
	UFUNCTION(BlueprintCallable, Category = "Minigame|Splitscreen")
	int GetNumCameraSplits() const;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool DebugHideUI{};

protected:
	virtual void Tick(float DeltaTime) override;

	virtual void StartPlay() override;

	void FindPlayerSpawns();

	virtual void ResetLevel() override;
private:
	// The Pawns to spawn as the players of each team. Index 0 corresponds to the first team, etc.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|Settings", meta = (AllowPrivateAccess = true))
	TArray<TSubclassOf<AMinigamePlayer>> PlayerObjects;

	// The team arrangement of this minigame.
	UPROPERTY(EditDefaultsOnly, BlueprintGetter = GetTeamType, Category = "Minigame|Settings")
	EMinigameType TeamType;

	// The amount of time the minigame should last before ending, in seconds
	UPROPERTY(EditDefaultsOnly, Category = "Minigame|Settings")
	double MinigameDuration;

	// The amount of time remaining for this minigame, in seconds.
	UPROPERTY(EditInstanceOnly, BlueprintGetter = GetTimeRemaining, BlueprintSetter = SetTimeRemaining, Category = "Minigame|Gameplay", meta = (AllowPrivateAccess = true))
	double TimeRemaining;

	// The name of the minigame to display in Practice UI
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|Practice", meta = (AllowPrivateAccess = true))
	FString MinigameName;

	// The description of the minigame. This should explain what the goal of the minigame is and how to play
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|Practice", meta = (AllowPrivateAccess = true))
	FString Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|Practice", meta = (AllowPrivateAccess = true))
	TArray<FControlDisplay> Controls;

	// Amount of time between game ending and game resetting in practice mode
	UPROPERTY(EditDefaultsOnly, Category = "Minigame|Practice")
	float ResetDelay{ 1.f };

	// The UI to spawn during the Practice phase
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<UPracticeModeUI> PracticeUIClass;

	// The UI to display in the minigame. Can be left unassigned if no minigame UI is desired
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<UMinigameUI> MinigameUIClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Minigame|UI", meta = (AllowPrivateAccess = true))
	TSubclassOf<UUserWidget> EndUIClass;

	// Should splits be assigned to each player or to each team?
	UPROPERTY(EditDefaultsOnly, Category = "Minigame|Splitscreen")
	ESplitBy SplitBy;

	// Whether this minigame should use splitscreen
	UPROPERTY(EditDefaultsOnly, Category = "Minigame|Splitscreen", meta = (AllowPrivateAccess = true))
	bool bUseSplitscreen;

	// Widget classes to spawn for specified number of splits
	UPROPERTY(EditDefaultsOnly, Category = "Minigame|Splitscreen", meta = (AllowPrivateAccess = true))
	TArray<TSubclassOf<USplitscreenUI>> SplitscreenUIClasses;

	// The amount of time that has passed since the start of the minigame, in seconds
	UPROPERTY(VisibleInstanceOnly, BlueprintGetter = GetTimeElapsed, Category = "Minigame|Gameplay")
	double TimeElapsed;

	// Number of players currently in this game
	UPROPERTY(BlueprintGetter = GetInstanceNumPlayers, meta = (AllowPrivateAccess = true), Category = "Minigame|Gameplay")
	int NumPlayers;

	// True if the minigame is in practice mode
	UPROPERTY(BlueprintGetter = IsPractice, meta = (AllowPrivateAccess = true), Category = "Minigame|Gameplay")
	bool bIsPractice;

	// True if the minigame is not finished
	UPROPERTY(BlueprintGetter = IsInProgress, meta = (AllowPrivateAccess = true), Category = "Minigame|Gameplay")
	bool bIsInProgress;

	UPROPERTY(EditDefaultsOnly, Category="Minigame|Settings")
	TObjectPtr<ULevelSequence> LevelSequence{};

private:
	TObjectPtr<UMinigameSessionSubsystem> MinigameSessionSubsystem;

	TObjectPtr<UPracticeModeUI> PracticeUI{};

	TObjectPtr<UUserWidget> CurrentMinigameUI{};

	float TransitionDelay{ 2.f };

	UBasePointCounter* PointCounter{};

	// Index: Player | Value: Team of player
	TArray<int> TeamsByPlayers;
	TArray<int> TeamPoints;
	TArray<bool> ReadyPlayers;

	// Index: Player number | Value: Minigame rank (1st, 2nd, 3rd, 4th)
	// Note that there can be two players with the same rank
	TArray<int> StandingsByPlayers;

	// Index: Position on the results board | Value: Player number
	TArray<int> PlayersByStandings;

	TArray<TObjectPtr<AMinigamePlayer>> Players;

	// Player spawns by player count, team, and position
	APlayerSpawn* PlayerSpawns[4][2][4];
	//TArray<APlayerSpawn*> PlayerSpawns;

	TArray<AMinigameCapture*> SplitCameras;
	
	ACameraActor* EndCamera;

	ULevelSequencePlayer* SequencePlayer;

	FTimerHandle ResetTimerHandle{};

	// Returns the index in playerSpawns that has the specified team and position
	AActor* GetPlayerSpawn(int Team, int pos) const;

	// Splits players into teams depending on the Team Type selected.
	// Index of resultant array is the player number, value is the team number
	TArray<int> SplitIntoTeams();

	// Initializes the team points array based on team arrangement.
	void InitPoints();

	UFUNCTION()
	void StartGame();

	// Finds and stores references to minigame cameras in the level
	void FindMinigameCameras();

	// Ends the game (excluding Practice Mode where the minigame resets)
	void ProcessMinigameEnd();

	void ChangeLevel();

	// Ends practice and begins transition to actual minigame
	void EndPracticeMode();

	void ClearMinigameUI();

	// Draws minigame UI whenever the minigame is started.
	void DrawMinigameUI();

	// Draws end UI when the game ends (excluding Practice Mode where the minigame resets)
	void DrawEndUI();

	// Resets the game
	void StartReset();

	// Alerts to log and error
	FORCEINLINE void AlertWarning(const FString& Text) const;
	FORCEINLINE void AlertError(const FString& Text) const;

public:
	UFUNCTION(BlueprintGetter)
	double GetTimeRemaining() const { return TimeRemaining; }

	UFUNCTION(BlueprintSetter)
	void SetTimeRemaining(double time) { TimeRemaining = time; }

	UFUNCTION(BlueprintGetter)
	double GetTimeElapsed() const { return TimeElapsed; }

	UFUNCTION(BlueprintGetter)
	int GetInstanceNumPlayers() const { return NumPlayers; }

	UFUNCTION(BlueprintGetter)
	bool IsPractice() const { return bIsPractice; }

	UFUNCTION(BlueprintGetter)
	bool IsInProgress() const { return bIsInProgress; }

	UFUNCTION(BlueprintGetter)
	EMinigameType GetTeamType() const { return TeamType; }

	UFUNCTION(BlueprintCallable, Category = "Minigame|Points")
	UBasePointCounter* GetPointCounter() const { return PointCounter; }
};


