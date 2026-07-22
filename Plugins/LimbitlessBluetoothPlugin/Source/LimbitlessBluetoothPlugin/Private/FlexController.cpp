// Fill out your copyright notice in the Description page of Project Settings.


#include "FlexController.h"
#include "HAL/PlatformTime.h"


const FSensorData& UFlexController::GetSensorData() const
{
	return SensorData;
}

void UFlexController::Tick(float DeltaTime)
{
	BroadcastFlexInput();

	if (FPlatformTime::Seconds() - TimeLastPacketReceived >= TimeoutDelay)
	{
		OnDeviceTimedOut.ExecuteIfBound();
		TimeLastPacketReceived = DBL_MAX;
	}

	if (ProcessCalibration)
	{
		ProcessCalibration(SensorData, DeltaTime);
	}
}

bool UFlexController::IsTickable() const
{
	// Don't tick CDO
	return !HasAnyFlags(RF_ClassDefaultObject);
}

TStatId UFlexController::GetStatId() const
{
	return TStatId();
}

// Normalizes flex to a 0-1 scale
constexpr static double NormalizeFlex(int Value, int RestThreshold)
{
	constexpr int Max = 1024;
	return static_cast<double>(Value - RestThreshold) / (Max - RestThreshold);
}

constexpr static float ScaleAccel(int RawAccel)
{
	constexpr double Factor{ 1.0 / 2048 };
	return static_cast<float>(RawAccel) * Factor;
}

constexpr static float ScaleGyro(int RawGyro)
{
	constexpr double Factor{ .072 };
	return static_cast<float>(RawGyro) * Factor;
}

// Converts two unsigned bytes into a signed integer
constexpr static int ToSigned(uint8 Byte1, uint8 Byte2)
{
	return static_cast<int>(Byte1) + ((static_cast<int>(Byte2) - 127) << 8);
}

// Converts two unsigned bytes into a 16-bit unsigned integer
constexpr static uint16 ToUnsigned(uint8 Byte1, uint8 Byte2)
{
	return static_cast<uint16>(Byte1) | (static_cast<uint16>(Byte2) << 8);
}


template<typename T>
static T GetTrimmedAvg(TArray<T>& Arr)
{
	if (Arr.IsEmpty()) { return 1; }

	Arr.Sort();

	// Cull top 10% and bottom 10% of values
	int NumToCull{ Arr.Num() / 10 };

	// Calculate sum of middle 80% of values
	T Sum{};
	for (int i = NumToCull; i < Arr.Num() - NumToCull; ++i)
	{
		Sum += Arr[i];
	}

	// Prevent divide by zero errors
	if (Sum == 0) { return 1; }

	return Sum / (Arr.Num() - (2 * NumToCull));
}

void UFlexController::ProcessRawData(const TArray<uint8>& RawData)
{
	ParseRawData(RawData);

	HandleProcessedData();
}

void UFlexController::HandleProcessedData()
{
	if (!ProcessCalibration)
	{
		int32 LogKey = GetTypeHash(DeviceID);
		// GEngine->AddOnScreenDebugMessage(2 * 294 + LogKey, 2, FColor::Green, FString::Printf(TEXT("%s's Scaled EMG Reading: %d || Threshold: %d"), *DeviceID, SensorData.EMGReading, CalData.RestThreshold));

		// Counteract bias
		SensorData.ProperAcceleration -= CalData.AccelerometerBias;
		SensorData.AngularVelocity -= CalData.GyroscopeBias;
		
		// Transform from IMU coordinate to Unreal coordinate conventions
		//SensorData.ProperAcceleration.Y = -SensorData.ProperAcceleration.Y;

		// Swap X and Y axes to switch handedness
		Swap(SensorData.ProperAcceleration.X, SensorData.ProperAcceleration.Y);
		Swap(SensorData.AngularVelocity.X, SensorData.AngularVelocity.Y);

		// Flip sign of Z angular velocity to match Unreal convention
		SensorData.AngularVelocity.Z = -SensorData.AngularVelocity.Z;
		
		/*GEngine->AddOnScreenDebugMessage(2 * 294 + LogKey + 1, 2, FColor::Green,
			FString::Printf(TEXT("%s's Accel: %+5.2f %+5.2f %+5.2f | Angular Velocity: %+5.2f %+5.2f %+5.2f | DT: %+.3f"), *DeviceID,
				SensorData.ProperAcceleration.X, SensorData.ProperAcceleration.Y, SensorData.ProperAcceleration.Z,
				SensorData.AngularVelocity.X, SensorData.AngularVelocity.Y, SensorData.AngularVelocity.Z,
				SensorData.DeltaTime
			));*/

		// First packet received with no associated time frame
		if (SensorData.DeltaTime < 0) { return; }

		UpdateOrientation(Rotation, SensorData.AngularVelocity, SensorData.ProperAcceleration, SensorData.DeltaTime);

		UpdateCoordinateAcceleration();
	}
}

