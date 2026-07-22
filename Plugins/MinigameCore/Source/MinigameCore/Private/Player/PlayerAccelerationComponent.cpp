/**************************************************************************************************
 * PlayerAccelerationComponent.cpp
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

#include "Player/PlayerAccelerationComponent.h"
#include "Player/PlayerRotationComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"

UPlayerAccelerationComponent::UPlayerAccelerationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;

	RotationAction = ConstructorHelpers::FObjectFinder<UInputAction>(
		TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_Rotation.IA_Rotation'")).Object;
	
	AccelerationAction = ConstructorHelpers::FObjectFinder<UInputAction>(
		TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_Acceleration.IA_Acceleration'")).Object;

}

FVector UPlayerAccelerationComponent::GetAccelerationInputValue() const
{
	if (InputSubsystem)
	{
		return InputSubsystem->GetPlayerInput()->GetActionValue(AccelerationAction).Get<FVector>();
	}
	return {};
}

void UPlayerAccelerationComponent::BeginPlay()
{
	Super::BeginPlay();

	RotationComponent = Cast<UPlayerRotationComponent>(GetOwner()->FindComponentByClass<UPlayerRotationComponent>());
}

void UPlayerAccelerationComponent::InitializeComponent()
{
	Super::InitializeComponent();

	APawn* Player = Cast<APawn>(GetOwner());
	check(Player);
	
	if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
	{
		InputSubsystem = PC->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	}
}

FQuat UPlayerAccelerationComponent::GetRotation() const
{
	FVector CurEuler{};

	if (RotationAction && InputSubsystem)
	{
		CurEuler = InputSubsystem->GetPlayerInput()->GetActionValue(RotationAction).Get<FVector>();
	}
	
	// Get yaw from rotation component, if there is one
	// If there is no rotation component, yaw will not be reliable and movements cannot be distinguished
	// from along X and along Y
	if (RotationComponent)
	{
		CurEuler.Z = RotationComponent->GetDeltaRotationEuler().Z;
	}
	
	return FQuat::MakeFromEuler(CurEuler);
}

void UPlayerAccelerationComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                 FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CoordinateAcceleration = GetRotation().RotateVector(GetAccelerationInputValue());
	
	for (const auto& Trigger : MovementTriggers)
	{
		if (Trigger.Key.Execute(CoordinateAcceleration))
		{
			Trigger.Value.ExecuteIfBound();
		}
	}
}

void UPlayerAccelerationComponent::ListenForMovement(FEvaluateMovementSignature EvaluateMove,
	FOnMovementTriggeredSignature OnMovementTriggered)
{
	MovementTriggers.Add(EvaluateMove, OnMovementTriggered);
}
