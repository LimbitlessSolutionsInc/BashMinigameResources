// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClasses/LimbitlessPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "FlexController.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "UObject/ConstructorHelpers.h"
#include "BaseClasses/LimbitlessLocalPlayer.h"

class UEnhancedInputLocalPlayerSubsystem;


ALimbitlessPlayerController::ALimbitlessPlayerController()
{
	static ConstructorHelpers::FObjectFinder<UInputAction> tmpAnalog(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_AnalogFlex.IA_AnalogFlex'"));

	static ConstructorHelpers::FObjectFinder<UInputAction> tmpLight(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_LightFlex.IA_LightFlex'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> tmpMedium(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_MediumFlex.IA_MediumFlex'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> tmpStrong(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_StrongFlex.IA_StrongFlex'"));

	static ConstructorHelpers::FObjectFinder<UInputAction> tmpRotation(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_Rotation.IA_Rotation'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> tmpAccel(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_Acceleration.IA_Acceleration'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> tmpAngVel(TEXT("/Script/EnhancedInput.InputAction'/LimbitlessBluetoothPlugin/InputActions/IA_AngularVelocity.IA_AngularVelocity'"));
	
	AnalogFlexAction = tmpAnalog.Object;

	LightFlexAction = tmpLight.Object;
	MediumFlexAction = tmpMedium.Object;
	StrongFlexAction = tmpStrong.Object;
	RotationAction = tmpRotation.Object;
	AccelerationAction = tmpAccel.Object;
	AngularVelocityAction = tmpAngVel.Object;
}

ULimbitlessLocalPlayer* ALimbitlessPlayerController::GetLimbitlessLocalPlayer()
{
	if (!LimbitlessLocalPlayer.IsValid())
	{
		SetupLimbitlessLocalPlayer();
	}
	return LimbitlessLocalPlayer.Get();
}

void ALimbitlessPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	SetupLimbitlessLocalPlayer();
}

void ALimbitlessPlayerController::SetupLimbitlessLocalPlayer()
{
	if (!GetLocalPlayer())
	{
		UE_LOG(LogTemp, Warning, TEXT("Local player is null"))
		return;
	}
	if (LimbitlessLocalPlayer.IsValid())
	{
		LimbitlessLocalPlayer->OnFlexControllerAssigned.RemoveAll(this);
	}
	LimbitlessLocalPlayer = Cast<ULimbitlessLocalPlayer>(GetLocalPlayer());

	LimbitlessLocalPlayer->OnFlexControllerAssigned.AddDynamic(this, &ALimbitlessPlayerController::FlexControllerConnected);
	
	if (!LimbitlessLocalPlayer.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Local player is not a LimbitlessLocalPlayer"))
	}
	else
	{
		//if controller already connected, run setup
		if (LimbitlessLocalPlayer->GetFlexController())
		{
			FlexControllerConnected(LimbitlessLocalPlayer->GetFlexController());
		}
	}
}

void ALimbitlessPlayerController::FlexControllerConnected(UFlexController* flexController)
{
	if (FlexController.IsValid())
	{
		FlexController->OnAnalogFlex.RemoveAll(this);
		FlexController->OnDiscreteFlex.RemoveAll(this);
		FlexController->OnRotationReceived.RemoveAll(this);
		FlexController->OnAccelerationReceived.RemoveAll(this);
	}
	FlexController = flexController;
	if (FlexController.IsValid())
	{
		FlexController->OnAnalogFlex.AddDynamic(this, &ALimbitlessPlayerController::OnAnalogFlex);
		FlexController->OnDiscreteFlex.AddDynamic(this, &ALimbitlessPlayerController::OnDiscreteFlex);
		FlexController->OnRotationReceived.AddDynamic(this, &ALimbitlessPlayerController::OnRotation);
		FlexController->OnAccelerationReceived.AddDynamic(this, &ALimbitlessPlayerController::OnAcceleration);
	}
}

void ALimbitlessPlayerController::OnAnalogFlex(float val)
{
	if (!AnalogFlexAction)return;

	if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		
		
		UEnhancedPlayerInput* playerInput = subsystem->GetPlayerInput();
		FInputActionValue flexAction(val);

		playerInput->InjectInputForAction(AnalogFlexAction, flexAction);
	}

}

void ALimbitlessPlayerController::OnDiscreteFlex(int level)
{
	if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		FInputActionValue flexAction(true);
		UEnhancedPlayerInput* playerInput = subsystem->GetPlayerInput();

		switch (level)
		{
		case 1:
			playerInput->InjectInputForAction(LightFlexAction, flexAction);
			break;
		case 2:
			playerInput->InjectInputForAction(MediumFlexAction, flexAction);
			break;
		case 3:
			playerInput->InjectInputForAction(StrongFlexAction, flexAction);
			break;
		default:
			break;
		}
	}
}

void ALimbitlessPlayerController::OnRotation(FVector angle)
{
	if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		FInputActionValue velAction(angle);
		UEnhancedPlayerInput* playerInput = subsystem->GetPlayerInput();

		playerInput->InjectInputForAction(RotationAction, velAction);
	}
}

void ALimbitlessPlayerController::OnAngularVelocity(FVector vel)
{
	if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		FInputActionValue velAction(vel);
		UEnhancedPlayerInput* playerInput = subsystem->GetPlayerInput();

		playerInput->InjectInputForAction(AngularVelocityAction, velAction);
	}
}

void ALimbitlessPlayerController::OnAcceleration(FVector accel)
{
	if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		FInputActionValue accelAction(accel);
		UEnhancedPlayerInput* playerInput = subsystem->GetPlayerInput();

		playerInput->InjectInputForAction(AccelerationAction, accelAction);
	}
}