void UFlexController::BeginIMUCalibration()
{
	if (ProcessCalibration != nullptr)
	{
		// There is already an ongoing calibration process
		return;
	}
	
	for (int i = 0; i < AccelCalibrationValues.Num(); ++i)
	{
		AccelCalibrationValues[i].Empty();
		GyroCalibrationValues[i].Empty();
	}

	CalibrationTimer = 0;
	ProcessCalibration =
		[this](const FSensorData& Data, float DeltaTime)
		{
			CalibrateIMU(Data, DeltaTime);
		};

	OnStartIMUCalibration.Broadcast(IMUTime);
}

void UFlexController::CalibrateIMU(const FSensorData& Data, float DeltaTime)
{
	CalibrationTimer += DeltaTime;
	if (CalibrationTimer < IMUTime)
	{
		// Push new calibration values
		for (int i = 0; i < AccelCalibrationValues.Num(); ++i) {
			AccelCalibrationValues[i].Push(Data.ProperAcceleration[i]);
			GyroCalibrationValues[i].Push(Data.AngularVelocity[i]);
		}
	}
	else
	{
		// Calculate calibration values
		for (int i = 0; i < 3; ++i) {
			CalData.AccelerometerBias[i] = GetTrimmedAvg(AccelCalibrationValues[i]);
			CalData.GyroscopeBias[i] = GetTrimmedAvg(GyroCalibrationValues[i]);
		}

		// Calibrate with negative Z facing down (normal force will read as +Z)
		CalData.AccelerometerBias.Z -= 1;
		
		Rotation = FQuat::Identity;

		ProcessCalibration = nullptr;

		OnFinishIMUCalibration.Broadcast();
	}
}

void UFlexController::BeginFlexCalibration()
{
	if (ProcessCalibration != nullptr)
	{
		// There is already an ongoing calibration process
		return;
	}

	FlexCalibrationValues.Empty();
	CalibrationTimer = 0;

	// Reset scale to 1 before calibrating
	SetScale( 1,
		[this]()
		{
			// Start the first step in calibration
			ProcessCalibration =
				[this](const FSensorData& Data, float DeltaTime)
				{
					CalibrateRestThreshold(Data, DeltaTime);
				};
		}
	);
}

void UFlexController::CalibrateRestThreshold(const FSensorData& Data, float DeltaTime)
{
	if (CalibrationTimer == 0)
	{
		OnStartRestCalibration.Broadcast(RestTime);
	}
	
	CalibrationTimer += DeltaTime;
	FlexCalibrationValues.Push(Data.EMGReading);

	// End calibration rest 
	if (CalibrationTimer >= RestTime)
	{
		CalibrationTimer = 0;
		CalData.RestThreshold = RestPadding + GetTrimmedAvg(FlexCalibrationValues);
		FlexCalibrationValues.Empty();

		// Set process calibration to the next step
		ProcessCalibration = 
			[this](const FSensorData& Data, float DeltaTime)
			{ 
				CalibrateScale(Data, DeltaTime); 
			};
	}
}

