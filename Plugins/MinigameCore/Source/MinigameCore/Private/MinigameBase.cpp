/**************************************************************************************************
 * MinigameBase.cpp
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

#include "MinigameBase.h"

#include "Data/MinigameEnums.h"
#include "Components/BasePointCounter.h"
#include "MinigameSessionSubsystem.h"
#include "TimerManager.h"
#include "MinigameCoreLogChannel.h"
#include "Engine/Engine.h"

// UI
#include "Widgets/MinigameUI.h"
#include "Widgets/PracticeModeUI.h"
#include "Widgets/SplitscreenUI.h"
#include "Components/OverlaySlot.h"
#include "Components/Overlay.h"

// Player Spawning
#include "Player/PlayerSpawn.h"
#include "Player/MinigamePlayer.h"
#include "MinigameCapture.h"
#include "Camera/CameraActor.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include <Kismet/GameplayStatics.h>

#include "MinigameCoreBlueprintLibrary.h"
#include "Components/CanvasPanel.h"
#include "Cutscenes/MinigameCutsceneManager.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Level.h"
#include "Player/MinigameAIController.h"


#pragma region Initialization
AMinigameBase::AMinigameBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	bIsPractice = true;
	SplitCameras.Init(nullptr, 4);
	
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> TmpContext(TEXT("/Script/EnhancedInput.InputMappingContext'/MinigameCore/Input/IMC_Minigame.IMC_Minigame'"));
	MinigameMappingContext = TmpContext.Object;
}

void AMinigameBase::StartPlay() 
{
	MinigameSessionSubsystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UMinigameSessionSubsystem>();
	
	DefaultCamera = Cast<ACameraActor>(UGameplayStatics::GetActorOfClass(this, ACameraActor::StaticClass()));

	NumPlayers = MinigameSessionSubsystem->GetPlayerCount();

#if WITH_EDITOR
	// For debug purposes only
	if (NumPlayers == 0) 
	{
		NumPlayers = 1;
	}
#endif

	FindMinigameCameras();

	FindPlayerSpawns();

	// Assign players to teams
	TeamsByPlayers = SplitIntoTeams();
	Teams = OrganizeByTeams(TeamsByPlayers);
	
	ReadyPlayers.Init(false, NumPlayers);

	if (UBasePointCounter* FoundCounter = Cast<UBasePointCounter>(GetComponentByClass(UBasePointCounter::StaticClass())))
	{
		PointCounter = FoundCounter;
	}
	else
	{
		PointCounter = NewObject<UBasePointCounter>(this, UBasePointCounter::StaticClass(), "Point Counter");
		PointCounter->RegisterComponent();
		
		AlertWarning("No point counter found. Creating default point counter.");
	}

	LastViewportSize = UMinigameCoreBlueprintLibrary::GetViewportSize(this);
	
	// Call BeginPlay on actors for one-time initializations
	Super::StartPlay();

	SetupGame();
	SpawnPlayers();
	StartGame();
}

void AMinigameBase::FindPlayerSpawns()
{
	// Get all player spawns
	TArray<AActor*> FoundSpawns;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerSpawn::StaticClass(), FoundSpawns);
	for (const auto FoundSpawn : FoundSpawns)
	{
		APlayerSpawn* Spawn = Cast<APlayerSpawn>(FoundSpawn);
		if (!Spawn) { continue; }

		// Should be safe to use values as index with no checks due to PlayerSpawn clamping
		if (PlayerSpawns[Spawn->NumPlayersRequired - 1][Spawn->Team][Spawn->Position] != nullptr)
		{
			AlertError(FString::Printf(
				TEXT("Minigame Base: Duplicate player spawn found for %d players, team %d, position %d."),
				Spawn->NumPlayersRequired, Spawn->Team, Spawn->Position));
			continue;
		}

		if (Spawn->bUseOnAnyPlayerCount)
		{
			for (int i = 0; i <= 3; ++i)
			{
				PlayerSpawns[i][Spawn->Team][Spawn->Position] = Spawn;
			}
		}
		else
		{
			PlayerSpawns[Spawn->NumPlayersRequired - 1][Spawn->Team][Spawn->Position] = Spawn;
		}
		
	}
}

void AMinigameBase::InitPoints() 
{
	// Indices are players
	if (TeamType == EMinigameType::MT_FFA) 
	{
		PointCounter->InitializePointCounter(NumPlayers, TeamsByPlayers);
	}
	// Indices are teams
	else 
	{
		PointCounter->InitializePointCounter(2, TeamsByPlayers);
	}
}

TArray<int> AMinigameBase::SplitIntoTeams() 
{
	/* Note: TeamType's int representation
	*  represents the number of players that
	*  the second team should have.
	*/

	// Ensure there are enough players
	if (NumPlayers <= static_cast<int>(TeamType)) 
	{
		AlertError("Not enough players for this game type!");
	}

	// Shuffle list of all players. Players are identified by their player number currently
	TArray<int> ShufflePlayers;
	ShufflePlayers.Init(0, NumPlayers);
	for (int i = 1; i < NumPlayers; ++i)
	{
		ShufflePlayers[i] = i;
	}

	if (TeamType == EMinigameType::MT_FFA)
	{
		return ShufflePlayers;
	}

	int NumShuffles = NumPlayers - 1;
	for (int i = 0; i < NumShuffles; ++i)
	{
		int SwapIdx = FMath::RandRange(i, NumShuffles);
		ShufflePlayers.Swap(i, SwapIdx);
	}

	TArray<int> TeamAssignment;
	TeamAssignment.Init(0, NumPlayers);

	// Assign players to teams randomly based on the shuffle
	for (int i = 0; i < static_cast<int>(TeamType) + 1 && i < NumPlayers; ++i)
	{
		// Allow second player to stay on team 1
		// This prevents all players being on the same team if not enough players are in the game
		if (i == 1) { continue; }
		TeamAssignment[ShufflePlayers[i]] = 1;
	}

	return TeamAssignment;
}

