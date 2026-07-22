/**************************************************************************************************
 * MinigamePlayer.cpp
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

#include "Player/MinigamePlayer.h"
#include "EnhancedInputComponent.h"
#include "MinigameBase.h"
#include <EnhancedInputSubsystems.h>
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "UObject/ConstructorHelpers.h"
#include "MinigameCoreLogChannel.h"
#include "MinigameSessionSubsystem.h"
#include "GameFramework/GameMode.h"
#include "Kismet/GameplayStatics.h"

AMinigamePlayer::AMinigamePlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Type::Disabled;
	AutoPossessAI = EAutoPossessAI::Spawned;

	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	static ConstructorHelpers::FObjectFinder<UInputAction> TmpReady(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/IA_PracticeReadyUp.IA_PracticeReadyUp'"));
	
	ReadyAction = TmpReady.Object;
	
#if WITH_EDITOR
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> TmpDebugContext(TEXT("/Script/EnhancedInput.InputMappingContext'/MinigameCore/Input/Debug/IMC_DebugInputMappingContext.IMC_DebugInputMappingContext'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> TmpDebugReady(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/Debug/IA_DebugReadyAllPlayers.IA_DebugReadyAllPlayers'"));
	
	static ConstructorHelpers::FObjectFinder<UInputAction> TmpPlayers1(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/Debug/IA_DebugSetPlayerCount1.IA_DebugSetPlayerCount1'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> TmpPlayers2(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/Debug/IA_DebugSetPlayerCount2.IA_DebugSetPlayerCount2'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> TmpPlayers3(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/Debug/IA_DebugSetPlayerCount3.IA_DebugSetPlayerCount3'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> TmpPlayers4(TEXT("/Script/EnhancedInput.InputAction'/MinigameCore/Input/Debug/IA_DebugSetPlayerCount4.IA_DebugSetPlayerCount4'"));

	SetPlayerCount1 = TmpPlayers1.Object;
	SetPlayerCount2 = TmpPlayers2.Object;
	SetPlayerCount3 = TmpPlayers3.Object;
	SetPlayerCount4 = TmpPlayers4.Object;
	
	DebugInputMapping = TmpDebugContext.Object;
	ReadyAllPlayersAction = TmpDebugReady.Object;
#endif
}

void AMinigamePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (Input && ReadyAction)
	{
		Input->BindAction(ReadyAction, ETriggerEvent::Triggered, this, &AMinigamePlayer::ReadyPlayer);
	}

#if WITH_EDITOR
	if (bDisableDebugInputs) { return; }
	
	// Add debug IMC
	if (auto PlayerController = Cast<APlayerController>(Controller))
	{
		using InputSubsystem = UEnhancedInputLocalPlayerSubsystem;
		if (InputSubsystem* Subsystem = ULocalPlayer::GetSubsystem<InputSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DebugInputMapping, 0);
		}
	}

	// Setup debug bindings
	if (Input && ReadyAllPlayersAction)
	{
		Input->BindAction(ReadyAllPlayersAction, ETriggerEvent::Triggered, this, &AMinigamePlayer::ReadyAllPlayers);
	}
	if (Input && SetPlayerCount1)
	{
		Input->BindAction(SetPlayerCount1, ETriggerEvent::Triggered, this, &AMinigamePlayer::SetPlayerCountOne);
	}
	if (Input && SetPlayerCount2)
	{
		Input->BindAction(SetPlayerCount2, ETriggerEvent::Triggered, this, &AMinigamePlayer::SetPlayerCountTwo);
	}
	if (Input && SetPlayerCount3)
	{
		Input->BindAction(SetPlayerCount3, ETriggerEvent::Triggered, this, &AMinigamePlayer::SetPlayerCountThree);
	}
	if (Input && SetPlayerCount4)
	{
		Input->BindAction(SetPlayerCount4, ETriggerEvent::Triggered, this, &AMinigamePlayer::SetPlayerCountFour);
	}
#endif
}

void AMinigamePlayer::ReadyPlayer(const FInputActionValue& Value)
{
	bIsReady = !bIsReady;
	Minigame->ReadyPlayer(PlayerNumber, bIsReady);
}

#if WITH_EDITOR
void AMinigamePlayer::ReadyAllPlayers()
{
	for (int i = 0; i < 4; ++i)
	{
		Minigame->ReadyPlayer(i, true);
	}
}

void AMinigamePlayer::SetPlayerCount(int32 PlayerCount) const
{
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(this);

	GameInstance->GetSubsystem<UMinigameSessionSubsystem>()->SetPlayerCount(PlayerCount);

	FString LevelName = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::OpenLevel(this, FName(LevelName), true);
}
#endif