void UFlexController::CalibrateScale(const FSensorData& Data, float DeltaTime)
{
	if (CalibrationTimer == 0)
	{
		OnStartFlexCalibration.Broadcast(FlexTime);
	}
	
	CalibrationTimer += DeltaTime;
	FlexCalibrationValues.Push(SensorData.EMGReading);

	if (CalibrationTimer >= FlexTime)
	{
		// GEngine->AddOnScreenDebugMessage(1492, 15.0f, FColor::Yellow, FString::Printf(TEXT("Calibration complete.")));
		
		SetScale(ScaleFactor / GetTrimmedAvg(FlexCalibrationValues), nullptr);

		ProcessCalibration = nullptr;

		OnFinishFlexCalibration.Broadcast();
	}
}

void UFlexController::SetScale(uint8 scale, TFunction<void()> scaleSetCallback)
{
	SensorData.Scale = scale;
}

void UFlexController::SetColor(EFlexColor color, TFunction<void()> colorSetCallback)
{
	SensorData.Color = color;
}

std::vector<uint8> UFlexController::CreateCharacteristicPacket(EFlexColor ColorData, uint8 Scale)
{
	return { 0, 0, 0, 1, Scale, 0, static_cast<uint8>(ColorData), 0 };
}


FQuat UFlexController::QuatNormPow(FQuat Quat, double exp)
{
	double BaseSin = FMath::Sqrt(1 - (Quat.W * Quat.W));  // Calculate sine from identity, since W is cosine. 
	// Sqrt is faster than calculating sine directly

	if (FMath::Abs(BaseSin) <= double(UE_DOUBLE_SMALL_NUMBER)) { return FQuat::Identity; }


	double HalfAngle = FMath::Acos(Quat.W);				  // Get current angle of rotation around axis
	double ExpSin = FMath::Sin(exp * HalfAngle);
	double Scale = ExpSin / BaseSin;			     	  // The vector scaling to ensure the result is a unit quaternion

	Quat.W = FMath::Sqrt(1 - (ExpSin * ExpSin));		  // Calculate cosine from identity
	Quat.X *= Scale;
	Quat.Y *= Scale;
	Quat.Z *= Scale;

	return Quat.GetNormalized();						  // Normalize to account for any floating-point rounding errors
}


FQuat UFlexController::GetGravityDifference(FQuat curRot, FVector accel)
{
	FVector ApproxUp = curRot.RotateVector(accel).GetSafeNormal(); // Approximate "up" direction using accelerometer gravity data

	if (ApproxUp == FVector::ZeroVector) { return FQuat::Identity; } // Cannot approximate gravity. Device is in free fall or disconnected

	return FQuat::FindBetweenVectors(ApproxUp, FVector::UpVector).GetNormalized();  // Return the rotation needed to correct the disrepancy from calculated up vector to the actual up vector
}


void UFlexController::UpdateOrientation(FQuat& CurRot, FVector Gyro, FVector Accel, float DeltaTime)
{
	// Construct quaternion representing the rotation experienced from the angular velocity in the last dt
	FQuat GyroscopeRotation = FQuat::MakeFromEuler(Gyro * DeltaTime).GetNormalized();

	// Apply gyroscope rotation
	CurRot = CurRot * GyroscopeRotation;
	// Right multiply since gyroRot values are relative to curRot's coordinates

	FQuat GravityRotation = GetGravityDifference(CurRot, Accel);

	// Apply a small corrective rotation toward orientation approximated by accelerometer
	CurRot = QuatNormPow(GravityRotation, GravityFactor) * CurRot;
	// Left multiply since gravQuat is in global coordinates and should be applied after curRot

	CurRot.Normalize(); // Normalize to account for floating-point rounding errors
}

void UFlexController::UpdateCoordinateAcceleration()
{
	// Approximate the global up vector in the device's coordinates
	FVector GlobalUp = Rotation.UnrotateVector(FVector::UpVector );
	
	// Subtract effects of gravity, which contributes 1 G in the negative up direction
	CoordinateAcceleration = SensorData.ProperAcceleration - GlobalUp;
}

// Broadcasts raw flex input as events
void UFlexController::BroadcastFlexInput()
{
	BroadcastDiscrete();
	BroadcastAnalog();
	BroadcastRotation();
	BroadcastAcceleration();
	BroadcastAngularVelocity();
}