TArray<TArray<int>> AMinigameBase::OrganizeByTeams(TArray<int> InTeamsByPlayers)
{
	TArray<TArray<int>> Res{};

	// FFA - no teams
	if (TeamType == EMinigameType::MT_FFA)
	{
		Res.Init({}, 1);
		for (int i = 0; i < NumPlayers; ++i)
		{
			Res[0].Add(i);
		}
		return Res;
	}

	// Two teams for non-FFA gamemodes
	Res.Init({}, 2);
	
	for (int i = 0; i < InTeamsByPlayers.Num(); ++i)
	{
		Res[InTeamsByPlayers[i]].Add(i);
	}
	return Res;
}


void AMinigameBase::FindMinigameCameras()
{
	TArray<AActor*> MinigameCameras;
	UGameplayStatics::GetAllActorsOfClass(this, AMinigameCapture::StaticClass(), MinigameCameras);
	for (const auto& Camera : MinigameCameras)
	{
		if (auto MinigameCamera = Cast<AMinigameCapture>(Camera))
		{
			AddCamera(MinigameCamera, MinigameCamera->GetCaptureNumber());
		}
	}
}

void AMinigameBase::AddCamera(AMinigameCapture* Camera, int CameraNumber)
{
	if (CameraNumber < 0)
	{
		AlertError("Attempted to add camera with an invalid camera number");
		Camera->EnableCamera(false);
		return;
	}
	if (CameraNumber >= GetNumCameraSplits())
	{
		// Camera does not have a valid camera split. No need to report this
		Camera->EnableCamera(false);
		return;
	}
	if (SplitCameras[CameraNumber])
	{
		AlertWarning("Two cameras have the same camera number. Ignoring the duplicate camera. Please ensure each camera has a unique camera number.");
		Camera->EnableCamera(false);
		return;
	}
	Camera->EnableCamera(true);
	SplitCameras[CameraNumber] = Camera;
}

