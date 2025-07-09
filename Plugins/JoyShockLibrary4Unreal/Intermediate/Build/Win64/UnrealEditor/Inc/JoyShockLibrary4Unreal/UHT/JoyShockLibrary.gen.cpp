// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyShockLibrary4Unreal/JoyShockLibrary/JoyShockLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJoyShockLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
JOYSHOCKLIBRARY4UNREAL_API UClass* Z_Construct_UClass_UJoyShockLibrary();
JOYSHOCKLIBRARY4UNREAL_API UClass* Z_Construct_UClass_UJoyShockLibrary_NoRegister();
JOYSHOCKLIBRARY4UNREAL_API UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType();
JOYSHOCKLIBRARY4UNREAL_API UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FIMUState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJoyShockState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4UIMUState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4UJoyShockState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4UMotionState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4USettings();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4USingleTouchState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSL4UTouchState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSLAutoCalibration();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FJSLSettings();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FMotionState();
JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FTouchState();
UPackage* Z_Construct_UPackage__Script_JoyShockLibrary4Unreal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FJoyShockState ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJoyShockState;
class UScriptStruct* FJoyShockState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJoyShockState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJoyShockState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyShockState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JoyShockState"));
	}
	return Z_Registration_Info_UScriptStruct_FJoyShockState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJoyShockState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JOY_SHOCK_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JOY_SHOCK_STATE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_buttons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stickLX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stickLY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stickRX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stickRY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_buttons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stickLX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stickLY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stickRX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stickRY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyShockState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, buttons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_buttons_MetaData), NewProp_buttons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger = { "lTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, lTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lTrigger_MetaData), NewProp_lTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger = { "rTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, rTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rTrigger_MetaData), NewProp_rTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX = { "stickLX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, stickLX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stickLX_MetaData), NewProp_stickLX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY = { "stickLY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, stickLY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stickLY_MetaData), NewProp_stickLY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX = { "stickRX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, stickRX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stickRX_MetaData), NewProp_stickRX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY = { "stickRY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoyShockState, stickRY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stickRY_MetaData), NewProp_stickRY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyShockState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JoyShockState",
	Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers),
	sizeof(FJoyShockState),
	alignof(FJoyShockState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoyShockState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoyShockState()
{
	if (!Z_Registration_Info_UScriptStruct_FJoyShockState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJoyShockState.InnerSingleton, Z_Construct_UScriptStruct_FJoyShockState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJoyShockState.InnerSingleton;
}
// ********** End ScriptStruct FJoyShockState ******************************************************

// ********** Begin ScriptStruct FJSL4UJoyShockState ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState;
class UScriptStruct* FJSL4UJoyShockState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UJoyShockState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UJoyShockState"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// JOY_SHOCK_STATE;\n// typedef struct JOY_SHOCK_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "JOY_SHOCK_STATE;\ntypedef struct JOY_SHOCK_STATE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftStick_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightStick_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Buttons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTrigger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStick;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightStick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UJoyShockState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UJoyShockState, Buttons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buttons_MetaData), NewProp_Buttons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger = { "LeftTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UJoyShockState, LeftTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTrigger_MetaData), NewProp_LeftTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger = { "RightTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UJoyShockState, RightTrigger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTrigger_MetaData), NewProp_RightTrigger_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick = { "LeftStick", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UJoyShockState, LeftStick), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftStick_MetaData), NewProp_LeftStick_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick = { "RightStick", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UJoyShockState, RightStick), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightStick_MetaData), NewProp_RightStick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4UJoyShockState",
	Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers),
	sizeof(FJSL4UJoyShockState),
	alignof(FJSL4UJoyShockState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4UJoyShockState()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState.InnerSingleton;
}
// ********** End ScriptStruct FJSL4UJoyShockState *************************************************

// ********** Begin ScriptStruct FIMUState *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIMUState;
class UScriptStruct* FIMUState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIMUState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIMUState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIMUState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("IMUState"));
	}
	return Z_Registration_Info_UScriptStruct_FIMUState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIMUState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct IMU_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct IMU_STATE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gyroX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gyroY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gyroZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIMUState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX = { "accelX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, accelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelX_MetaData), NewProp_accelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY = { "accelY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, accelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelY_MetaData), NewProp_accelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ = { "accelZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, accelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelZ_MetaData), NewProp_accelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX = { "gyroX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, gyroX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gyroX_MetaData), NewProp_gyroX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY = { "gyroY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, gyroY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gyroY_MetaData), NewProp_gyroY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ = { "gyroZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIMUState, gyroZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gyroZ_MetaData), NewProp_gyroZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIMUState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"IMUState",
	Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers),
	sizeof(FIMUState),
	alignof(FIMUState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIMUState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIMUState()
{
	if (!Z_Registration_Info_UScriptStruct_FIMUState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIMUState.InnerSingleton, Z_Construct_UScriptStruct_FIMUState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIMUState.InnerSingleton;
}
// ********** End ScriptStruct FIMUState ***********************************************************

// ********** Begin ScriptStruct FJSL4UIMUState ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4UIMUState;
class UScriptStruct* FJSL4UIMUState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UIMUState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4UIMUState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UIMUState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UIMUState"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UIMUState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4UIMUState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// New Struct\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "New Struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gyro_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gyro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UIMUState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UIMUState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro = { "Gyro", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UIMUState, Gyro), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gyro_MetaData), NewProp_Gyro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4UIMUState",
	Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers),
	sizeof(FJSL4UIMUState),
	alignof(FJSL4UIMUState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4UIMUState()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UIMUState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4UIMUState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UIMUState.InnerSingleton;
}
// ********** End ScriptStruct FJSL4UIMUState ******************************************************

// ********** Begin ScriptStruct FMotionState ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionState;
class UScriptStruct* FMotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("MotionState"));
	}
	return Z_Registration_Info_UScriptStruct_FMotionState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct MOTION_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct MOTION_STATE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_quatW_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_quatX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_quatY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_quatZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatW_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gravZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_quatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_quatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_quatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_quatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gravZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW = { "quatW", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, quatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_quatW_MetaData), NewProp_quatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX = { "quatX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, quatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_quatX_MetaData), NewProp_quatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY = { "quatY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, quatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_quatY_MetaData), NewProp_quatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ = { "quatZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, quatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_quatZ_MetaData), NewProp_quatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW = { "rawQuatW", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, rawQuatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rawQuatW_MetaData), NewProp_rawQuatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX = { "rawQuatX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, rawQuatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rawQuatX_MetaData), NewProp_rawQuatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY = { "rawQuatY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, rawQuatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rawQuatY_MetaData), NewProp_rawQuatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ = { "rawQuatZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, rawQuatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rawQuatZ_MetaData), NewProp_rawQuatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX = { "accelX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, accelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelX_MetaData), NewProp_accelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY = { "accelY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, accelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelY_MetaData), NewProp_accelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ = { "accelZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, accelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelZ_MetaData), NewProp_accelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX = { "gravX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, gravX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravX_MetaData), NewProp_gravX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY = { "gravY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, gravY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravY_MetaData), NewProp_gravY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ = { "gravZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionState, gravZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gravZ_MetaData), NewProp_gravZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"MotionState",
	Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers),
	sizeof(FMotionState),
	alignof(FMotionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMotionState()
{
	if (!Z_Registration_Info_UScriptStruct_FMotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionState.InnerSingleton, Z_Construct_UScriptStruct_FMotionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMotionState.InnerSingleton;
}
// ********** End ScriptStruct FMotionState ********************************************************

// ********** Begin ScriptStruct FJSL4UMotionState *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4UMotionState;
class UScriptStruct* FJSL4UMotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UMotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4UMotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UMotionState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UMotionState"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UMotionState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4UMotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// New Struct\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "New Struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UMotionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UMotionState, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UMotionState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UMotionState, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4UMotionState",
	Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers),
	sizeof(FJSL4UMotionState),
	alignof(FJSL4UMotionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4UMotionState()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UMotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4UMotionState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UMotionState.InnerSingleton;
}
// ********** End ScriptStruct FJSL4UMotionState ***************************************************

// ********** Begin ScriptStruct FTouchState *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTouchState;
class UScriptStruct* FTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("TouchState"));
	}
	return Z_Registration_Info_UScriptStruct_FTouchState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTouchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct TOUCH_STATE {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct TOUCH_STATE {" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t0Id_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t1Id_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t0Down_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t1Down_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t0X_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t0Y_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t1X_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_t1Y_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_t0Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_t1Id;
	static void NewProp_t0Down_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_t0Down;
	static void NewProp_t1Down_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_t1Down;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t0X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t0Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t1X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t1Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id = { "t0Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t0Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t0Id_MetaData), NewProp_t0Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id = { "t1Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t1Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t1Id_MetaData), NewProp_t1Id_MetaData) };
void Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_SetBit(void* Obj)
{
	((FTouchState*)Obj)->t0Down = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down = { "t0Down", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchState), &Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t0Down_MetaData), NewProp_t0Down_MetaData) };
void Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_SetBit(void* Obj)
{
	((FTouchState*)Obj)->t1Down = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down = { "t1Down", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchState), &Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t1Down_MetaData), NewProp_t1Down_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X = { "t0X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t0X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t0X_MetaData), NewProp_t0X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y = { "t0Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t0Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t0Y_MetaData), NewProp_t0Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X = { "t1X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t1X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t1X_MetaData), NewProp_t1X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y = { "t1Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchState, t1Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_t1Y_MetaData), NewProp_t1Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"TouchState",
	Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers),
	sizeof(FTouchState),
	alignof(FTouchState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchState()
{
	if (!Z_Registration_Info_UScriptStruct_FTouchState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTouchState.InnerSingleton, Z_Construct_UScriptStruct_FTouchState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTouchState.InnerSingleton;
}
// ********** End ScriptStruct FTouchState *********************************************************

// ********** Begin ScriptStruct FJSL4USingleTouchState ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState;
class UScriptStruct* FJSL4USingleTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4USingleTouchState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4USingleTouchState"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TOUCH_STATE;\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "TOUCH_STATE;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchID_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDown_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TouchID;
	static void NewProp_bIsDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4USingleTouchState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID = { "TouchID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USingleTouchState, TouchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchID_MetaData), NewProp_TouchID_MetaData) };
void Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_SetBit(void* Obj)
{
	((FJSL4USingleTouchState*)Obj)->bIsDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown = { "bIsDown", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSL4USingleTouchState), &Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDown_MetaData), NewProp_bIsDown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USingleTouchState, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4USingleTouchState",
	Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers),
	sizeof(FJSL4USingleTouchState),
	alignof(FJSL4USingleTouchState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4USingleTouchState()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState.InnerSingleton;
}
// ********** End ScriptStruct FJSL4USingleTouchState **********************************************

// ********** Begin ScriptStruct FJSL4UTouchState **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4UTouchState;
class UScriptStruct* FJSL4UTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UTouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4UTouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UTouchState, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UTouchState"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UTouchState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4UTouchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTouch_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTouch_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryTouch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UTouchState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch = { "PrimaryTouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UTouchState, PrimaryTouch), Z_Construct_UScriptStruct_FJSL4USingleTouchState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryTouch_MetaData), NewProp_PrimaryTouch_MetaData) }; // 2241891130
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch = { "SecondaryTouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4UTouchState, SecondaryTouch), Z_Construct_UScriptStruct_FJSL4USingleTouchState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTouch_MetaData), NewProp_SecondaryTouch_MetaData) }; // 2241891130
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4UTouchState",
	Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers),
	sizeof(FJSL4UTouchState),
	alignof(FJSL4UTouchState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4UTouchState()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4UTouchState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4UTouchState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4UTouchState.InnerSingleton;
}
// ********** End ScriptStruct FJSL4UTouchState ****************************************************

