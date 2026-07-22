// Fill out your copyright notice in the Description page of Project Settings.


#include "MinigameCoreBlueprintLibrary.h"
#include "Engine/World.h"

bool UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryAngleFromLaunchSpeed(FVector Source, FVector Target,
	float LaunchSpeed, float GravityAcceleration, bool bCalculateAlternateTrajectory, float& OutTrajectory, float& OutTime)
{
	double X = FVector::DistXY(Target, Source); // Horizontal displacement
	double Y = Target.Z - Source.Z;				// Vertical displacement
	if (X == 0)
	{
		// Target is right above or right below source
		// A trajectory may still be possible. If needed, we can handle this case here
		return false;
	}
	if (GravityAcceleration == 0)
	{
		// Straight line shot - no arcing
		OutTrajectory = FMath::Atan2(Y, X);
		OutTime = (Source - Target).Length() / LaunchSpeed;
		return true;
	}

	double A = Y / X;
	double B = (GravityAcceleration * X) / (2 * LaunchSpeed * LaunchSpeed);
	double D = (-4 * B * B) + (4 * A * B) + 1;

	if (D < 0 || LaunchSpeed == 0)
	{
		// Not enough velocity to hit the target
		return false;
	}

	double Tan{};
	if (bCalculateAlternateTrajectory)
	{
		// Subtracting instead takes a higher arcing trajectory, which takes *much* longer to reach the destination.
		Tan = (-1 - FMath::Sqrt(D)) / (2 * B);
	}
	else
	{
		// Adding in the numerator takes the smaller arc.
		Tan = (-1 + FMath::Sqrt(D)) / (2 * B);
	}

	double Angle = FMath::Atan(Tan);
	OutTrajectory = FMath::RadiansToDegrees(Angle);

	// The time it takes for the projectile to reach the target
	OutTime = X / (LaunchSpeed * FMath::Cos(Angle));
	return true;
}

bool UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryVelocityFromLaunchSpeed(const UObject* WorldContextObject, FVector Source, FVector Target,
	float LaunchSpeed, bool bCalculateAlternateTrajectory, FVector& OutVelocity, float& OutTravelTime)
{
	float TrajectoryAngle{};
	if (GetProjectileTrajectoryAngleFromLaunchSpeed(
		Source, Target, LaunchSpeed, WorldContextObject->GetWorld()->GetGravityZ(), bCalculateAlternateTrajectory,
		TrajectoryAngle, OutTravelTime))
	{
		// Get the direction on the XY plane to shoot in
		FVector Direction = Target - Source;
		Direction.Z = 0;
		Direction.Normalize();

		// Rotate the direction up to match the trajectory
		FVector Right = FVector{ Direction.Y, -Direction.X, 0 };
		Direction = Direction.RotateAngleAxis(TrajectoryAngle, Right);
		
		OutVelocity = Direction * LaunchSpeed;
		return true;
	}
	return false;
}

FVector UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryVelocityFromTime(const UObject* WorldContextObject,
	FVector Source, FVector Target, float Time)
{
	double HorizontalDistance = FVector::DistXY(Target, Source);
	FVector Displacement = Target - Source;
	
	FVector Result{};
	double HorizontalSpeed = HorizontalDistance / Time;
	double HorizontalAngle = FMath::Atan2(Displacement.Y, Displacement.X);
	Result.X = HorizontalSpeed * FMath::Cos(HorizontalAngle);
	Result.Y = HorizontalSpeed * FMath::Sin(HorizontalAngle);
	
	float GravityAcceleration = WorldContextObject->GetWorld()->GetGravityZ();
	double VelocityFromAcceleration = (GravityAcceleration * Time) / 2;
	double StraightLineVelocity = Displacement.Z / Time;
	Result.Z = StraightLineVelocity - VelocityFromAcceleration;

	return Result;
}

FVector2D UMinigameCoreBlueprintLibrary::GetViewportSize(UObject* WorldContextObject)
{
	if (!WorldContextObject) { return {}; }

	check(WorldContextObject->GetWorld())
	check(WorldContextObject->GetWorld()->GetGameViewport())
	
	FVector2D Out;
	WorldContextObject->GetWorld()->GetGameViewport()->GetViewportSize(Out);
	return Out;
}