AMinigameCapture* AMinigameBase::GetCamera(int PlayerNumber) const
{
	if (PlayerNumber < 0 || PlayerNumber >= 4)
	{
		AlertError("Attempted to get the camera associated with an invalid player number.\n");
		return nullptr;
	}
	if (!bUseSplitscreen)
	{
		return SplitCameras[0];
	}
	if (SplitBy == ESplitBy::PLAYERS)
	{
		return SplitCameras[PlayerNumber];
	}
	else
	{
		return SplitCameras[TeamsByPlayers[PlayerNumber]];
	}
}

#pragma endregion

#pragma region Game Start

AActor* AMinigameBase::GetPlayerSpawn(int Team, int Pos) const
{
	int NumPlayersOnTeam = Teams[Team].Num();
	APlayerSpawn* PlayerSpawn = PlayerSpawns[NumPlayersOnTeam - 1][Team][Pos];
	if (PlayerSpawn)
	{
		return PlayerSpawn;
	}
	
	// Valid player spawn wasn't found
	AlertError(FString::Printf(TEXT("Player spawn missing! NumPlayersOnTeam: %d | Team %d | Position %d"), NumPlayersOnTeam, Team, Pos));
	return nullptr;
}

APawn* AMinigameBase::SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot)
{
	AlertError("DefaultPawnClass should not be used for minigames. Please set the pawn class through PlayerObjects instead.");
	return nullptr;
}

void AMinigameBase::SpawnPlayers()
{
	Players.Init(nullptr, NumPlayers);

	// Stores the position to spawn the next player on each team
	TArray<int> TeamNextStart;
	TeamNextStart.Init(0, 2);
	
	for (int i = 0; i < NumPlayers; i++)
	{
		// Get spawn location
		int Team{};
		if (TeamType == EMinigameType::MT_FFA)
		{
			Team = 0;
		}
		else
		{
			Team = TeamsByPlayers[i];
		}

		// Prevent crash if PlayerObjects is unassigned
		if (!PlayerObjects.IsValidIndex(Team) || PlayerObjects[Team] == nullptr) 
		{
			AlertError(FString::Printf(TEXT("No player object specified for team %d."), Team));
			continue;
		}

		AActor* Start = GetPlayerSpawn(Team, TeamNextStart[Team]++);
		FTransform StartPos{};
		AMinigamePlayer* Player{};
		if (Start != nullptr)
		{
			// Spawn player
			StartPos = FTransform{ Start->GetActorRotation(), Start->GetActorLocation(), FVector{1,1,1} };
		}

		Player = GetWorld()->SpawnActorDeferred<AMinigamePlayer>(PlayerObjects[Team], StartPos);

		Player->Team = (TeamType == EMinigameType::MT_FFA) ? i : TeamsByPlayers[i];

		Player->PlayerNumber = i;
		Player->Minigame = this;

		APlayerController* Controller = UGameplayStatics::GetPlayerControllerFromID(GetWorld(), i);

		if (Controller)
		{
			Controller->Possess(Player);
			Controller->SetViewTarget(DefaultCamera);
		}
		else
		{
			Player->SpawnDefaultController();
		}

		UGameplayStatics::FinishSpawningActor(Player, StartPos);

		Player->OnPlayerSpawned();

		Players[i] = Player;
	}
}

void AMinigameBase::EnablePlayerInput()
{
	for (AMinigamePlayer* Player : Players)
	{
		using InputSubsystem = UEnhancedInputLocalPlayerSubsystem;

		if (!Player) { continue; }
		if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
		{
			if (InputSubsystem* Subsystem = ULocalPlayer::GetSubsystem<InputSubsystem>(PC->GetLocalPlayer()))
			{
				Subsystem->AddMappingContext(MinigameMappingContext, 0);
			}
		}
	}
}

void AMinigameBase::DisablePlayerInput()
{
	for (AMinigamePlayer* Player : Players)
	{
		using InputSubsystem = UEnhancedInputLocalPlayerSubsystem;

		if (!Player) { continue; }
		if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
		{
			if (InputSubsystem* Subsystem = ULocalPlayer::GetSubsystem<InputSubsystem>(PC->GetLocalPlayer()))
			{
				Subsystem->RemoveMappingContext(MinigameMappingContext);
			}
		}
	}
}

