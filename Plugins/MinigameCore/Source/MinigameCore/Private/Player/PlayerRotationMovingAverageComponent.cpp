// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerRotationMovingAverageComponent.h"

void UPlayerRotationMovingAverageComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	UpdateDeltaRotation();

	FQuat InitialDelta = DeltaRot;

	// Maintain a simple moving average of our forward and right vectors
	// This essentially maintains an "average rotation" without having to deal with angle wrapping
	DeltaXSMA.AddValue(InitialDelta.RotateVector(FVector::ForwardVector));
	DeltaYSMA.AddValue(InitialDelta.RotateVector(FVector::RightVector));

	// Reconstruct average rotation from averaged coordinate vectors
	FRotator AverageDeltaRotator = FRotationMatrix::MakeFromXY(DeltaXSMA.GetAverage(), DeltaYSMA.GetAverage()).Rotator();
	FQuat AverageDelta = AverageDeltaRotator.Quaternion();

	// We're assuming that, on average, the device has a forward-facing yaw and that any other yaw is from Z-axis drift
	// We don't want the Z-axis drift to affect the other coordinates, so we need to take it out
	FQuat YawCompensation = FQuat{FVector::UpVector, FMath::DegreesToRadians(-AverageDeltaRotator.Yaw)};

	// Get the rotation from the average rotation to the initial, in global coordinates
	DeltaRot = (YawCompensation * InitialDelta) * (YawCompensation * AverageDelta).Inverse();

	UpdateAimPosition(DeltaRot);
}

void UPlayerRotationMovingAverageComponent::ResetInitialOrientation()
{
	Super::ResetInitialOrientation();

	InitializeDeltaSMA();
}

void UPlayerRotationMovingAverageComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeDeltaSMA();
}

void UPlayerRotationMovingAverageComponent::InitializeDeltaSMA()
{
	UpdateDeltaRotation();

	DeltaXSMA.Initialize(WindowSize, DeltaRot.RotateVector(FVector::ForwardVector));
	DeltaYSMA.Initialize(WindowSize, DeltaRot.RotateVector(FVector::RightVector));
}