// ********** Begin ScriptStruct FJSLAutoCalibration ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSLAutoCalibration;
class UScriptStruct* FJSLAutoCalibration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSLAutoCalibration, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSLAutoCalibration"));
	}
	return Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_AUTO_CALIBRATION {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_AUTO_CALIBRATION {" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_confidence_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_autoCalibrationEnabled_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isSteady_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_confidence;
	static void NewProp_autoCalibrationEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_autoCalibrationEnabled;
	static void NewProp_isSteady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSteady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSLAutoCalibration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence = { "confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSLAutoCalibration, confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_confidence_MetaData), NewProp_confidence_MetaData) };
void Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_SetBit(void* Obj)
{
	((FJSLAutoCalibration*)Obj)->autoCalibrationEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled = { "autoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSLAutoCalibration), &Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_autoCalibrationEnabled_MetaData), NewProp_autoCalibrationEnabled_MetaData) };
void Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_SetBit(void* Obj)
{
	((FJSLAutoCalibration*)Obj)->isSteady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady = { "isSteady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSLAutoCalibration), &Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isSteady_MetaData), NewProp_isSteady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSLAutoCalibration",
	Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers),
	sizeof(FJSLAutoCalibration),
	alignof(FJSLAutoCalibration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSLAutoCalibration()
{
	if (!Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.InnerSingleton, Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSLAutoCalibration.InnerSingleton;
}
// ********** End ScriptStruct FJSLAutoCalibration *************************************************

// ********** Begin Enum EJSL4UControllerType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJSL4UControllerType;
static UEnum* EJSL4UControllerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("EJSL4UControllerType"));
	}
	return Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UEnum* StaticEnum<EJSL4UControllerType>()
{
	return EJSL4UControllerType_StaticEnum();
}
struct Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// JSL_AUTO_CALIBRATION;\n" },
		{ "DualSense.DisplayName", "DualSense" },
		{ "DualSense.Name", "EJSL4UControllerType::DualSense" },
		{ "DualShock4.DisplayName", "DualShock 4" },
		{ "DualShock4.Name", "EJSL4UControllerType::DualShock4" },
		{ "JoyConLeft.DisplayName", "JoyCon (L)" },
		{ "JoyConLeft.Name", "EJSL4UControllerType::JoyConLeft" },
		{ "JoyConRight.DisplayName", "JoyCon (R)" },
		{ "JoyConRight.Name", "EJSL4UControllerType::JoyConRight" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ProController.DisplayName", "Pro Controller" },
		{ "ProController.Name", "EJSL4UControllerType::ProController" },
		{ "ToolTip", "JSL_AUTO_CALIBRATION;" },
		{ "Undefined.DisplayName", "Undefined" },
		{ "Undefined.Name", "EJSL4UControllerType::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EJSL4UControllerType::Undefined", (int64)EJSL4UControllerType::Undefined },
		{ "EJSL4UControllerType::JoyConLeft", (int64)EJSL4UControllerType::JoyConLeft },
		{ "EJSL4UControllerType::JoyConRight", (int64)EJSL4UControllerType::JoyConRight },
		{ "EJSL4UControllerType::ProController", (int64)EJSL4UControllerType::ProController },
		{ "EJSL4UControllerType::DualShock4", (int64)EJSL4UControllerType::DualShock4 },
		{ "EJSL4UControllerType::DualSense", (int64)EJSL4UControllerType::DualSense },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	"EJSL4UControllerType",
	"EJSL4UControllerType",
	Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType()
{
	if (!Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton, Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton;
}
// ********** End Enum EJSL4UControllerType ********************************************************

// ********** Begin Enum EJSL4UGyroSpace ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJSL4UGyroSpace;
static UEnum* EJSL4UGyroSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("EJSL4UGyroSpace"));
	}
	return Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UEnum* StaticEnum<EJSL4UGyroSpace>()
{
	return EJSL4UGyroSpace_StaticEnum();
}
struct Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LocalSpace.DisplayName", "Local Space" },
		{ "LocalSpace.Name", "EJSL4UGyroSpace::LocalSpace" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "PlayerSpace.Comment", "// gyro input is transformed based on the calculated gravity direction to account for the player's preferred controller orientation\n" },
		{ "PlayerSpace.DisplayName", "Player Space" },
		{ "PlayerSpace.Name", "EJSL4UGyroSpace::PlayerSpace" },
		{ "PlayerSpace.ToolTip", "gyro input is transformed based on the calculated gravity direction to account for the player's preferred controller orientation" },
		{ "WorldSpace.Comment", "// no transformation is done on gyro input\n" },
		{ "WorldSpace.DisplayName", "World Space" },
		{ "WorldSpace.Name", "EJSL4UGyroSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "no transformation is done on gyro input" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EJSL4UGyroSpace::LocalSpace", (int64)EJSL4UGyroSpace::LocalSpace },
		{ "EJSL4UGyroSpace::WorldSpace", (int64)EJSL4UGyroSpace::WorldSpace },
		{ "EJSL4UGyroSpace::PlayerSpace", (int64)EJSL4UGyroSpace::PlayerSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	"EJSL4UGyroSpace",
	"EJSL4UGyroSpace",
	Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace()
{
	if (!Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton, Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton;
}
// ********** End Enum EJSL4UGyroSpace *************************************************************

// ********** Begin ScriptStruct FJSL4USettings ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSL4USettings;
class UScriptStruct* FJSL4USettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4USettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSL4USettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4USettings, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4USettings"));
	}
	return Z_Registration_Info_UScriptStruct_FJSL4USettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSL4USettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_SETTINGS {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_SETTINGS {" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GyroSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCalibrating_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalibrationEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GyroSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitType;
	static void NewProp_bIsCalibrating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCalibrating;
	static void NewProp_bAutoCalibrationEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalibrationEnabled;
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4USettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace = { "GyroSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USettings, GyroSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GyroSpace_MetaData), NewProp_GyroSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USettings, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USettings, PlayerNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNumber_MetaData), NewProp_PlayerNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USettings, ControllerType), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerType_MetaData), NewProp_ControllerType_MetaData) }; // 3956998331
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType = { "SplitType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSL4USettings, SplitType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitType_MetaData), NewProp_SplitType_MetaData) };
void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_SetBit(void* Obj)
{
	((FJSL4USettings*)Obj)->bIsCalibrating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating = { "bIsCalibrating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCalibrating_MetaData), NewProp_bIsCalibrating_MetaData) };
void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_SetBit(void* Obj)
{
	((FJSL4USettings*)Obj)->bAutoCalibrationEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled = { "bAutoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCalibrationEnabled_MetaData), NewProp_bAutoCalibrationEnabled_MetaData) };
void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((FJSL4USettings*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConnected_MetaData), NewProp_bIsConnected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSL4USettings",
	Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers),
	sizeof(FJSL4USettings),
	alignof(FJSL4USettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSL4USettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSL4USettings()
{
	if (!Z_Registration_Info_UScriptStruct_FJSL4USettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSL4USettings.InnerSingleton, Z_Construct_UScriptStruct_FJSL4USettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSL4USettings.InnerSingleton;
}
// ********** End ScriptStruct FJSL4USettings ******************************************************

// ********** Begin ScriptStruct FJSLSettings ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSLSettings;
class UScriptStruct* FJSLSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSLSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSLSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSLSettings, (UObject*)Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSLSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FJSLSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSLSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_SETTINGS {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_SETTINGS {" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gyroSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_controllerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_splitType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isCalibrating_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_autoCalibrationEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isConnected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_gyroSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_controllerType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_splitType;
	static void NewProp_isCalibrating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCalibrating;
	static void NewProp_autoCalibrationEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_autoCalibrationEnabled;
	static void NewProp_isConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSLSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace = { "gyroSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSLSettings, gyroSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gyroSpace_MetaData), NewProp_gyroSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber = { "playerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSLSettings, playerNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerNumber_MetaData), NewProp_playerNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType = { "controllerType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSLSettings, controllerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_controllerType_MetaData), NewProp_controllerType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType = { "splitType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSLSettings, splitType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_splitType_MetaData), NewProp_splitType_MetaData) };
void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_SetBit(void* Obj)
{
	((FJSLSettings*)Obj)->isCalibrating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating = { "isCalibrating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isCalibrating_MetaData), NewProp_isCalibrating_MetaData) };
void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_SetBit(void* Obj)
{
	((FJSLSettings*)Obj)->autoCalibrationEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled = { "autoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_autoCalibrationEnabled_MetaData), NewProp_autoCalibrationEnabled_MetaData) };
void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_SetBit(void* Obj)
{
	((FJSLSettings*)Obj)->isConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected = { "isConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isConnected_MetaData), NewProp_isConnected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSLSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	nullptr,
	&NewStructOps,
	"JSLSettings",
	Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers),
	sizeof(FJSLSettings),
	alignof(FJSLSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSLSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSLSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FJSLSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSLSettings.InnerSingleton, Z_Construct_UScriptStruct_FJSLSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSLSettings.InnerSingleton;
}
// ********** End ScriptStruct FJSLSettings ********************************************************

// ********** Begin Class UJoyShockLibrary Function GetNumPlayerControllers ************************
struct Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics
{
	struct JoyShockLibrary_eventGetNumPlayerControllers_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary|Debug" },
		{ "Comment", "// TODO: Remove temporary debug function\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "TODO: Remove temporary debug function" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventGetNumPlayerControllers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventGetNumPlayerControllers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "GetNumPlayerControllers", Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::JoyShockLibrary_eventGetNumPlayerControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::JoyShockLibrary_eventGetNumPlayerControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execGetNumPlayerControllers)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::GetNumPlayerControllers(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function GetNumPlayerControllers **************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetAndFlushAccumulatedGyro ****************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics
{
	struct JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms
	{
		int32 InDeviceId;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms, InDeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_InDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetAndFlushAccumulatedGyro", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetAndFlushAccumulatedGyro)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UJoyShockLibrary::JSL4UGetAndFlushAccumulatedGyro(Z_Param_InDeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetAndFlushAccumulatedGyro ******************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetControllerInfoAndSettings **************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics
{
	struct JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms
	{
		int32 DeviceId;
		FJSL4USettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4USettings, METADATA_PARAMS(0, nullptr) }; // 2515472080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetControllerInfoAndSettings", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetControllerInfoAndSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4USettings*)Z_Param__Result=UJoyShockLibrary::JSL4UGetControllerInfoAndSettings(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetControllerInfoAndSettings ****************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetIMUState *******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetIMUState_Parms
	{
		int32 DeviceID;
		FJSL4UIMUState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetIMUState_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UIMUState, METADATA_PARAMS(0, nullptr) }; // 3000476736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetIMUState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::JoyShockLibrary_eventJSL4UGetIMUState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::JoyShockLibrary_eventJSL4UGetIMUState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetIMUState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UIMUState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetIMUState(Z_Param_DeviceID);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetIMUState *********************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetLeftStick ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics
{
	struct JoyShockLibrary_eventJSL4UGetLeftStick_Parms
	{
		int32 DeviceId;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetLeftStick_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetLeftStick_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetLeftStick", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::JoyShockLibrary_eventJSL4UGetLeftStick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::JoyShockLibrary_eventJSL4UGetLeftStick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetLeftStick)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UJoyShockLibrary::JSL4UGetLeftStick(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetLeftStick ********************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetMotionState ****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetMotionState_Parms
	{
		int32 DeviceID;
		FJSL4UMotionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetMotionState_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UMotionState, METADATA_PARAMS(0, nullptr) }; // 1866137965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetMotionState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::JoyShockLibrary_eventJSL4UGetMotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::JoyShockLibrary_eventJSL4UGetMotionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetMotionState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UMotionState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetMotionState(Z_Param_DeviceID);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetMotionState ******************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetRawIMUState ****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetRawIMUState_Parms
	{
		int32 DeviceID;
		FJSL4UIMUState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawIMUState_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UIMUState, METADATA_PARAMS(0, nullptr) }; // 3000476736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRawIMUState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::JoyShockLibrary_eventJSL4UGetRawIMUState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::JoyShockLibrary_eventJSL4UGetRawIMUState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRawIMUState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UIMUState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRawIMUState(Z_Param_DeviceID);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetRawIMUState ******************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetRawMotionState *************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetRawMotionState_Parms
	{
		int32 DeviceID;
		FJSL4UMotionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawMotionState_Parms, DeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UMotionState, METADATA_PARAMS(0, nullptr) }; // 1866137965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRawMotionState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::JoyShockLibrary_eventJSL4UGetRawMotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::JoyShockLibrary_eventJSL4UGetRawMotionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRawMotionState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UMotionState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRawMotionState(Z_Param_DeviceID);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetRawMotionState ***************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetRightStick *****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics
{
	struct JoyShockLibrary_eventJSL4UGetRightStick_Parms
	{
		int32 DeviceId;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRightStick_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRightStick_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRightStick", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::JoyShockLibrary_eventJSL4UGetRightStick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::JoyShockLibrary_eventJSL4UGetRightStick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRightStick)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRightStick(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetRightStick *******************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetSimpleState ****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetSimpleState_Parms
	{
		int32 DeviceId;
		FJSL4UJoyShockState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetSimpleState_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetSimpleState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UJoyShockState, METADATA_PARAMS(0, nullptr) }; // 399669378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetSimpleState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::JoyShockLibrary_eventJSL4UGetSimpleState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::JoyShockLibrary_eventJSL4UGetSimpleState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetSimpleState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UJoyShockState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetSimpleState(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetSimpleState ******************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetTouch **********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics
{
	struct JoyShockLibrary_eventJSL4UGetTouch_Parms
	{
		int32 DeviceId;
		bool bSecondTouch;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "CPP_Default_bSecondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static void NewProp_bSecondTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecondTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouch_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJSL4UGetTouch_Parms*)Obj)->bSecondTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch = { "bSecondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJSL4UGetTouch_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouch_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetTouch", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::JoyShockLibrary_eventJSL4UGetTouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::JoyShockLibrary_eventJSL4UGetTouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetTouch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_GET_UBOOL(Z_Param_bSecondTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UJoyShockLibrary::JSL4UGetTouch(Z_Param_DeviceId,Z_Param_bSecondTouch);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetTouch ************************************

// ********** Begin Class UJoyShockLibrary Function JSL4UGetTouchState *****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics
{
	struct JoyShockLibrary_eventJSL4UGetTouchState_Parms
	{
		int32 DeviceId;
		bool bPrevious;
		FJSL4UTouchState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_bPrevious", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static void NewProp_bPrevious_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrevious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouchState_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJSL4UGetTouchState_Parms*)Obj)->bPrevious = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious = { "bPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJSL4UGetTouchState_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouchState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UTouchState, METADATA_PARAMS(0, nullptr) }; // 982850333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetTouchState", Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::JoyShockLibrary_eventJSL4UGetTouchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::JoyShockLibrary_eventJSL4UGetTouchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetTouchState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
	P_GET_UBOOL(Z_Param_bPrevious);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSL4UTouchState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetTouchState(Z_Param_DeviceId,Z_Param_bPrevious);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4UGetTouchState *******************************

// ********** Begin Class UJoyShockLibrary Function JSL4USetGyroSpace ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics
{
	struct JoyShockLibrary_eventJSL4USetGyroSpace_Parms
	{
		int32 InDeviceID;
		EJSL4UGyroSpace InGyroSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InGyroSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InGyroSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InDeviceID = { "InDeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4USetGyroSpace_Parms, InDeviceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace = { "InGyroSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJSL4USetGyroSpace_Parms, InGyroSpace), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace, METADATA_PARAMS(0, nullptr) }; // 644337271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InDeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4USetGyroSpace", Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::JoyShockLibrary_eventJSL4USetGyroSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::JoyShockLibrary_eventJSL4USetGyroSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJSL4USetGyroSpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceID);
	P_GET_ENUM(EJSL4UGyroSpace,Z_Param_InGyroSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JSL4USetGyroSpace(Z_Param_InDeviceID,EJSL4UGyroSpace(Z_Param_InGyroSpace));
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JSL4USetGyroSpace ********************************

// ********** Begin Class UJoyShockLibrary Function JslConnectDevices ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics
{
	struct JoyShockLibrary_eventJslConnectDevices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslConnectDevices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslConnectDevices", Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::JoyShockLibrary_eventJslConnectDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::JoyShockLibrary_eventJslConnectDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslConnectDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslConnectDevices();
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslConnectDevices ********************************

// ********** Begin Class UJoyShockLibrary Function JslDisconnectAndDisposeAll *********************
struct Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslDisconnectAndDisposeAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslDisconnectAndDisposeAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslDisconnectAndDisposeAll();
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslDisconnectAndDisposeAll ***********************

// ********** Begin Class UJoyShockLibrary Function JslGetAccelX ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics
{
	struct JoyShockLibrary_eventJslGetAccelX_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelX_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelX", Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::JoyShockLibrary_eventJslGetAccelX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::JoyShockLibrary_eventJslGetAccelX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelX(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetAccelX *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetAccelY ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics
{
	struct JoyShockLibrary_eventJslGetAccelY_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelY_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelY", Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::JoyShockLibrary_eventJslGetAccelY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::JoyShockLibrary_eventJslGetAccelY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelY)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelY(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetAccelY *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetAccelZ ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics
{
	struct JoyShockLibrary_eventJslGetAccelZ_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelZ_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelZ", Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::JoyShockLibrary_eventJslGetAccelZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::JoyShockLibrary_eventJslGetAccelZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelZ)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelZ(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetAccelZ *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetAndFlushAccumulatedGyro ******************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics
{
	struct JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms
	{
		int32 deviceId;
		float gyroX;
		float gyroY;
		float gyroZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroX = { "gyroX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroY = { "gyroY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroZ = { "gyroZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAndFlushAccumulatedGyro", Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAndFlushAccumulatedGyro)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_gyroX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_gyroY);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_gyroZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslGetAndFlushAccumulatedGyro(Z_Param_deviceId,Z_Param_Out_gyroX,Z_Param_Out_gyroY,Z_Param_Out_gyroZ);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetAndFlushAccumulatedGyro ********************

// ********** Begin Class UJoyShockLibrary Function JslGetAutoCalibrationStatus ********************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics
{
	struct JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms
	{
		int32 deviceId;
		FJSLAutoCalibration ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSLAutoCalibration, METADATA_PARAMS(0, nullptr) }; // 1450566247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAutoCalibrationStatus", Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAutoCalibrationStatus)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSLAutoCalibration*)Z_Param__Result=UJoyShockLibrary::JslGetAutoCalibrationStatus(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetAutoCalibrationStatus **********************

// ********** Begin Class UJoyShockLibrary Function JslGetButtons **********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics
{
	struct JoyShockLibrary_eventJslGetButtons_Parms
	{
		int32 deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetButtons_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetButtons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetButtons", Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::JoyShockLibrary_eventJslGetButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::JoyShockLibrary_eventJslGetButtons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetButtons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetButtons(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetButtons ************************************

// ********** Begin Class UJoyShockLibrary Function JslGetCalibrationOffset ************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics
{
	struct JoyShockLibrary_eventJslGetCalibrationOffset_Parms
	{
		int32 deviceId;
		float xOffset;
		float yOffset;
		float zOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_xOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_yOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_zOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_xOffset = { "xOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, xOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_yOffset = { "yOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, yOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, zOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_xOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_yOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_zOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetCalibrationOffset", Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::JoyShockLibrary_eventJslGetCalibrationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::JoyShockLibrary_eventJslGetCalibrationOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetCalibrationOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_xOffset);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_yOffset);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_zOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslGetCalibrationOffset(Z_Param_deviceId,Z_Param_Out_xOffset,Z_Param_Out_yOffset,Z_Param_Out_zOffset);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetCalibrationOffset **************************

// ********** Begin Class UJoyShockLibrary Function JslGetConnectedDeviceHandles *******************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics
{
	struct JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms
	{
		TArray<int32> OutDeviceHandleArray;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/* int* */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "int*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutDeviceHandleArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDeviceHandleArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray_Inner = { "OutDeviceHandleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray = { "OutDeviceHandleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms, OutDeviceHandleArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetConnectedDeviceHandles", Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetConnectedDeviceHandles)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutDeviceHandleArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetConnectedDeviceHandles(Z_Param_Out_OutDeviceHandleArray);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetConnectedDeviceHandles *********************

// ********** Begin Class UJoyShockLibrary Function JslGetControllerColor **************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics
{
	struct JoyShockLibrary_eventJslGetControllerColor_Parms
	{
		int32 InDeviceId;
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\" static int32 JslGetControllerColour(int32 deviceId); */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\" static int32 JslGetControllerColour(int32 deviceId);" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerColor_Parms, InDeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_InDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerColor", Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::JoyShockLibrary_eventJslGetControllerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::JoyShockLibrary_eventJslGetControllerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=UJoyShockLibrary::JslGetControllerColor(Z_Param_InDeviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetControllerColor ****************************

// ********** Begin Class UJoyShockLibrary Function JslGetControllerInfoAndSettings ****************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics
{
	struct JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms
	{
		int32 deviceId;
		FJSLSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSLSettings, METADATA_PARAMS(0, nullptr) }; // 3258019054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerInfoAndSettings", Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerInfoAndSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJSLSettings*)Z_Param__Result=UJoyShockLibrary::JslGetControllerInfoAndSettings(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetControllerInfoAndSettings ******************

// ********** Begin Class UJoyShockLibrary Function JslGetControllerSplitType **********************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics
{
	struct JoyShockLibrary_eventJslGetControllerSplitType_Parms
	{
		int32 deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerSplitType_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerSplitType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerSplitType", Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::JoyShockLibrary_eventJslGetControllerSplitType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::JoyShockLibrary_eventJslGetControllerSplitType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerSplitType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetControllerSplitType(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetControllerSplitType ************************

// ********** Begin Class UJoyShockLibrary Function JslGetControllerType ***************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics
{
	struct JoyShockLibrary_eventJslGetControllerType_Parms
	{
		int32 deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerType_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerType", Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::JoyShockLibrary_eventJslGetControllerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::JoyShockLibrary_eventJslGetControllerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetControllerType(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetControllerType *****************************

// ********** Begin Class UJoyShockLibrary Function JslGetGyroX ************************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics
{
	struct JoyShockLibrary_eventJslGetGyroX_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroX_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroX", Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::JoyShockLibrary_eventJslGetGyroX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::JoyShockLibrary_eventJslGetGyroX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroX(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetGyroX **************************************

// ********** Begin Class UJoyShockLibrary Function JslGetGyroY ************************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics
{
	struct JoyShockLibrary_eventJslGetGyroY_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroY_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroY", Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::JoyShockLibrary_eventJslGetGyroY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::JoyShockLibrary_eventJslGetGyroY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroY)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroY(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetGyroY **************************************

// ********** Begin Class UJoyShockLibrary Function JslGetGyroZ ************************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics
{
	struct JoyShockLibrary_eventJslGetGyroZ_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroZ_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroZ", Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::JoyShockLibrary_eventJslGetGyroZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::JoyShockLibrary_eventJslGetGyroZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroZ)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroZ(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetGyroZ **************************************

// ********** Begin Class UJoyShockLibrary Function JslGetIMUState *********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics
{
	struct JoyShockLibrary_eventJslGetIMUState_Parms
	{
		int32 deviceId;
		FIMUState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetIMUState_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIMUState, METADATA_PARAMS(0, nullptr) }; // 1045335441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetIMUState", Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::JoyShockLibrary_eventJslGetIMUState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::JoyShockLibrary_eventJslGetIMUState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetIMUState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIMUState*)Z_Param__Result=UJoyShockLibrary::JslGetIMUState(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetIMUState ***********************************

// ********** Begin Class UJoyShockLibrary Function JslGetLeftTrigger ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics
{
	struct JoyShockLibrary_eventJslGetLeftTrigger_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftTrigger_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftTrigger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftTrigger", Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::JoyShockLibrary_eventJslGetLeftTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::JoyShockLibrary_eventJslGetLeftTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftTrigger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftTrigger(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetLeftTrigger ********************************

// ********** Begin Class UJoyShockLibrary Function JslGetLeftX ************************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics
{
	struct JoyShockLibrary_eventJslGetLeftX_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftX_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftX", Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::JoyShockLibrary_eventJslGetLeftX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::JoyShockLibrary_eventJslGetLeftX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftX(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetLeftX **************************************

// ********** Begin Class UJoyShockLibrary Function JslGetLeftY ************************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics
{
	struct JoyShockLibrary_eventJslGetLeftY_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftY_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftY", Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::JoyShockLibrary_eventJslGetLeftY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::JoyShockLibrary_eventJslGetLeftY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftY)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftY(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetLeftY **************************************

// ********** Begin Class UJoyShockLibrary Function JslGetMotionState ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics
{
	struct JoyShockLibrary_eventJslGetMotionState_Parms
	{
		int32 deviceId;
		FMotionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetMotionState_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FMotionState, METADATA_PARAMS(0, nullptr) }; // 3164105239
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetMotionState", Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::JoyShockLibrary_eventJslGetMotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::JoyShockLibrary_eventJslGetMotionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetMotionState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMotionState*)Z_Param__Result=UJoyShockLibrary::JslGetMotionState(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetMotionState ********************************

// ********** Begin Class UJoyShockLibrary Function JslGetPollRate *********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics
{
	struct JoyShockLibrary_eventJslGetPollRate_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetPollRate_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetPollRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetPollRate", Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::JoyShockLibrary_eventJslGetPollRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::JoyShockLibrary_eventJslGetPollRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetPollRate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetPollRate(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetPollRate ***********************************

// ********** Begin Class UJoyShockLibrary Function JslGetRightTrigger *****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics
{
	struct JoyShockLibrary_eventJslGetRightTrigger_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightTrigger_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightTrigger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightTrigger", Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::JoyShockLibrary_eventJslGetRightTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::JoyShockLibrary_eventJslGetRightTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightTrigger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightTrigger(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetRightTrigger *******************************

// ********** Begin Class UJoyShockLibrary Function JslGetRightX ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics
{
	struct JoyShockLibrary_eventJslGetRightX_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightX_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightX", Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::JoyShockLibrary_eventJslGetRightX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::JoyShockLibrary_eventJslGetRightX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightX(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetRightX *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetRightY ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics
{
	struct JoyShockLibrary_eventJslGetRightY_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightY_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightY", Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::JoyShockLibrary_eventJslGetRightY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::JoyShockLibrary_eventJslGetRightY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightY)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightY(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetRightY *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetSimpleState ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics
{
	struct JoyShockLibrary_eventJslGetSimpleState_Parms
	{
		int32 deviceId;
		FJoyShockState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetSimpleState_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetSimpleState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJoyShockState, METADATA_PARAMS(0, nullptr) }; // 2382127637
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetSimpleState", Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::JoyShockLibrary_eventJslGetSimpleState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::JoyShockLibrary_eventJslGetSimpleState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetSimpleState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FJoyShockState*)Z_Param__Result=UJoyShockLibrary::JslGetSimpleState(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetSimpleState ********************************

// ********** Begin Class UJoyShockLibrary Function JslGetStickStep ********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics
{
	struct JoyShockLibrary_eventJslGetStickStep_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetStickStep_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetStickStep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetStickStep", Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::JoyShockLibrary_eventJslGetStickStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::JoyShockLibrary_eventJslGetStickStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetStickStep)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetStickStep(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetStickStep **********************************

// ********** Begin Class UJoyShockLibrary Function JslGetTimeSinceLastUpdate **********************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics
{
	struct JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTimeSinceLastUpdate", Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTimeSinceLastUpdate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTimeSinceLastUpdate(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTimeSinceLastUpdate ************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchDown ********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics
{
	struct JoyShockLibrary_eventJslGetTouchDown_Parms
	{
		int32 deviceId;
		bool secondTouch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_secondTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchDown_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchDown_Parms*)Obj)->secondTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchDown_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchDown_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchDown", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::JoyShockLibrary_eventJslGetTouchDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::JoyShockLibrary_eventJslGetTouchDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchDown)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_secondTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJoyShockLibrary::JslGetTouchDown(Z_Param_deviceId,Z_Param_secondTouch);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchDown **********************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchId **********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics
{
	struct JoyShockLibrary_eventJslGetTouchId_Parms
	{
		int32 deviceId;
		bool secondTouch;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_secondTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchId_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchId_Parms*)Obj)->secondTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchId_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchId", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::JoyShockLibrary_eventJslGetTouchId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::JoyShockLibrary_eventJslGetTouchId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchId)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_secondTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetTouchId(Z_Param_deviceId,Z_Param_secondTouch);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchId ************************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchpadDimension ************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics
{
	struct JoyShockLibrary_eventJslGetTouchpadDimension_Parms
	{
		int32 deviceId;
		int32 sizeX;
		int32 sizeY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sizeY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeX = { "sizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, sizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeY = { "sizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, sizeY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchpadDimension_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchpadDimension_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchpadDimension", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::JoyShockLibrary_eventJslGetTouchpadDimension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::JoyShockLibrary_eventJslGetTouchpadDimension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchpadDimension)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sizeX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sizeY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJoyShockLibrary::JslGetTouchpadDimension(Z_Param_deviceId,Z_Param_Out_sizeX,Z_Param_Out_sizeY);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchpadDimension **************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchState *******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics
{
	struct JoyShockLibrary_eventJslGetTouchState_Parms
	{
		int32 deviceId;
		bool previous;
		FTouchState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_previous", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_previous_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_previous;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchState_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchState_Parms*)Obj)->previous = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous = { "previous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchState_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchState_Parms, ReturnValue), Z_Construct_UScriptStruct_FTouchState, METADATA_PARAMS(0, nullptr) }; // 507316608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchState", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::JoyShockLibrary_eventJslGetTouchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::JoyShockLibrary_eventJslGetTouchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_previous);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTouchState*)Z_Param__Result=UJoyShockLibrary::JslGetTouchState(Z_Param_deviceId,Z_Param_previous);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchState *********************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchX ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics
{
	struct JoyShockLibrary_eventJslGetTouchX_Parms
	{
		int32 deviceId;
		bool secondTouch;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_secondTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchX_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchX_Parms*)Obj)->secondTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchX_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchX", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::JoyShockLibrary_eventJslGetTouchX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::JoyShockLibrary_eventJslGetTouchX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchX)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_secondTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTouchX(Z_Param_deviceId,Z_Param_secondTouch);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchX *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetTouchY ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics
{
	struct JoyShockLibrary_eventJslGetTouchY_Parms
	{
		int32 deviceId;
		bool secondTouch;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_secondTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchY_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslGetTouchY_Parms*)Obj)->secondTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchY_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchY", Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::JoyShockLibrary_eventJslGetTouchY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::JoyShockLibrary_eventJslGetTouchY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchY)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_secondTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTouchY(Z_Param_deviceId,Z_Param_secondTouch);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTouchY *************************************

// ********** Begin Class UJoyShockLibrary Function JslGetTriggerStep ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics
{
	struct JoyShockLibrary_eventJslGetTriggerStep_Parms
	{
		int32 deviceId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTriggerStep_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTriggerStep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTriggerStep", Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::JoyShockLibrary_eventJslGetTriggerStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::JoyShockLibrary_eventJslGetTriggerStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTriggerStep)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTriggerStep(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslGetTriggerStep ********************************

// ********** Begin Class UJoyShockLibrary Function JslPauseContinuousCalibration ******************
struct Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics
{
	struct JoyShockLibrary_eventJslPauseContinuousCalibration_Parms
	{
		int32 deviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslPauseContinuousCalibration_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::NewProp_deviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslPauseContinuousCalibration", Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::JoyShockLibrary_eventJslPauseContinuousCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::JoyShockLibrary_eventJslPauseContinuousCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslPauseContinuousCalibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslPauseContinuousCalibration(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslPauseContinuousCalibration ********************

// ********** Begin Class UJoyShockLibrary Function JslResetContinuousCalibration ******************
struct Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics
{
	struct JoyShockLibrary_eventJslResetContinuousCalibration_Parms
	{
		int32 deviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslResetContinuousCalibration_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::NewProp_deviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslResetContinuousCalibration", Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::JoyShockLibrary_eventJslResetContinuousCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::JoyShockLibrary_eventJslResetContinuousCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslResetContinuousCalibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslResetContinuousCalibration(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslResetContinuousCalibration ********************

// ********** Begin Class UJoyShockLibrary Function JslSetAutomaticCalibration *********************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics
{
	struct JoyShockLibrary_eventJslSetAutomaticCalibration_Parms
	{
		int32 deviceId;
		bool enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetAutomaticCalibration_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslSetAutomaticCalibration_Parms*)Obj)->enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslSetAutomaticCalibration_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetAutomaticCalibration", Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::JoyShockLibrary_eventJslSetAutomaticCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::JoyShockLibrary_eventJslSetAutomaticCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetAutomaticCalibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_UBOOL(Z_Param_enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetAutomaticCalibration(Z_Param_deviceId,Z_Param_enabled);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetAutomaticCalibration ***********************

// ********** Begin Class UJoyShockLibrary Function JslSetCalibrationOffset ************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics
{
	struct JoyShockLibrary_eventJslSetCalibrationOffset_Parms
	{
		int32 deviceId;
		float xOffset;
		float yOffset;
		float zOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_xOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_yOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_zOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_xOffset = { "xOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, xOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_yOffset = { "yOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, yOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, zOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_xOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_yOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_zOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetCalibrationOffset", Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::JoyShockLibrary_eventJslSetCalibrationOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::JoyShockLibrary_eventJslSetCalibrationOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetCalibrationOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_xOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_yOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_zOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetCalibrationOffset(Z_Param_deviceId,Z_Param_xOffset,Z_Param_yOffset,Z_Param_zOffset);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetCalibrationOffset **************************

// ********** Begin Class UJoyShockLibrary Function JslSetGyroSpace ********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics
{
	struct JoyShockLibrary_eventJslSetGyroSpace_Parms
	{
		int32 deviceId;
		int32 gyroSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_gyroSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetGyroSpace_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_gyroSpace = { "gyroSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetGyroSpace_Parms, gyroSpace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_gyroSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetGyroSpace", Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::JoyShockLibrary_eventJslSetGyroSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::JoyShockLibrary_eventJslSetGyroSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetGyroSpace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_gyroSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetGyroSpace(Z_Param_deviceId,Z_Param_gyroSpace);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetGyroSpace **********************************

// ********** Begin Class UJoyShockLibrary Function JslSetLightColor *******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics
{
	struct JoyShockLibrary_eventJslSetLightColor_Parms
	{
		int32 InDeviceId;
		FColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\" static void JslSetLightColour(int32 deviceId, int32 colour); */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\" static void JslSetLightColour(int32 deviceId, int32 colour);" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetLightColor_Parms, InDeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetLightColor_Parms, InColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetLightColor", Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::JoyShockLibrary_eventJslSetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::JoyShockLibrary_eventJslSetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetLightColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
	P_GET_STRUCT(FColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetLightColor(Z_Param_InDeviceId,Z_Param_InColor);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetLightColor *********************************

// ********** Begin Class UJoyShockLibrary Function JslSetPlayerNumber *****************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics
{
	struct JoyShockLibrary_eventJslSetPlayerNumber_Parms
	{
		int32 deviceId;
		int32 number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetPlayerNumber_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetPlayerNumber_Parms, number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetPlayerNumber", Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::JoyShockLibrary_eventJslSetPlayerNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::JoyShockLibrary_eventJslSetPlayerNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetPlayerNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_number);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetPlayerNumber(Z_Param_deviceId,Z_Param_number);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetPlayerNumber *******************************

// ********** Begin Class UJoyShockLibrary Function JslSetRumble ***********************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics
{
	struct JoyShockLibrary_eventJslSetRumble_Parms
	{
		int32 deviceId;
		int32 smallRumble;
		int32 bigRumble;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_smallRumble;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bigRumble;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_smallRumble = { "smallRumble", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, smallRumble), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_bigRumble = { "bigRumble", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, bigRumble), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_smallRumble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_bigRumble,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetRumble", Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::JoyShockLibrary_eventJslSetRumble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::JoyShockLibrary_eventJslSetRumble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslSetRumble)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_GET_PROPERTY(FIntProperty,Z_Param_smallRumble);
	P_GET_PROPERTY(FIntProperty,Z_Param_bigRumble);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslSetRumble(Z_Param_deviceId,Z_Param_smallRumble,Z_Param_bigRumble);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslSetRumble *************************************

// ********** Begin Class UJoyShockLibrary Function JslStartContinuousCalibration ******************
struct Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics
{
	struct JoyShockLibrary_eventJslStartContinuousCalibration_Parms
	{
		int32 deviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslStartContinuousCalibration_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::NewProp_deviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslStartContinuousCalibration", Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::JoyShockLibrary_eventJslStartContinuousCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::JoyShockLibrary_eventJslStartContinuousCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslStartContinuousCalibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UJoyShockLibrary::JslStartContinuousCalibration(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslStartContinuousCalibration ********************

// ********** Begin Class UJoyShockLibrary Function JslStillConnected ******************************
struct Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics
{
	struct JoyShockLibrary_eventJslStillConnected_Parms
	{
		int32 deviceId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JoyShockLibrary_eventJslStillConnected_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((JoyShockLibrary_eventJslStillConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JoyShockLibrary_eventJslStillConnected_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslStillConnected", Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::JoyShockLibrary_eventJslStillConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::JoyShockLibrary_eventJslStillConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJoyShockLibrary::execJslStillConnected)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UJoyShockLibrary::JslStillConnected(Z_Param_deviceId);
	P_NATIVE_END;
}
// ********** End Class UJoyShockLibrary Function JslStillConnected ********************************

// ********** Begin Class UJoyShockLibrary *********************************************************
void UJoyShockLibrary::StaticRegisterNativesUJoyShockLibrary()
{
	UClass* Class = UJoyShockLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumPlayerControllers", &UJoyShockLibrary::execGetNumPlayerControllers },
		{ "JSL4UGetAndFlushAccumulatedGyro", &UJoyShockLibrary::execJSL4UGetAndFlushAccumulatedGyro },
		{ "JSL4UGetControllerInfoAndSettings", &UJoyShockLibrary::execJSL4UGetControllerInfoAndSettings },
		{ "JSL4UGetIMUState", &UJoyShockLibrary::execJSL4UGetIMUState },
		{ "JSL4UGetLeftStick", &UJoyShockLibrary::execJSL4UGetLeftStick },
		{ "JSL4UGetMotionState", &UJoyShockLibrary::execJSL4UGetMotionState },
		{ "JSL4UGetRawIMUState", &UJoyShockLibrary::execJSL4UGetRawIMUState },
		{ "JSL4UGetRawMotionState", &UJoyShockLibrary::execJSL4UGetRawMotionState },
		{ "JSL4UGetRightStick", &UJoyShockLibrary::execJSL4UGetRightStick },
		{ "JSL4UGetSimpleState", &UJoyShockLibrary::execJSL4UGetSimpleState },
		{ "JSL4UGetTouch", &UJoyShockLibrary::execJSL4UGetTouch },
		{ "JSL4UGetTouchState", &UJoyShockLibrary::execJSL4UGetTouchState },
		{ "JSL4USetGyroSpace", &UJoyShockLibrary::execJSL4USetGyroSpace },
		{ "JslConnectDevices", &UJoyShockLibrary::execJslConnectDevices },
		{ "JslDisconnectAndDisposeAll", &UJoyShockLibrary::execJslDisconnectAndDisposeAll },
		{ "JslGetAccelX", &UJoyShockLibrary::execJslGetAccelX },
		{ "JslGetAccelY", &UJoyShockLibrary::execJslGetAccelY },
		{ "JslGetAccelZ", &UJoyShockLibrary::execJslGetAccelZ },
		{ "JslGetAndFlushAccumulatedGyro", &UJoyShockLibrary::execJslGetAndFlushAccumulatedGyro },
		{ "JslGetAutoCalibrationStatus", &UJoyShockLibrary::execJslGetAutoCalibrationStatus },
		{ "JslGetButtons", &UJoyShockLibrary::execJslGetButtons },
		{ "JslGetCalibrationOffset", &UJoyShockLibrary::execJslGetCalibrationOffset },
		{ "JslGetConnectedDeviceHandles", &UJoyShockLibrary::execJslGetConnectedDeviceHandles },
		{ "JslGetControllerColor", &UJoyShockLibrary::execJslGetControllerColor },
		{ "JslGetControllerInfoAndSettings", &UJoyShockLibrary::execJslGetControllerInfoAndSettings },
		{ "JslGetControllerSplitType", &UJoyShockLibrary::execJslGetControllerSplitType },
		{ "JslGetControllerType", &UJoyShockLibrary::execJslGetControllerType },
		{ "JslGetGyroX", &UJoyShockLibrary::execJslGetGyroX },
		{ "JslGetGyroY", &UJoyShockLibrary::execJslGetGyroY },
		{ "JslGetGyroZ", &UJoyShockLibrary::execJslGetGyroZ },
		{ "JslGetIMUState", &UJoyShockLibrary::execJslGetIMUState },
		{ "JslGetLeftTrigger", &UJoyShockLibrary::execJslGetLeftTrigger },
		{ "JslGetLeftX", &UJoyShockLibrary::execJslGetLeftX },
		{ "JslGetLeftY", &UJoyShockLibrary::execJslGetLeftY },
		{ "JslGetMotionState", &UJoyShockLibrary::execJslGetMotionState },
		{ "JslGetPollRate", &UJoyShockLibrary::execJslGetPollRate },
		{ "JslGetRightTrigger", &UJoyShockLibrary::execJslGetRightTrigger },
		{ "JslGetRightX", &UJoyShockLibrary::execJslGetRightX },
		{ "JslGetRightY", &UJoyShockLibrary::execJslGetRightY },
		{ "JslGetSimpleState", &UJoyShockLibrary::execJslGetSimpleState },
		{ "JslGetStickStep", &UJoyShockLibrary::execJslGetStickStep },
		{ "JslGetTimeSinceLastUpdate", &UJoyShockLibrary::execJslGetTimeSinceLastUpdate },
		{ "JslGetTouchDown", &UJoyShockLibrary::execJslGetTouchDown },
		{ "JslGetTouchId", &UJoyShockLibrary::execJslGetTouchId },
		{ "JslGetTouchpadDimension", &UJoyShockLibrary::execJslGetTouchpadDimension },
		{ "JslGetTouchState", &UJoyShockLibrary::execJslGetTouchState },
		{ "JslGetTouchX", &UJoyShockLibrary::execJslGetTouchX },
		{ "JslGetTouchY", &UJoyShockLibrary::execJslGetTouchY },
		{ "JslGetTriggerStep", &UJoyShockLibrary::execJslGetTriggerStep },
		{ "JslPauseContinuousCalibration", &UJoyShockLibrary::execJslPauseContinuousCalibration },
		{ "JslResetContinuousCalibration", &UJoyShockLibrary::execJslResetContinuousCalibration },
		{ "JslSetAutomaticCalibration", &UJoyShockLibrary::execJslSetAutomaticCalibration },
		{ "JslSetCalibrationOffset", &UJoyShockLibrary::execJslSetCalibrationOffset },
		{ "JslSetGyroSpace", &UJoyShockLibrary::execJslSetGyroSpace },
		{ "JslSetLightColor", &UJoyShockLibrary::execJslSetLightColor },
		{ "JslSetPlayerNumber", &UJoyShockLibrary::execJslSetPlayerNumber },
		{ "JslSetRumble", &UJoyShockLibrary::execJslSetRumble },
		{ "JslStartContinuousCalibration", &UJoyShockLibrary::execJslStartContinuousCalibration },
		{ "JslStillConnected", &UJoyShockLibrary::execJslStillConnected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UJoyShockLibrary;
UClass* UJoyShockLibrary::GetPrivateStaticClass()
{
	using TClass = UJoyShockLibrary;
	if (!Z_Registration_Info_UClass_UJoyShockLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("JoyShockLibrary"),
			Z_Registration_Info_UClass_UJoyShockLibrary.InnerSingleton,
			StaticRegisterNativesUJoyShockLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UJoyShockLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UJoyShockLibrary_NoRegister()
{
	return UJoyShockLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJoyShockLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// JSL_SETTINGS;\n" },
		{ "IncludePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "JSL_SETTINGS;" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers, "GetNumPlayerControllers" }, // 951574218
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro, "JSL4UGetAndFlushAccumulatedGyro" }, // 2022166707
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings, "JSL4UGetControllerInfoAndSettings" }, // 2898908902
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState, "JSL4UGetIMUState" }, // 450218118
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick, "JSL4UGetLeftStick" }, // 2561545877
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState, "JSL4UGetMotionState" }, // 977693685
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState, "JSL4UGetRawIMUState" }, // 2021497192
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState, "JSL4UGetRawMotionState" }, // 2006053539
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick, "JSL4UGetRightStick" }, // 94256140
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState, "JSL4UGetSimpleState" }, // 796040162
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch, "JSL4UGetTouch" }, // 1133733378
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState, "JSL4UGetTouchState" }, // 3995710784
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace, "JSL4USetGyroSpace" }, // 3380550155
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices, "JslConnectDevices" }, // 3001796712
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll, "JslDisconnectAndDisposeAll" }, // 1170594522
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX, "JslGetAccelX" }, // 1782366088
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY, "JslGetAccelY" }, // 844112721
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ, "JslGetAccelZ" }, // 541956801
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro, "JslGetAndFlushAccumulatedGyro" }, // 1845104753
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus, "JslGetAutoCalibrationStatus" }, // 4125636151
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons, "JslGetButtons" }, // 4251522006
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset, "JslGetCalibrationOffset" }, // 1918635048
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles, "JslGetConnectedDeviceHandles" }, // 2756530744
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor, "JslGetControllerColor" }, // 1285904241
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings, "JslGetControllerInfoAndSettings" }, // 2134584627
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType, "JslGetControllerSplitType" }, // 401924753
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType, "JslGetControllerType" }, // 82434760
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX, "JslGetGyroX" }, // 2491978309
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY, "JslGetGyroY" }, // 4165742474
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ, "JslGetGyroZ" }, // 2260346851
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState, "JslGetIMUState" }, // 1276710543
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger, "JslGetLeftTrigger" }, // 723995443
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX, "JslGetLeftX" }, // 2390605361
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY, "JslGetLeftY" }, // 3198937211
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState, "JslGetMotionState" }, // 504765627
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate, "JslGetPollRate" }, // 528104254
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger, "JslGetRightTrigger" }, // 3887948117
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX, "JslGetRightX" }, // 4009039308
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY, "JslGetRightY" }, // 2696535532
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState, "JslGetSimpleState" }, // 2898814634
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep, "JslGetStickStep" }, // 2825690981
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate, "JslGetTimeSinceLastUpdate" }, // 4236705995
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown, "JslGetTouchDown" }, // 3409842814
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId, "JslGetTouchId" }, // 1096470435
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension, "JslGetTouchpadDimension" }, // 331022489
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState, "JslGetTouchState" }, // 2534332913
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX, "JslGetTouchX" }, // 3841951768
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY, "JslGetTouchY" }, // 448819166
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep, "JslGetTriggerStep" }, // 4004216757
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration, "JslPauseContinuousCalibration" }, // 2029614393
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration, "JslResetContinuousCalibration" }, // 2027392414
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration, "JslSetAutomaticCalibration" }, // 3017719738
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset, "JslSetCalibrationOffset" }, // 2117867922
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace, "JslSetGyroSpace" }, // 1989339207
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor, "JslSetLightColor" }, // 2508087036
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber, "JslSetPlayerNumber" }, // 3829311359
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble, "JslSetRumble" }, // 889341373
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration, "JslStartContinuousCalibration" }, // 2099129164
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected, "JslStillConnected" }, // 4142094727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyShockLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJoyShockLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoyShockLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoyShockLibrary_Statics::ClassParams = {
	&UJoyShockLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJoyShockLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UJoyShockLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJoyShockLibrary()
{
	if (!Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton, Z_Construct_UClass_UJoyShockLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton;
}
UJoyShockLibrary::UJoyShockLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyShockLibrary);
UJoyShockLibrary::~UJoyShockLibrary() {}
// ********** End Class UJoyShockLibrary ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EJSL4UControllerType_StaticEnum, TEXT("EJSL4UControllerType"), &Z_Registration_Info_UEnum_EJSL4UControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3956998331U) },
		{ EJSL4UGyroSpace_StaticEnum, TEXT("EJSL4UGyroSpace"), &Z_Registration_Info_UEnum_EJSL4UGyroSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 644337271U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJoyShockState::StaticStruct, Z_Construct_UScriptStruct_FJoyShockState_Statics::NewStructOps, TEXT("JoyShockState"), &Z_Registration_Info_UScriptStruct_FJoyShockState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoyShockState), 2382127637U) },
		{ FJSL4UJoyShockState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewStructOps, TEXT("JSL4UJoyShockState"), &Z_Registration_Info_UScriptStruct_FJSL4UJoyShockState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UJoyShockState), 399669378U) },
		{ FIMUState::StaticStruct, Z_Construct_UScriptStruct_FIMUState_Statics::NewStructOps, TEXT("IMUState"), &Z_Registration_Info_UScriptStruct_FIMUState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIMUState), 1045335441U) },
		{ FJSL4UIMUState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewStructOps, TEXT("JSL4UIMUState"), &Z_Registration_Info_UScriptStruct_FJSL4UIMUState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UIMUState), 3000476736U) },
		{ FMotionState::StaticStruct, Z_Construct_UScriptStruct_FMotionState_Statics::NewStructOps, TEXT("MotionState"), &Z_Registration_Info_UScriptStruct_FMotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionState), 3164105239U) },
		{ FJSL4UMotionState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewStructOps, TEXT("JSL4UMotionState"), &Z_Registration_Info_UScriptStruct_FJSL4UMotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UMotionState), 1866137965U) },
		{ FTouchState::StaticStruct, Z_Construct_UScriptStruct_FTouchState_Statics::NewStructOps, TEXT("TouchState"), &Z_Registration_Info_UScriptStruct_FTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchState), 507316608U) },
		{ FJSL4USingleTouchState::StaticStruct, Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewStructOps, TEXT("JSL4USingleTouchState"), &Z_Registration_Info_UScriptStruct_FJSL4USingleTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4USingleTouchState), 2241891130U) },
		{ FJSL4UTouchState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewStructOps, TEXT("JSL4UTouchState"), &Z_Registration_Info_UScriptStruct_FJSL4UTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UTouchState), 982850333U) },
		{ FJSLAutoCalibration::StaticStruct, Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewStructOps, TEXT("JSLAutoCalibration"), &Z_Registration_Info_UScriptStruct_FJSLAutoCalibration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSLAutoCalibration), 1450566247U) },
		{ FJSL4USettings::StaticStruct, Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewStructOps, TEXT("JSL4USettings"), &Z_Registration_Info_UScriptStruct_FJSL4USettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4USettings), 2515472080U) },
		{ FJSLSettings::StaticStruct, Z_Construct_UScriptStruct_FJSLSettings_Statics::NewStructOps, TEXT("JSLSettings"), &Z_Registration_Info_UScriptStruct_FJSLSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSLSettings), 3258019054U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJoyShockLibrary, UJoyShockLibrary::StaticClass, TEXT("UJoyShockLibrary"), &Z_Registration_Info_UClass_UJoyShockLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoyShockLibrary), 1951435348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_4201755052(TEXT("/Script/JoyShockLibrary4Unreal"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h__Script_JoyShockLibrary4Unreal_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