void AMinigameBase::SetupGame() 
{
	if (MinigameDuration == 0)
	{
		MinigameDuration = UE_DOUBLE_BIG_NUMBER;
	}

	Players.Empty();
	
	TimeRemaining = MinigameDuration;
	TimeElapsed = 0;
	InitPoints();
	bIsInProgress = false;
	
	ClearMinigameUI();
}

void AMinigameBase::StartGame()
{
	CurrentCutscene = nullptr;
	bIsInProgress = true;

	EnablePlayerInput();
	
	DrawMinigameUI();
	OnMinigameStart();
	OnMinigameStartEvent.Broadcast();
}

int AMinigameBase::GetNumCameraSplits() const
{
	if (!bUseSplitscreen)
	{
		return 1;
	}
	// Each player gets a split
	if (SplitBy == ESplitBy::PLAYERS || TeamType == EMinigameType::MT_FFA)
	{
		return NumPlayers;
	}
	// Each team gets a split. Team based game modes currently only have 2 teams
	if (SplitBy == ESplitBy::TEAMS)
	{
		return 2;
	}
	// No split - just 1 camera
	return 1;
}

USplitscreenUI* AMinigameBase::SpawnSplitscreenUI(int NumSplits)
{
	// Check if splitscreen class is provided
	if (SplitscreenUIClasses.Num() == 0)
	{
		AlertError("No splitscreen UI provided. Please provide at least a 1-view splitscreen UI. Could not spawn minigame UI.");
		return nullptr;
	}

	// Choose which splitscreen UI to use
	TSubclassOf<USplitscreenUI> SplitscreenClass{ SplitscreenUIClasses[0] };
	if (bUseSplitscreen)
	{
		if (SplitscreenUIClasses.Num() < NumSplits)
		{
			AlertError("No splitscreen UI provided for the specified number of teams. Could not spawn minigame UI.");
		}
		else
		{
			SplitscreenClass = SplitscreenUIClasses[NumSplits - 1];
		}

	}

	if (!SplitscreenClass)
	{
		AlertError("No splitscreen UI provided!");
		return nullptr;
	}

	// Spawn splitscreen UI
	USplitscreenUI* SplitscreenUI = static_cast<USplitscreenUI*>(UUserWidget::CreateWidgetInstance(*GetWorld(), SplitscreenClass, FName(TEXT("Splitscreen UI"))));
	CurrentMinigameUI = SplitscreenUI;
	SplitscreenUI->AddToViewport();
	return SplitscreenUI;
}

void AMinigameBase::SetupMinigameUI(USplitscreenUI* SplitscreenUI)
{
	int NumSplits = SplitscreenUI->GetNumSplits();

	// Spawn minigame UI in each split
	if (MinigameUIClass != nullptr)
	{
		for (int i = 0; i < NumSplits; ++i)
		{
			UMinigameUI* MinigameUI = Cast<UMinigameUI>(UUserWidget::CreateWidgetInstance(*GetWorld(),
				MinigameUIClass, FName(FString::Printf(TEXT("Minigame UI %d"), i))));
			// UI names must be unique!

			// Spawn minigame UI
			MinigameUI->AddToViewport();
			MinigameUI->SetMinigame(this);
			MinigameUI->SetAssignedSplit(i);
			MinigameUI->StartUI();

			// Add it to the split
			UOverlay* Split{ SplitscreenUI->GetSplitPanel(i) };
			UOverlaySlot* OverlaySlot = Cast<UOverlaySlot>(Split->AddChild(MinigameUI));

			// Minigame UI should fill entire provided split
			OverlaySlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
			OverlaySlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
		}
	}

	if (PracticeUIClass == nullptr)
	{
		AlertError("No practice UI provided!");
		return;
	}

	// Spawn practice UI
	if (bIsPractice)
	{
		if (!PracticeUI)
		{
			PracticeUI = Cast<UPracticeModeUI>(UUserWidget::CreateWidgetInstance(*GetWorld(), PracticeUIClass, FName(TEXT("Practice Mode UI"))));
			PracticeUI->AddToViewport();
		}

		UPanelWidget* PreviewWindow = PracticeUI->GetPreviewWindow();
		PreviewWindow->AddChild(SplitscreenUI);
	}
	return;
}

