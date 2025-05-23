// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/MinigameCoreBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameCoreBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryVelocityFromTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Source);
		P_GET_STRUCT(FVector,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryVelocityFromTime(Z_Param_WorldContextObject,Z_Param_Source,Z_Param_Target,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryVelocityFromLaunchSpeed)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Source);
		P_GET_STRUCT(FVector,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaunchSpeed);
		P_GET_UBOOL(Z_Param_bCalculateAlternateTrajectory);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryVelocityFromLaunchSpeed(Z_Param_WorldContextObject,Z_Param_Source,Z_Param_Target,Z_Param_LaunchSpeed,Z_Param_bCalculateAlternateTrajectory,Z_Param_Out_OutVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryAngleFromLaunchSpeed)
	{
		P_GET_STRUCT(FVector,Z_Param_Source);
		P_GET_STRUCT(FVector,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaunchSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityAcceleration);
		P_GET_UBOOL(Z_Param_bCalculateAlternateTrajectory);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTrajectory);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMinigameCoreBlueprintLibrary::GetProjectileTrajectoryAngleFromLaunchSpeed(Z_Param_Source,Z_Param_Target,Z_Param_LaunchSpeed,Z_Param_GravityAcceleration,Z_Param_bCalculateAlternateTrajectory,Z_Param_Out_OutTrajectory,Z_Param_Out_OutTime);
		P_NATIVE_END;
	}
	void UMinigameCoreBlueprintLibrary::StaticRegisterNativesUMinigameCoreBlueprintLibrary()
	{
		UClass* Class = UMinigameCoreBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectileTrajectoryAngleFromLaunchSpeed", &UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryAngleFromLaunchSpeed },
			{ "GetProjectileTrajectoryVelocityFromLaunchSpeed", &UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryVelocityFromLaunchSpeed },
			{ "GetProjectileTrajectoryVelocityFromTime", &UMinigameCoreBlueprintLibrary::execGetProjectileTrajectoryVelocityFromTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics
	{
		struct MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms
		{
			FVector Source;
			FVector Target;
			float LaunchSpeed;
			float GravityAcceleration;
			bool bCalculateAlternateTrajectory;
			float OutTrajectory;
			float OutTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityAcceleration;
		static void NewProp_bCalculateAlternateTrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateAlternateTrajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTrajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, LaunchSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_GravityAcceleration = { "GravityAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, GravityAcceleration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory_SetBit(void* Obj)
	{
		((MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms*)Obj)->bCalculateAlternateTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory = { "bCalculateAlternateTrajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms), &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_OutTrajectory = { "OutTrajectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, OutTrajectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms, OutTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms), &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_LaunchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_GravityAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_OutTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_OutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile Motion" },
		{ "Comment", "/**\n\x09 * Gets the angle off the XY plane (pitch) needed to shoot a freefall projectile from Source to Target given a launch speed.\n\x09 * A trajectory may not exist if LaunchSpeed is too low for the given GravityAcceleration and source-to-target distance.\n\x09 * @param Source Starting location of the projectile's flight\n\x09 * @param Target Target location for the projectile to arrive at\n\x09 * @param LaunchSpeed The speed of the projectile at the very start of its flight, in cm/s\n\x09 * @param GravityAcceleration Acceleration due to gravity, in cm/s^2. Downward acceleration is negative\n\x09 * @param bCalculateAlternateTrajectory If true, calculates an alternate trajectory that arcs even higher\n\x09 * This projectile's flight may be very long\n\x09 * @param OutTrajectory Out parameter with desired angle to fire the projectile at, in degrees\n\x09 * @param OutTime Out parameter with the expected time the projectile will take to reach the destination, in seconds\n\x09 * @return True if a valid trajectory exists, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/MinigameCoreBlueprintLibrary.h" },
		{ "ReturnDisplayName", "Valid Trajectory Found" },
		{ "ToolTip", "Gets the angle off the XY plane (pitch) needed to shoot a freefall projectile from Source to Target given a launch speed.\nA trajectory may not exist if LaunchSpeed is too low for the given GravityAcceleration and source-to-target distance.\n@param Source Starting location of the projectile's flight\n@param Target Target location for the projectile to arrive at\n@param LaunchSpeed The speed of the projectile at the very start of its flight, in cm/s\n@param GravityAcceleration Acceleration due to gravity, in cm/s^2. Downward acceleration is negative\n@param bCalculateAlternateTrajectory If true, calculates an alternate trajectory that arcs even higher\nThis projectile's flight may be very long\n@param OutTrajectory Out parameter with desired angle to fire the projectile at, in degrees\n@param OutTime Out parameter with the expected time the projectile will take to reach the destination, in seconds\n@return True if a valid trajectory exists, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameCoreBlueprintLibrary, nullptr, "GetProjectileTrajectoryAngleFromLaunchSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryAngleFromLaunchSpeed_Parms), Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics
	{
		struct MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms
		{
			const UObject* WorldContextObject;
			FVector Source;
			FVector Target;
			float LaunchSpeed;
			bool bCalculateAlternateTrajectory;
			FVector OutVelocity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static void NewProp_bCalculateAlternateTrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateAlternateTrajectory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms, LaunchSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory_SetBit(void* Obj)
	{
		((MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms*)Obj)->bCalculateAlternateTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory = { "bCalculateAlternateTrajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms), &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_OutVelocity = { "OutVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms, OutVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms), &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_LaunchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_bCalculateAlternateTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_OutVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile Motion" },
		{ "Comment", "/**\n\x09 * Gets the velocity needed to shoot a freefall projectile from Source to Target given a launch speed\n\x09 * A trajectory may not exist if LaunchSpeed is too low for the given GravityAcceleration and source-to-target distance.\n\x09 * @param WorldContextObject World context object of the projectile\n\x09 * @param Source Start location of the projectile's flight\n\x09 * @param Target Target location for the projectile to arrive at\n\x09 * @param LaunchSpeed The speed of the projectile at the very start of its flight, in cm/s\n\x09 * @param bCalculateAlternateTrajectory If true, calculates an alternate trajectory that arcs even higher\n\x09 * This projectile's flight may be very long\n\x09 * @param OutVelocity The velocity needed to launch the projectile at for the desired trajectory\n\x09 * @return True if a valid trajectory exists, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/MinigameCoreBlueprintLibrary.h" },
		{ "ReturnDisplayName", "Valid Trajectory Found" },
		{ "ToolTip", "Gets the velocity needed to shoot a freefall projectile from Source to Target given a launch speed\nA trajectory may not exist if LaunchSpeed is too low for the given GravityAcceleration and source-to-target distance.\n@param WorldContextObject World context object of the projectile\n@param Source Start location of the projectile's flight\n@param Target Target location for the projectile to arrive at\n@param LaunchSpeed The speed of the projectile at the very start of its flight, in cm/s\n@param bCalculateAlternateTrajectory If true, calculates an alternate trajectory that arcs even higher\nThis projectile's flight may be very long\n@param OutVelocity The velocity needed to launch the projectile at for the desired trajectory\n@return True if a valid trajectory exists, false otherwise" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameCoreBlueprintLibrary, nullptr, "GetProjectileTrajectoryVelocityFromLaunchSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromLaunchSpeed_Parms), Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics
	{
		struct MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms
		{
			const UObject* WorldContextObject;
			FVector Source;
			FVector Target;
			float Time;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile Motion" },
		{ "Comment", "/**\n\x09 * Gets the velocity needed to shoot a freefall projectile from Source to Target\n\x09 * given the time the projectile should be in flight for.\n\x09 * @param WorldContextObject World context object of the projectile\n\x09 * @param Source Start location of the projectile's flight\n\x09 * @param Target Target location for the projectile to arrive at\n\x09 * @param Time Desired time of flight\n\x09 * @return Returns the launch velocity of the projectile\n\x09 */" },
		{ "ModuleRelativePath", "Public/MinigameCoreBlueprintLibrary.h" },
		{ "ReturnDisplayName", "Velocity" },
		{ "ToolTip", "Gets the velocity needed to shoot a freefall projectile from Source to Target\ngiven the time the projectile should be in flight for.\n@param WorldContextObject World context object of the projectile\n@param Source Start location of the projectile's flight\n@param Target Target location for the projectile to arrive at\n@param Time Desired time of flight\n@return Returns the launch velocity of the projectile" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameCoreBlueprintLibrary, nullptr, "GetProjectileTrajectoryVelocityFromTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::MinigameCoreBlueprintLibrary_eventGetProjectileTrajectoryVelocityFromTime_Parms), Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinigameCoreBlueprintLibrary);
	UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary_NoRegister()
	{
		return UMinigameCoreBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryAngleFromLaunchSpeed, "GetProjectileTrajectoryAngleFromLaunchSpeed" }, // 2368589390
		{ &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromLaunchSpeed, "GetProjectileTrajectoryVelocityFromLaunchSpeed" }, // 3025851472
		{ &Z_Construct_UFunction_UMinigameCoreBlueprintLibrary_GetProjectileTrajectoryVelocityFromTime, "GetProjectileTrajectoryVelocityFromTime" }, // 431442481
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MinigameCoreBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MinigameCoreBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameCoreBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::ClassParams = {
		&UMinigameCoreBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMinigameCoreBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameCoreBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinigameCoreBlueprintLibrary.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UMinigameCoreBlueprintLibrary>()
	{
		return UMinigameCoreBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameCoreBlueprintLibrary);
	UMinigameCoreBlueprintLibrary::~UMinigameCoreBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameCoreBlueprintLibrary, UMinigameCoreBlueprintLibrary::StaticClass, TEXT("UMinigameCoreBlueprintLibrary"), &Z_Registration_Info_UClass_UMinigameCoreBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameCoreBlueprintLibrary), 3932025172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_1285892556(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
