/**************************************************************************************************
 * PlayerRotationComponent.cpp
 * LIMBITLESS SOLUTIONS INC.                                                              3/24/2025
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

#include "Player/PlayerRotationComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "EnhancedInputSubsystems.h"
#include "MinigameCoreBlueprintLibrary.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"

UPlayerRotationComponent::UPlayerRotationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;

	RotationAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_Rotation.IA_Rotation'")).Object;
}

void UPlayerRotationComponent::ResetInitialOrientation()
{
	check(RotationAction);
	
	if (InputSubsystem)
	{
		FVector CurEuler = InputSubsystem->GetPlayerInput()->GetActionValue(RotationAction).Get<FVector>();
		
		// Store the yaw offset from actual rotation value
		// Prevents issues when resetting rotation after significant yaw drift
		YawOffset = CurEuler.Z;
		CurEuler.Z = 0;
		InitialRotation = FQuat::MakeFromEuler(CurEuler);
	}
}

FVector UPlayerRotationComponent::GetDirectionFromCamera(FQuat CameraOrientation) const
{
	FVector2D ScreenResolution = UMinigameCoreBlueprintLibrary::GetViewportSize(GetOwner());
	
	FVector2D CenteredPos{ AimPos - (ScreenResolution / 2) };

	// Calculate the Depth with some trigonometry
	double Depth{ ScreenResolution.X / 2 };

	// Get the direction from the camera. 
	FVector Dir{ Depth, CenteredPos.X, -CenteredPos.Y }; // Unflip the Y component to transform from screen to world coordinates

	return CameraOrientation.RotateVector(Dir);
}

FQuat UPlayerRotationComponent::GetRotationInputValue() const
{
	return FQuat::MakeFromEuler(GetRotationInputValueVector());
}

FVector UPlayerRotationComponent::GetRotationInputValueVector() const
{
	FVector CurEuler = GetRotationInputValueVectorRaw();

	// Apply Z offset from initial rotation 
	CurEuler.Z -= YawOffset;
	return CurEuler;
}

FVector UPlayerRotationComponent::GetRotationInputValueVectorRaw() const
{
	check(RotationAction);
	if (InputSubsystem)
	{
		FVector CurEuler = InputSubsystem->GetPlayerInput()->GetActionValue(RotationAction).Get<FVector>();
		return CurEuler;
	}
	return {};
}

FVector2D UPlayerRotationComponent::ClampVector(FVector2D In, FVector2D Max, double Offset)
{
	FVector2D Res{};
	Res.X = FMath::Clamp(In.X, Offset, Max.X - Offset);
	Res.Y = FMath::Clamp(In.Y, Offset, Max.Y - Offset);
	return Res;
}

void UPlayerRotationComponent::InitializeComponent()
{
	Super::InitializeComponent();

	APawn* Player = Cast<APawn>(GetOwner());
	check(Player);
	
	if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
	{
		InputSubsystem = PC->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	}
}

void UPlayerRotationComponent::UpdateAimPosition(const FQuat& Rotation)
{
	FVector2D ScreenResolution = UMinigameCoreBlueprintLibrary::GetViewportSize(GetOwner());
	FVector2D SquareResolution = { ScreenResolution.X, ScreenResolution.X };
	
	// Apply aim sensitivity
	FVector DeltaScreenLength{ Rotation.Euler() * (AimSensitivity / ScreenResolution.X) };

	// Multiply displacement by SquareResolution so the sensitivity is the same in either direction
	// Flip the y component since down is positive in screen coordinates 
	AimPos = (SquareResolution * FVector2D{ DeltaScreenLength.Z, -DeltaScreenLength.Y}) 
		+ (ScreenResolution * InitialPosition) + AimOffset;
	AimPos = ClampVector(AimPos, ScreenResolution, ClampOffset);
}

void UPlayerRotationComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	UpdateDeltaRotation();
	
	UpdateAimPosition(DeltaRot);
}