void AMinigameBase::DrawMinigameUI()
{
	if (bDebugHideUI) { return; }
	
	USplitscreenUI* SplitscreenUI = SpawnSplitscreenUI(GetNumCameraSplits());
	SetupMinigameUI(SplitscreenUI);
}


void AMinigameBase::ClearMinigameUI()
{
	if (CurrentMinigameUI)
	{
		CurrentMinigameUI->RemoveFromParent();
		CurrentMinigameUI = nullptr;
	}
	if (!bIsPractice && PracticeUI)
	{
		PracticeUI->RemoveFromParent();
		PracticeUI = nullptr;
	}
}

UOverlaySlot* AMinigameBase::AddWidgetToMinigameUISplit(UUserWidget* InWidget, int Split)
{
	USplitscreenUI* Root = GetMinigameWidgetRoot();
	
	if (!Root)
	{
		UE_LOG(LogMinigameCore, Log, TEXT("MinigameBase: Attempted to add minigame UI with no active widget root"));
		return nullptr;
	}

	UOverlaySlot* Slot = Root->GetSplitPanel(Split)->AddChildToOverlay(InWidget);
	return Slot;
}
#pragma endregion

#pragma region Game End

void AMinigameBase::PlayMinigameTransitionEffects()
{
	PlayTransitionEffects();
}


void AMinigameBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector2D CurrentViewportSize = UMinigameCoreBlueprintLibrary::GetViewportSize(this);
	if (LastViewportSize != CurrentViewportSize)
	{
		LastViewportSize = CurrentViewportSize;
		OnViewportSizeChanged.Broadcast(CurrentViewportSize);
	}
	
	if (!bIsInProgress) { return; }

	TimeRemaining -= DeltaTime;
	TimeElapsed += DeltaTime;
	if (TimeRemaining <= 0) 
	{
		EndGame();
	}
}


void AMinigameBase::StartReset()
{
	// Reset game after brief delay for reset effects
	GetWorldTimerManager().SetTimer(ResetTimerHandle,
		[this]() { ResetLevel(); },
		ResetDelay, false);
}
void AMinigameBase::ResetLevel() 
{
	OnMinigameReset();
	OnMinigameResetEvent.Broadcast();
	
	Super::ResetLevel();

	// Destroy all players if they're not already being destroyed
	// Players possessed by APlayerController will be destroyed in Super::ResetLevel(),
	// but those possessed by AAIController will not
	for (AMinigamePlayer* Player : Players)
	{
		if (IsValid(Player))
		{
			Player->DetachFromControllerPendingDestroy();
			Player->Destroy();
		}
	}

	if (bIsPractice && PracticeUI)
	{
		PracticeUI->EndResetEffect();
	}

	SetupGame();

	// Start intro cutscene if applicable
	if (!bIsPractice && IntroCutscene)
	{
		// Create a basic 1 split setup for intro cutscene to use
		// TODO: Add support for multiple splits, or starting with 1 split and having an animation that expands to multiple splits
		SpawnSplitscreenUI(1);

		CurrentCutscene = NewObject<UMinigameCutsceneManager>(this, IntroCutscene);

		if (CurrentCutscene->ShouldSpawnPlayersBeforeCutscene())
		{
			// Spawn players now, start game later
			SpawnPlayers();

			// Spawned players should not have IMCs applied
			// Remove them if any linger, since they apply to PC and not the AMinigamePlayers directly 
			DisablePlayerInput();
			
			CurrentCutscene->OnCutsceneCompleted.BindLambda(
				[this]()
				{
					StartGame();
				});
		}
		else
		{
			// Spawn players and start game later
			CurrentCutscene->OnCutsceneCompleted.BindLambda(
				[this]()
				{
					SpawnPlayers();
					StartGame();
				});
		}
		
		CurrentCutscene->StartCutscene(this);
	}
	else
	{
		SpawnPlayers();
		StartGame();
	}
}