void UFlexController::BroadcastDiscrete()
{
	double NormFlex = NormalizeFlex(SensorData.EMGReading, CalData.RestThreshold);
	// GEngine->AddOnScreenDebugMessage(63009204, 15, FColor::Blue, FString::Printf(TEXT("Norm Flex: %lf"), NormFlex));

	// Reading has surpassed rest threshold - start of flex
	if (!bIsFlexing && NormFlex > 0)
	{
		bIsFlexing = true;
		CurrentFlexMax = -1;
		CurrentLevelMax = 0;
	}

	// Reading is still above rest threshold - middle of flex
	else if (bIsFlexing && NormFlex > 0)
	{
		if (NormFlex > CurrentFlexMax)
		{
			CurrentFlexMax = NormFlex;

			int NewLevel = GetDiscreteLevel(CurrentFlexMax);
			if (NewLevel > CurrentLevelMax)
			{
				CurrentLevelMax = NewLevel;
				OnDiscreteThresholdReached.Broadcast(NewLevel);
			}
		}
	}

	// Read has fallen below rest threshold - end of flex
	else if(bIsFlexing && NormFlex <= 0)
	{
		bIsFlexing = false;

		if (NumDiscreteLevels > 0 && CurrentFlexMax > 0)
		{
			int Level = GetDiscreteLevel();

			OnDiscreteFlex.Broadcast(Level);

			// Reset to zero
			OnDiscreteThresholdReached.Broadcast(0);
			CurrentFlexMax = 0;
			CurrentLevelMax = 0;
		}
	}
}

void UFlexController::BroadcastAnalog() const
{
	OnAnalogFlex.Broadcast(NormalizeFlex(SensorData.EMGReading, CalData.RestThreshold));
}

void UFlexController::BroadcastRotation() const
{
	OnRotationReceived.Broadcast(Rotation.Euler());
}

void UFlexController::BroadcastAngularVelocity() const
{
	// Consider calculating angular velocity via displacement of rotations over time?
	OnAngularVelocityReceived.Broadcast(SensorData.AngularVelocity);
}

void UFlexController::BroadcastAcceleration() const
{
	OnAccelerationReceived.Broadcast(CoordinateAcceleration);
}

void UFlexController::ParseRawData(const TArray<uint8>& RawData)
{
	// Packets are expected to contain 20 8-bit unsigned integers.
	if (RawData.Num() < 20)
	{
		return;
	}

	// Current flex value is bytes 0 and 1
	SensorData.EMGReading = RawData[0] + RawData[1] * 256;

	// Accelerometer reading is bytes 2-7
	SensorData.ProperAcceleration.X = ScaleAccel(ToSigned(RawData[2], RawData[3]));
	SensorData.ProperAcceleration.Y = ScaleAccel(ToSigned(RawData[4], RawData[5]));
	SensorData.ProperAcceleration.Z = ScaleAccel(ToSigned(RawData[6], RawData[7]));

	// Gyroscope reading is bytes 8-13
	SensorData.AngularVelocity.X = ScaleGyro(ToSigned(RawData[8], RawData[9]));
	SensorData.AngularVelocity.Y = ScaleGyro(ToSigned(RawData[10], RawData[11]));
	SensorData.AngularVelocity.Z = ScaleGyro(ToSigned(RawData[12], RawData[13]));

	SensorData.Version = ToUnsigned(RawData[14], RawData[15]);
	SensorData.BrdVersion = RawData[16];
	SensorData.Scale = RawData[17];
	SensorData.Charge = RawData[18];
	SensorData.Battery = RawData[19];

	SensorData.DeltaTime = FPlatformTime::Seconds() - TimeLastPacketReceived;
	TimeLastPacketReceived = FPlatformTime::Seconds();
}

int UFlexController::GetDiscreteLevel(double Flex) const
{
	if (NumDiscreteLevels <= 0)
	{
		return -1;
	}
	double PercentPerLevel = 1.0 / NumDiscreteLevels;
	int Level = FMath::CeilToInt(Flex / PercentPerLevel);
	return FMath::Clamp(Level, 1, NumDiscreteLevels);
}

int UFlexController::GetDiscreteLevel() const
{
	return GetDiscreteLevel(CurrentFlexMax);
}