void AMinigameBase::EndGame() 
{
	// Ending the game should generally transition back to practice mode if we're in practice mode
	EndGameInternal(bIsPractice);
}

void AMinigameBase::EndGameInternal(bool bTransitionToPractice, bool bOverrideIfInProgress)
{
	if (!bIsInProgress && !bOverrideIfInProgress) { return; }
	bIsInProgress = false;
	
	// Practice mode could end to transition back to practice mode, 
	// or it could end to transition into the main game
	if (bIsPractice)
	{
		StartReset();

		if (bTransitionToPractice && PracticeUI)
		{
			PracticeUI->PlayResetEffect();
		}
	}
	else
	{
		ProcessMinigameEnd();
	}

	OnMinigameEnd();
	OnMinigameEndEvent.Broadcast();
}
void AMinigameBase::ProcessMinigameEnd()
{
	// Remove input for all players
	DisablePlayerInput();

	MinigameSessionSubsystem->SetMinigameResults(PointCounter->GetStandings());

	if (EndingCutscene)
	{
		CurrentCutscene = NewObject<UMinigameCutsceneManager>(this, EndingCutscene);

		CurrentCutscene->OnCutsceneCompleted.BindLambda([this]()
		{
			ChangeLevel();
		});

		CurrentCutscene->StartCutscene(this);
	}
	else
	{
		ChangeLevel();
	}
}

void AMinigameBase::ChangeLevel()
{
	FLoadLevelParams LoadLevelParams;
	LoadLevelParams.LevelToOpen = MinigameSessionSubsystem->GetMinigameReturnLevel();

	// Loop if the minigame wasn't initiated by the board
	if (LoadLevelParams.LevelToOpen.IsNull())
	{
		LoadLevelParams.LevelToOpen = GetLevel()->GetTypedOuter<UWorld>();
	}
	TransitionToLevel(LoadLevelParams);
}


#pragma endregion

#pragma region Player Readying

void AMinigameBase::ReadyPlayer(int Player, bool State)
{
	if (!bIsPractice) { return; }
	if (ReadyPlayers.Num() < Player) { return; }
	ReadyPlayers[Player] = true;
	for (int i = 0; i < ReadyPlayers.Num(); i++) 
	{
		if (ReadyPlayers[i] == false) 
		{
			return;
		}
	}
	EndPracticeMode();
}

void AMinigameBase::EndPracticeMode()
{
	EndGameInternal(false, true);
	bIsPractice = false;

	PlayTransitionEffects();
}

int AMinigameBase::CheckReady(int Player) const 
{
	return ReadyPlayers[Player];
}

#pragma endregion


AMinigamePlayer* AMinigameBase::GetPlayer(int PlayerNum) const
{
	if (PlayerNum < Players.Num() && PlayerNum >= 0)
	{
		return Players[PlayerNum];
	}
	return nullptr;
}

void AMinigameBase::AlertWarning(const FString& Text) const
{
	UE_LOG(LogMinigameCore, Warning, TEXT("MinigameBase: %s"), *Text);
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, FString::Printf(TEXT("MinigameBase: %s"), *Text));
}
void AMinigameBase::AlertError(const FString& Text) const
{
	UE_LOG(LogMinigameCore, Error, TEXT("MinigameBase: %s"), *Text);
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, FString::Printf(TEXT("MinigameBase: %s"), *Text));
}

UCustomizableObjectInstance* AMinigameBase::GetCachedOverride(int32 PlayerNumber)
{
	if (PlayerNumber >= 0 && CachedCustomizationOverrides.Num() > PlayerNumber)
	{
		return CachedCustomizationOverrides[PlayerNumber];
	}
	return nullptr;
}

void AMinigameBase::CacheOverride(UCustomizableObjectInstance* Override, int32 PlayerNumber)
{
	CachedCustomizationOverrides.Insert(Override, PlayerNumber);
}
