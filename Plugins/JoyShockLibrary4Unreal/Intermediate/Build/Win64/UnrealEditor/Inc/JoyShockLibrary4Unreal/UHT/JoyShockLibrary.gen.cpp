// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyShockLibrary4Unreal/JoyShockLibrary/JoyShockLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyShockLibrary() {}
// Cross Module References
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
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoyShockState;
class UScriptStruct* FJoyShockState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoyShockState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoyShockState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyShockState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JoyShockState"));
	}
	return Z_Registration_Info_UScriptStruct_JoyShockState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJoyShockState>()
{
	return FJoyShockState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoyShockState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttons_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickLX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stickLX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickLY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stickLY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickRX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stickRX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickRY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stickRY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JOY_SHOCK_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JOY_SHOCK_STATE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyShockState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyShockState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, buttons), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger = { "lTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, lTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger = { "rTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, rTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX = { "stickLX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, stickLX), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY = { "stickLY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, stickLY), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX = { "stickRX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, stickRX), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY = { "stickRY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyShockState, stickRY), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_lTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_rTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickLY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyShockState_Statics::NewProp_stickRY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyShockState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JoyShockState",
		sizeof(FJoyShockState),
		alignof(FJoyShockState),
		Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyShockState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyShockState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoyShockState()
	{
		if (!Z_Registration_Info_UScriptStruct_JoyShockState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoyShockState.InnerSingleton, Z_Construct_UScriptStruct_FJoyShockState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoyShockState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4UJoyShockState;
class UScriptStruct* FJSL4UJoyShockState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UJoyShockState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UJoyShockState"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4UJoyShockState>()
{
	return FJSL4UJoyShockState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Buttons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftStick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightStick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightStick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// JOY_SHOCK_STATE;\n// typedef struct JOY_SHOCK_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "JOY_SHOCK_STATE;\ntypedef struct JOY_SHOCK_STATE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UJoyShockState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UJoyShockState, Buttons), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger = { "LeftTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UJoyShockState, LeftTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger = { "RightTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UJoyShockState, RightTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick = { "LeftStick", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UJoyShockState, LeftStick), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick = { "RightStick", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UJoyShockState, RightStick), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_LeftStick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewProp_RightStick,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4UJoyShockState",
		sizeof(FJSL4UJoyShockState),
		alignof(FJSL4UJoyShockState),
		Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4UJoyShockState()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4UJoyShockState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IMUState;
class UScriptStruct* FIMUState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IMUState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IMUState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIMUState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("IMUState"));
	}
	return Z_Registration_Info_UScriptStruct_IMUState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FIMUState>()
{
	return FIMUState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIMUState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gyroX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gyroY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gyroZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct IMU_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct IMU_STATE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIMUState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIMUState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX = { "accelX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, accelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY = { "accelY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, accelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ = { "accelZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, accelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX = { "gyroX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, gyroX), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY = { "gyroY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, gyroY), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ = { "gyroZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIMUState, gyroZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_accelZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIMUState_Statics::NewProp_gyroZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIMUState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"IMUState",
		sizeof(FIMUState),
		alignof(FIMUState),
		Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIMUState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIMUState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIMUState()
	{
		if (!Z_Registration_Info_UScriptStruct_IMUState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IMUState.InnerSingleton, Z_Construct_UScriptStruct_FIMUState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IMUState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4UIMUState;
class UScriptStruct* FJSL4UIMUState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4UIMUState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4UIMUState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UIMUState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UIMUState"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4UIMUState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4UIMUState>()
{
	return FJSL4UIMUState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4UIMUState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gyro_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gyro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// New Struct\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "New Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UIMUState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UIMUState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro = { "Gyro", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UIMUState, Gyro), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewProp_Gyro,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4UIMUState",
		sizeof(FJSL4UIMUState),
		alignof(FJSL4UIMUState),
		Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4UIMUState()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4UIMUState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4UIMUState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4UIMUState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionState;
class UScriptStruct* FMotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("MotionState"));
	}
	return Z_Registration_Info_UScriptStruct_MotionState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FMotionState>()
{
	return FMotionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_quatW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_quatW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_quatX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_quatX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_quatY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_quatY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_quatZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_quatZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawQuatZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rawQuatZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accelZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_accelZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct MOTION_STATE\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct MOTION_STATE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW = { "quatW", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, quatW), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX = { "quatX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, quatX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY = { "quatY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, quatY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ = { "quatZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, quatZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_quatZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW = { "rawQuatW", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, rawQuatW), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX = { "rawQuatX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, rawQuatX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY = { "rawQuatY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, rawQuatY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ = { "rawQuatZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, rawQuatZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_rawQuatZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX = { "accelX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, accelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY = { "accelY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, accelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ = { "accelZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, accelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_accelZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX = { "gravX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, gravX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY = { "gravY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, gravY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ = { "gravZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionState, gravZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::NewProp_gravZ_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"MotionState",
		sizeof(FMotionState),
		alignof(FMotionState),
		Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionState()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionState.InnerSingleton, Z_Construct_UScriptStruct_FMotionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4UMotionState;
class UScriptStruct* FJSL4UMotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4UMotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4UMotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UMotionState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UMotionState"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4UMotionState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4UMotionState>()
{
	return FJSL4UMotionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4UMotionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// New Struct\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "New Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UMotionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UMotionState, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UMotionState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UMotionState, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewProp_Gravity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4UMotionState",
		sizeof(FJSL4UMotionState),
		alignof(FJSL4UMotionState),
		Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4UMotionState()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4UMotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4UMotionState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4UMotionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchState;
class UScriptStruct* FTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("TouchState"));
	}
	return Z_Registration_Info_UScriptStruct_TouchState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FTouchState>()
{
	return FTouchState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTouchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t0Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_t0Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t1Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_t1Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t0Down_MetaData[];
#endif
		static void NewProp_t0Down_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_t0Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t1Down_MetaData[];
#endif
		static void NewProp_t1Down_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_t1Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t0X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t0X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t0Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t0Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t1X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t1X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t1Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t1Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct TOUCH_STATE {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct TOUCH_STATE {" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTouchState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id = { "t0Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t0Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id = { "t1Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t1Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_SetBit(void* Obj)
	{
		((FTouchState*)Obj)->t0Down = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down = { "t0Down", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTouchState), &Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Down_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_SetBit(void* Obj)
	{
		((FTouchState*)Obj)->t1Down = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down = { "t1Down", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTouchState), &Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Down_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X = { "t0X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t0X), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y = { "t0Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t0Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t0Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X = { "t1X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t1X), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y = { "t1Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchState, t1Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::NewProp_t1Y_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"TouchState",
		sizeof(FTouchState),
		alignof(FTouchState),
		Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTouchState()
	{
		if (!Z_Registration_Info_UScriptStruct_TouchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchState.InnerSingleton, Z_Construct_UScriptStruct_FTouchState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TouchState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4USingleTouchState;
class UScriptStruct* FJSL4USingleTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4USingleTouchState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4USingleTouchState"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4USingleTouchState>()
{
	return FJSL4USingleTouchState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TouchID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDown_MetaData[];
#endif
		static void NewProp_bIsDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TOUCH_STATE;\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "TOUCH_STATE;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4USingleTouchState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID = { "TouchID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USingleTouchState, TouchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_SetBit(void* Obj)
	{
		((FJSL4USingleTouchState*)Obj)->bIsDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown = { "bIsDown", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSL4USingleTouchState), &Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USingleTouchState, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_TouchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_bIsDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4USingleTouchState",
		sizeof(FJSL4USingleTouchState),
		alignof(FJSL4USingleTouchState),
		Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4USingleTouchState()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4USingleTouchState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4UTouchState;
class UScriptStruct* FJSL4UTouchState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4UTouchState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4UTouchState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4UTouchState, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4UTouchState"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4UTouchState.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4UTouchState>()
{
	return FJSL4UTouchState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4UTouchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTouch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTouch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryTouch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4UTouchState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch = { "PrimaryTouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UTouchState, PrimaryTouch), Z_Construct_UScriptStruct_FJSL4USingleTouchState, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch_MetaData)) }; // 2831005760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch = { "SecondaryTouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4UTouchState, SecondaryTouch), Z_Construct_UScriptStruct_FJSL4USingleTouchState, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch_MetaData)) }; // 2831005760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_PrimaryTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewProp_SecondaryTouch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4UTouchState",
		sizeof(FJSL4UTouchState),
		alignof(FJSL4UTouchState),
		Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4UTouchState()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4UTouchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4UTouchState.InnerSingleton, Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4UTouchState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSLAutoCalibration;
class UScriptStruct* FJSLAutoCalibration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSLAutoCalibration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSLAutoCalibration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSLAutoCalibration, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSLAutoCalibration"));
	}
	return Z_Registration_Info_UScriptStruct_JSLAutoCalibration.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSLAutoCalibration>()
{
	return FJSLAutoCalibration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoCalibrationEnabled_MetaData[];
#endif
		static void NewProp_autoCalibrationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoCalibrationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSteady_MetaData[];
#endif
		static void NewProp_isSteady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSteady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_AUTO_CALIBRATION {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_AUTO_CALIBRATION {" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSLAutoCalibration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence = { "confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSLAutoCalibration, confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_SetBit(void* Obj)
	{
		((FJSLAutoCalibration*)Obj)->autoCalibrationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled = { "autoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSLAutoCalibration), &Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_SetBit(void* Obj)
	{
		((FJSLAutoCalibration*)Obj)->isSteady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady = { "isSteady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSLAutoCalibration), &Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_autoCalibrationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewProp_isSteady,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSLAutoCalibration",
		sizeof(FJSLAutoCalibration),
		alignof(FJSLAutoCalibration),
		Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSLAutoCalibration()
	{
		if (!Z_Registration_Info_UScriptStruct_JSLAutoCalibration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSLAutoCalibration.InnerSingleton, Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSLAutoCalibration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJSL4UControllerType;
	static UEnum* EJSL4UControllerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("EJSL4UControllerType"));
		}
		return Z_Registration_Info_UEnum_EJSL4UControllerType.OuterSingleton;
	}
	template<> JOYSHOCKLIBRARY4UNREAL_API UEnum* StaticEnum<EJSL4UControllerType>()
	{
		return EJSL4UControllerType_StaticEnum();
	}
	struct Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enumerators[] = {
		{ "EJSL4UControllerType::Undefined", (int64)EJSL4UControllerType::Undefined },
		{ "EJSL4UControllerType::JoyConLeft", (int64)EJSL4UControllerType::JoyConLeft },
		{ "EJSL4UControllerType::JoyConRight", (int64)EJSL4UControllerType::JoyConRight },
		{ "EJSL4UControllerType::ProController", (int64)EJSL4UControllerType::ProController },
		{ "EJSL4UControllerType::DualShock4", (int64)EJSL4UControllerType::DualShock4 },
		{ "EJSL4UControllerType::DualSense", (int64)EJSL4UControllerType::DualSense },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enum_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		"EJSL4UControllerType",
		"EJSL4UControllerType",
		Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType()
	{
		if (!Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton, Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJSL4UControllerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJSL4UGyroSpace;
	static UEnum* EJSL4UGyroSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("EJSL4UGyroSpace"));
		}
		return Z_Registration_Info_UEnum_EJSL4UGyroSpace.OuterSingleton;
	}
	template<> JOYSHOCKLIBRARY4UNREAL_API UEnum* StaticEnum<EJSL4UGyroSpace>()
	{
		return EJSL4UGyroSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enumerators[] = {
		{ "EJSL4UGyroSpace::LocalSpace", (int64)EJSL4UGyroSpace::LocalSpace },
		{ "EJSL4UGyroSpace::WorldSpace", (int64)EJSL4UGyroSpace::WorldSpace },
		{ "EJSL4UGyroSpace::PlayerSpace", (int64)EJSL4UGyroSpace::PlayerSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enum_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		"EJSL4UGyroSpace",
		"EJSL4UGyroSpace",
		Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace()
	{
		if (!Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton, Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJSL4UGyroSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSL4USettings;
class UScriptStruct* FJSL4USettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSL4USettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSL4USettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSL4USettings, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSL4USettings"));
	}
	return Z_Registration_Info_UScriptStruct_JSL4USettings.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSL4USettings>()
{
	return FJSL4USettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSL4USettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GyroSpace_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GyroSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNumber;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SplitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCalibrating_MetaData[];
#endif
		static void NewProp_bIsCalibrating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCalibrating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalibrationEnabled_MetaData[];
#endif
		static void NewProp_bAutoCalibrationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalibrationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnected_MetaData[];
#endif
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_SETTINGS {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_SETTINGS {" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSL4USettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace = { "GyroSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USettings, GyroSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_GyroSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USettings, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USettings, PlayerNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_PlayerNumber_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USettings, ControllerType), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UControllerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_ControllerType_MetaData)) }; // 852111059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType = { "SplitType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSL4USettings, SplitType), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_SplitType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_SetBit(void* Obj)
	{
		((FJSL4USettings*)Obj)->bIsCalibrating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating = { "bIsCalibrating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsCalibrating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_SetBit(void* Obj)
	{
		((FJSL4USettings*)Obj)->bAutoCalibrationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled = { "bAutoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bAutoCalibrationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((FJSL4USettings*)Obj)->bIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSL4USettings), &Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewProp_bIsConnected_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSL4USettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSL4USettings",
		sizeof(FJSL4USettings),
		alignof(FJSL4USettings),
		Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSL4USettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSL4USettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSL4USettings()
	{
		if (!Z_Registration_Info_UScriptStruct_JSL4USettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSL4USettings.InnerSingleton, Z_Construct_UScriptStruct_FJSL4USettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSL4USettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSLSettings;
class UScriptStruct* FJSLSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSLSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSLSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSLSettings, Z_Construct_UPackage__Script_JoyShockLibrary4Unreal(), TEXT("JSLSettings"));
	}
	return Z_Registration_Info_UScriptStruct_JSLSettings.OuterSingleton;
}
template<> JOYSHOCKLIBRARY4UNREAL_API UScriptStruct* StaticStruct<FJSLSettings>()
{
	return FJSLSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSLSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gyroSpace_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_gyroSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controllerType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_controllerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_splitType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_splitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCalibrating_MetaData[];
#endif
		static void NewProp_isCalibrating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCalibrating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoCalibrationEnabled_MetaData[];
#endif
		static void NewProp_autoCalibrationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoCalibrationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isConnected_MetaData[];
#endif
		static void NewProp_isConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isConnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// typedef struct JSL_SETTINGS {\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "typedef struct JSL_SETTINGS {" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSLSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSLSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace = { "gyroSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSLSettings, gyroSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber = { "playerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSLSettings, playerNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType = { "controllerType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSLSettings, controllerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType = { "splitType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJSLSettings, splitType), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_SetBit(void* Obj)
	{
		((FJSLSettings*)Obj)->isCalibrating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating = { "isCalibrating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_SetBit(void* Obj)
	{
		((FJSLSettings*)Obj)->autoCalibrationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled = { "autoCalibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_SetBit(void* Obj)
	{
		((FJSLSettings*)Obj)->isConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected = { "isConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJSLSettings), &Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_gyroSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_playerNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_controllerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_splitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isCalibrating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_autoCalibrationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSLSettings_Statics::NewProp_isConnected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSLSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
		nullptr,
		&NewStructOps,
		"JSLSettings",
		sizeof(FJSLSettings),
		alignof(FJSLSettings),
		Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSLSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSLSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSLSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_JSLSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSLSettings.InnerSingleton, Z_Construct_UScriptStruct_FJSLSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSLSettings.InnerSingleton;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslSetLightColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
		P_GET_STRUCT(FColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslSetLightColor(Z_Param_InDeviceId,Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UJoyShockLibrary::JslGetControllerColor(Z_Param_InDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerSplitType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetControllerSplitType(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetControllerType(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetControllerInfoAndSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSLSettings*)Z_Param__Result=UJoyShockLibrary::JslGetControllerInfoAndSettings(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetControllerInfoAndSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4USettings*)Z_Param__Result=UJoyShockLibrary::JSL4UGetControllerInfoAndSettings(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAutoCalibrationStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSLAutoCalibration*)Z_Param__Result=UJoyShockLibrary::JslGetAutoCalibrationStatus(Z_Param_deviceId);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslSetAutomaticCalibration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslSetAutomaticCalibration(Z_Param_deviceId,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslPauseContinuousCalibration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslPauseContinuousCalibration(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslStartContinuousCalibration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslStartContinuousCalibration(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslResetContinuousCalibration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslResetContinuousCalibration(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTimeSinceLastUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTimeSinceLastUpdate(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetPollRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetPollRate(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTriggerStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTriggerStep(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetStickStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetStickStep(Z_Param_deviceId);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_GET_UBOOL(Z_Param_secondTouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetTouchX(Z_Param_deviceId,Z_Param_secondTouch);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetTouchDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_GET_UBOOL(Z_Param_secondTouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyShockLibrary::JslGetTouchDown(Z_Param_deviceId,Z_Param_secondTouch);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelZ)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelZ(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelY(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetAccelX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetAccelX(Z_Param_deviceId);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslSetGyroSpace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_GET_PROPERTY(FIntProperty,Z_Param_gyroSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslSetGyroSpace(Z_Param_deviceId,Z_Param_gyroSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetAndFlushAccumulatedGyro)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UJoyShockLibrary::JSL4UGetAndFlushAccumulatedGyro(Z_Param_InDeviceId);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroZ)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroZ(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroY(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetGyroX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetGyroX(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightTrigger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightTrigger(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftTrigger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftTrigger(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightY(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetRightX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetRightX(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRightStick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRightStick(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftY(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetLeftX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJoyShockLibrary::JslGetLeftX(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetLeftStick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UJoyShockLibrary::JSL4UGetLeftStick(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetButtons(Z_Param_deviceId);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetTouchState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_GET_UBOOL(Z_Param_bPrevious);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UTouchState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetTouchState(Z_Param_DeviceId,Z_Param_bPrevious);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRawMotionState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UMotionState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRawMotionState(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetMotionState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UMotionState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetMotionState(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetMotionState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMotionState*)Z_Param__Result=UJoyShockLibrary::JslGetMotionState(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetRawIMUState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UIMUState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetRawIMUState(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetIMUState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UIMUState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetIMUState(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetIMUState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIMUState*)Z_Param__Result=UJoyShockLibrary::JslGetIMUState(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJSL4UGetSimpleState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSL4UJoyShockState*)Z_Param__Result=UJoyShockLibrary::JSL4UGetSimpleState(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetSimpleState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJoyShockState*)Z_Param__Result=UJoyShockLibrary::JslGetSimpleState(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execGetNumPlayerControllers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::GetNumPlayerControllers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslStillConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyShockLibrary::JslStillConnected(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslDisconnectAndDisposeAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyShockLibrary::JslDisconnectAndDisposeAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslGetConnectedDeviceHandles)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutDeviceHandleArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::JslGetConnectedDeviceHandles(Z_Param_Out_OutDeviceHandleArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyShockLibrary::execJslConnectDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJoyShockLibrary::JslConnectDevices();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics
	{
		struct JoyShockLibrary_eventGetNumPlayerControllers_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventGetNumPlayerControllers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventGetNumPlayerControllers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary|Debug" },
		{ "Comment", "// TODO: Remove temporary debug function\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "TODO: Remove temporary debug function" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "GetNumPlayerControllers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::JoyShockLibrary_eventGetNumPlayerControllers_Parms), Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms
		{
			int32 InDeviceId;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms, InDeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_InDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetAndFlushAccumulatedGyro", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJSL4UGetAndFlushAccumulatedGyro_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms
		{
			int32 DeviceId;
			FJSL4USettings ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4USettings, METADATA_PARAMS(nullptr, 0) }; // 1296640502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetControllerInfoAndSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJSL4UGetControllerInfoAndSettings_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetIMUState_Parms
		{
			int32 DeviceID;
			FJSL4UIMUState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetIMUState_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UIMUState, METADATA_PARAMS(nullptr, 0) }; // 1748788704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetIMUState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::JoyShockLibrary_eventJSL4UGetIMUState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetLeftStick_Parms
		{
			int32 DeviceId;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetLeftStick_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetLeftStick_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetLeftStick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::JoyShockLibrary_eventJSL4UGetLeftStick_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetMotionState_Parms
		{
			int32 DeviceID;
			FJSL4UMotionState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetMotionState_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UMotionState, METADATA_PARAMS(nullptr, 0) }; // 3466524033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetMotionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::JoyShockLibrary_eventJSL4UGetMotionState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetRawIMUState_Parms
		{
			int32 DeviceID;
			FJSL4UIMUState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawIMUState_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UIMUState, METADATA_PARAMS(nullptr, 0) }; // 1748788704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRawIMUState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::JoyShockLibrary_eventJSL4UGetRawIMUState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetRawMotionState_Parms
		{
			int32 DeviceID;
			FJSL4UMotionState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawMotionState_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRawMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UMotionState, METADATA_PARAMS(nullptr, 0) }; // 3466524033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRawMotionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::JoyShockLibrary_eventJSL4UGetRawMotionState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetRightStick_Parms
		{
			int32 DeviceId;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRightStick_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetRightStick_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetRightStick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::JoyShockLibrary_eventJSL4UGetRightStick_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetSimpleState_Parms
		{
			int32 DeviceId;
			FJSL4UJoyShockState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetSimpleState_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetSimpleState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UJoyShockState, METADATA_PARAMS(nullptr, 0) }; // 1096728735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetSimpleState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::JoyShockLibrary_eventJSL4UGetSimpleState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetTouch_Parms
		{
			int32 DeviceId;
			bool bSecondTouch;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static void NewProp_bSecondTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecondTouch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouch_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJSL4UGetTouch_Parms*)Obj)->bSecondTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch = { "bSecondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJSL4UGetTouch_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouch_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_bSecondTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "// NEW FUNCTION\n" },
		{ "CPP_Default_bSecondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "NEW FUNCTION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetTouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::JoyShockLibrary_eventJSL4UGetTouch_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics
	{
		struct JoyShockLibrary_eventJSL4UGetTouchState_Parms
		{
			int32 DeviceId;
			bool bPrevious;
			FJSL4UTouchState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static void NewProp_bPrevious_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrevious;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouchState_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJSL4UGetTouchState_Parms*)Obj)->bPrevious = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious = { "bPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJSL4UGetTouchState_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4UGetTouchState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSL4UTouchState, METADATA_PARAMS(nullptr, 0) }; // 688364754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_bPrevious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_bPrevious", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4UGetTouchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::JoyShockLibrary_eventJSL4UGetTouchState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics
	{
		struct JoyShockLibrary_eventJSL4USetGyroSpace_Parms
		{
			int32 InDeviceID;
			EJSL4UGyroSpace InGyroSpace;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGyroSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGyroSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InDeviceID = { "InDeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4USetGyroSpace_Parms, InDeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace = { "InGyroSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJSL4USetGyroSpace_Parms, InGyroSpace), Z_Construct_UEnum_JoyShockLibrary4Unreal_EJSL4UGyroSpace, METADATA_PARAMS(nullptr, 0) }; // 3671309783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InDeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::NewProp_InGyroSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JSL4USetGyroSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::JoyShockLibrary_eventJSL4USetGyroSpace_Parms), Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics
	{
		struct JoyShockLibrary_eventJslConnectDevices_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslConnectDevices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslConnectDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::JoyShockLibrary_eventJslConnectDevices_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslDisconnectAndDisposeAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics
	{
		struct JoyShockLibrary_eventJslGetAccelX_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelX_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::JoyShockLibrary_eventJslGetAccelX_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics
	{
		struct JoyShockLibrary_eventJslGetAccelY_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelY_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::JoyShockLibrary_eventJslGetAccelY_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics
	{
		struct JoyShockLibrary_eventJslGetAccelZ_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelZ_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAccelZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAccelZ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::JoyShockLibrary_eventJslGetAccelZ_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics
	{
		struct JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms
		{
			int32 deviceId;
			float gyroX;
			float gyroY;
			float gyroZ;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gyroZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroX = { "gyroX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroY = { "gyroY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroZ = { "gyroZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms, gyroZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::NewProp_gyroZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAndFlushAccumulatedGyro", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::JoyShockLibrary_eventJslGetAndFlushAccumulatedGyro_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics
	{
		struct JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms
		{
			int32 deviceId;
			FJSLAutoCalibration ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSLAutoCalibration, METADATA_PARAMS(nullptr, 0) }; // 2064021215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetAutoCalibrationStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::JoyShockLibrary_eventJslGetAutoCalibrationStatus_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics
	{
		struct JoyShockLibrary_eventJslGetButtons_Parms
		{
			int32 deviceId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetButtons_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetButtons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetButtons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::JoyShockLibrary_eventJslGetButtons_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics
	{
		struct JoyShockLibrary_eventJslGetCalibrationOffset_Parms
		{
			int32 deviceId;
			float xOffset;
			float yOffset;
			float zOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_xOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_xOffset = { "xOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, xOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_yOffset = { "yOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, yOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetCalibrationOffset_Parms, zOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_xOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_yOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::NewProp_zOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetCalibrationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::JoyShockLibrary_eventJslGetCalibrationOffset_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics
	{
		struct JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms
		{
			TArray<int32> OutDeviceHandleArray;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutDeviceHandleArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDeviceHandleArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray_Inner = { "OutDeviceHandleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray = { "OutDeviceHandleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms, OutDeviceHandleArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_OutDeviceHandleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/* int* */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "int*" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetConnectedDeviceHandles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::JoyShockLibrary_eventJslGetConnectedDeviceHandles_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics
	{
		struct JoyShockLibrary_eventJslGetControllerColor_Parms
		{
			int32 InDeviceId;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerColor_Parms, InDeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_InDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\" static int32 JslGetControllerColour(int32 deviceId); */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\" static int32 JslGetControllerColour(int32 deviceId);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::JoyShockLibrary_eventJslGetControllerColor_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics
	{
		struct JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms
		{
			int32 deviceId;
			FJSLSettings ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSLSettings, METADATA_PARAMS(nullptr, 0) }; // 791906201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerInfoAndSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::JoyShockLibrary_eventJslGetControllerInfoAndSettings_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics
	{
		struct JoyShockLibrary_eventJslGetControllerSplitType_Parms
		{
			int32 deviceId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerSplitType_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerSplitType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerSplitType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::JoyShockLibrary_eventJslGetControllerSplitType_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics
	{
		struct JoyShockLibrary_eventJslGetControllerType_Parms
		{
			int32 deviceId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerType_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetControllerType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetControllerType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::JoyShockLibrary_eventJslGetControllerType_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics
	{
		struct JoyShockLibrary_eventJslGetGyroX_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroX_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::JoyShockLibrary_eventJslGetGyroX_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics
	{
		struct JoyShockLibrary_eventJslGetGyroY_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroY_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::JoyShockLibrary_eventJslGetGyroY_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics
	{
		struct JoyShockLibrary_eventJslGetGyroZ_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroZ_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetGyroZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetGyroZ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::JoyShockLibrary_eventJslGetGyroZ_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics
	{
		struct JoyShockLibrary_eventJslGetIMUState_Parms
		{
			int32 deviceId;
			FIMUState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetIMUState_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetIMUState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIMUState, METADATA_PARAMS(nullptr, 0) }; // 3312877962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetIMUState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::JoyShockLibrary_eventJslGetIMUState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics
	{
		struct JoyShockLibrary_eventJslGetLeftTrigger_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftTrigger_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftTrigger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::JoyShockLibrary_eventJslGetLeftTrigger_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics
	{
		struct JoyShockLibrary_eventJslGetLeftX_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftX_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::JoyShockLibrary_eventJslGetLeftX_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics
	{
		struct JoyShockLibrary_eventJslGetLeftY_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftY_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetLeftY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetLeftY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::JoyShockLibrary_eventJslGetLeftY_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics
	{
		struct JoyShockLibrary_eventJslGetMotionState_Parms
		{
			int32 deviceId;
			FMotionState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetMotionState_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetMotionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FMotionState, METADATA_PARAMS(nullptr, 0) }; // 4107090172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetMotionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::JoyShockLibrary_eventJslGetMotionState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics
	{
		struct JoyShockLibrary_eventJslGetPollRate_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetPollRate_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetPollRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetPollRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::JoyShockLibrary_eventJslGetPollRate_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics
	{
		struct JoyShockLibrary_eventJslGetRightTrigger_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightTrigger_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightTrigger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::JoyShockLibrary_eventJslGetRightTrigger_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics
	{
		struct JoyShockLibrary_eventJslGetRightX_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightX_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::JoyShockLibrary_eventJslGetRightX_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics
	{
		struct JoyShockLibrary_eventJslGetRightY_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightY_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetRightY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetRightY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::JoyShockLibrary_eventJslGetRightY_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics
	{
		struct JoyShockLibrary_eventJslGetSimpleState_Parms
		{
			int32 deviceId;
			FJoyShockState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetSimpleState_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetSimpleState_Parms, ReturnValue), Z_Construct_UScriptStruct_FJoyShockState, METADATA_PARAMS(nullptr, 0) }; // 953360248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetSimpleState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::JoyShockLibrary_eventJslGetSimpleState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics
	{
		struct JoyShockLibrary_eventJslGetStickStep_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetStickStep_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetStickStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetStickStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::JoyShockLibrary_eventJslGetStickStep_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics
	{
		struct JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTimeSinceLastUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::JoyShockLibrary_eventJslGetTimeSinceLastUpdate_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchDown_Parms
		{
			int32 deviceId;
			bool secondTouch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_secondTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchDown_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchDown_Parms*)Obj)->secondTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchDown_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchDown_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_secondTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::JoyShockLibrary_eventJslGetTouchDown_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchId_Parms
		{
			int32 deviceId;
			bool secondTouch;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_secondTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchId_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchId_Parms*)Obj)->secondTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchId_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_secondTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::JoyShockLibrary_eventJslGetTouchId_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchpadDimension_Parms
		{
			int32 deviceId;
			int32 sizeX;
			int32 sizeY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeX = { "sizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, sizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeY = { "sizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchpadDimension_Parms, sizeY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchpadDimension_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchpadDimension_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_sizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchpadDimension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::JoyShockLibrary_eventJslGetTouchpadDimension_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchState_Parms
		{
			int32 deviceId;
			bool previous;
			FTouchState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_previous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_previous;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchState_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchState_Parms*)Obj)->previous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous = { "previous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchState_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchState_Parms, ReturnValue), Z_Construct_UScriptStruct_FTouchState, METADATA_PARAMS(nullptr, 0) }; // 3437328248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_previous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_previous", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::JoyShockLibrary_eventJslGetTouchState_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchX_Parms
		{
			int32 deviceId;
			bool secondTouch;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_secondTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchX_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchX_Parms*)Obj)->secondTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchX_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_secondTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::JoyShockLibrary_eventJslGetTouchX_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics
	{
		struct JoyShockLibrary_eventJslGetTouchY_Parms
		{
			int32 deviceId;
			bool secondTouch;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_secondTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_secondTouch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchY_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslGetTouchY_Parms*)Obj)->secondTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch = { "secondTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslGetTouchY_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTouchY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_secondTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "CPP_Default_secondTouch", "false" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTouchY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::JoyShockLibrary_eventJslGetTouchY_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics
	{
		struct JoyShockLibrary_eventJslGetTriggerStep_Parms
		{
			int32 deviceId;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTriggerStep_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslGetTriggerStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslGetTriggerStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::JoyShockLibrary_eventJslGetTriggerStep_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics
	{
		struct JoyShockLibrary_eventJslPauseContinuousCalibration_Parms
		{
			int32 deviceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslPauseContinuousCalibration_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::NewProp_deviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslPauseContinuousCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::JoyShockLibrary_eventJslPauseContinuousCalibration_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics
	{
		struct JoyShockLibrary_eventJslResetContinuousCalibration_Parms
		{
			int32 deviceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslResetContinuousCalibration_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::NewProp_deviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslResetContinuousCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::JoyShockLibrary_eventJslResetContinuousCalibration_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics
	{
		struct JoyShockLibrary_eventJslSetAutomaticCalibration_Parms
		{
			int32 deviceId;
			bool enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetAutomaticCalibration_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslSetAutomaticCalibration_Parms*)Obj)->enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslSetAutomaticCalibration_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetAutomaticCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::JoyShockLibrary_eventJslSetAutomaticCalibration_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics
	{
		struct JoyShockLibrary_eventJslSetCalibrationOffset_Parms
		{
			int32 deviceId;
			float xOffset;
			float yOffset;
			float zOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_xOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_xOffset = { "xOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, xOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_yOffset = { "yOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, yOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetCalibrationOffset_Parms, zOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_xOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_yOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::NewProp_zOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetCalibrationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::JoyShockLibrary_eventJslSetCalibrationOffset_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics
	{
		struct JoyShockLibrary_eventJslSetGyroSpace_Parms
		{
			int32 deviceId;
			int32 gyroSpace;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_gyroSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetGyroSpace_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_gyroSpace = { "gyroSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetGyroSpace_Parms, gyroSpace), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::NewProp_gyroSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetGyroSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::JoyShockLibrary_eventJslSetGyroSpace_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics
	{
		struct JoyShockLibrary_eventJslSetLightColor_Parms
		{
			int32 InDeviceId;
			FColor InColor;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InDeviceId = { "InDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetLightColor_Parms, InDeviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetLightColor_Parms, InColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\" static void JslSetLightColour(int32 deviceId, int32 colour); */" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\" static void JslSetLightColour(int32 deviceId, int32 colour);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetLightColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::JoyShockLibrary_eventJslSetLightColor_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics
	{
		struct JoyShockLibrary_eventJslSetPlayerNumber_Parms
		{
			int32 deviceId;
			int32 number;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetPlayerNumber_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetPlayerNumber_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::NewProp_number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetPlayerNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::JoyShockLibrary_eventJslSetPlayerNumber_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics
	{
		struct JoyShockLibrary_eventJslSetRumble_Parms
		{
			int32 deviceId;
			int32 smallRumble;
			int32 bigRumble;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_smallRumble;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bigRumble;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_smallRumble = { "smallRumble", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, smallRumble), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_bigRumble = { "bigRumble", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslSetRumble_Parms, bigRumble), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_smallRumble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::NewProp_bigRumble,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslSetRumble", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::JoyShockLibrary_eventJslSetRumble_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics
	{
		struct JoyShockLibrary_eventJslStartContinuousCalibration_Parms
		{
			int32 deviceId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslStartContinuousCalibration_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::NewProp_deviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslStartContinuousCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::JoyShockLibrary_eventJslStartContinuousCalibration_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics
	{
		struct JoyShockLibrary_eventJslStillConnected_Parms
		{
			int32 deviceId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyShockLibrary_eventJslStillConnected_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyShockLibrary_eventJslStillConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyShockLibrary_eventJslStillConnected_Parms), &Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyShockLibrary" },
		{ "Comment", "/*extern \"C\"*/" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "extern \"C\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyShockLibrary, nullptr, "JslStillConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::JoyShockLibrary_eventJslStillConnected_Parms), Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoyShockLibrary);
	UClass* Z_Construct_UClass_UJoyShockLibrary_NoRegister()
	{
		return UJoyShockLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJoyShockLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyShockLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoyShockLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyShockLibrary_GetNumPlayerControllers, "GetNumPlayerControllers" }, // 3514617321
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetAndFlushAccumulatedGyro, "JSL4UGetAndFlushAccumulatedGyro" }, // 1141335709
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetControllerInfoAndSettings, "JSL4UGetControllerInfoAndSettings" }, // 2247223548
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetIMUState, "JSL4UGetIMUState" }, // 4247579390
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetLeftStick, "JSL4UGetLeftStick" }, // 1179287698
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetMotionState, "JSL4UGetMotionState" }, // 3416544350
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawIMUState, "JSL4UGetRawIMUState" }, // 2269246418
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRawMotionState, "JSL4UGetRawMotionState" }, // 2702012252
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetRightStick, "JSL4UGetRightStick" }, // 2788580889
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetSimpleState, "JSL4UGetSimpleState" }, // 3639487702
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouch, "JSL4UGetTouch" }, // 1529767050
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4UGetTouchState, "JSL4UGetTouchState" }, // 1313176445
		{ &Z_Construct_UFunction_UJoyShockLibrary_JSL4USetGyroSpace, "JSL4USetGyroSpace" }, // 1570513836
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslConnectDevices, "JslConnectDevices" }, // 2549235406
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslDisconnectAndDisposeAll, "JslDisconnectAndDisposeAll" }, // 3797108284
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelX, "JslGetAccelX" }, // 2486747096
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelY, "JslGetAccelY" }, // 3356175592
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAccelZ, "JslGetAccelZ" }, // 2553504455
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAndFlushAccumulatedGyro, "JslGetAndFlushAccumulatedGyro" }, // 15345398
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetAutoCalibrationStatus, "JslGetAutoCalibrationStatus" }, // 4177902859
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetButtons, "JslGetButtons" }, // 1316981406
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetCalibrationOffset, "JslGetCalibrationOffset" }, // 2384999998
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetConnectedDeviceHandles, "JslGetConnectedDeviceHandles" }, // 2039689616
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerColor, "JslGetControllerColor" }, // 2823350780
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerInfoAndSettings, "JslGetControllerInfoAndSettings" }, // 3563364711
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerSplitType, "JslGetControllerSplitType" }, // 219545966
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetControllerType, "JslGetControllerType" }, // 3379058450
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroX, "JslGetGyroX" }, // 3017136944
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroY, "JslGetGyroY" }, // 2809959939
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetGyroZ, "JslGetGyroZ" }, // 3577593508
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetIMUState, "JslGetIMUState" }, // 212963396
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftTrigger, "JslGetLeftTrigger" }, // 1415633142
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftX, "JslGetLeftX" }, // 315078624
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetLeftY, "JslGetLeftY" }, // 420022427
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetMotionState, "JslGetMotionState" }, // 3595352618
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetPollRate, "JslGetPollRate" }, // 50705757
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightTrigger, "JslGetRightTrigger" }, // 524492189
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightX, "JslGetRightX" }, // 962610739
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetRightY, "JslGetRightY" }, // 1847827027
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetSimpleState, "JslGetSimpleState" }, // 758721280
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetStickStep, "JslGetStickStep" }, // 2517927038
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTimeSinceLastUpdate, "JslGetTimeSinceLastUpdate" }, // 2741108335
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchDown, "JslGetTouchDown" }, // 3948243885
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchId, "JslGetTouchId" }, // 542510287
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchpadDimension, "JslGetTouchpadDimension" }, // 284467948
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchState, "JslGetTouchState" }, // 2835594479
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchX, "JslGetTouchX" }, // 2852284881
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTouchY, "JslGetTouchY" }, // 1006044095
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslGetTriggerStep, "JslGetTriggerStep" }, // 625081747
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslPauseContinuousCalibration, "JslPauseContinuousCalibration" }, // 2616705279
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslResetContinuousCalibration, "JslResetContinuousCalibration" }, // 340670593
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetAutomaticCalibration, "JslSetAutomaticCalibration" }, // 2793720268
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetCalibrationOffset, "JslSetCalibrationOffset" }, // 2419332825
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetGyroSpace, "JslSetGyroSpace" }, // 118129752
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetLightColor, "JslSetLightColor" }, // 1095768043
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetPlayerNumber, "JslSetPlayerNumber" }, // 3071053430
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslSetRumble, "JslSetRumble" }, // 371580375
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslStartContinuousCalibration, "JslStartContinuousCalibration" }, // 3514350043
		{ &Z_Construct_UFunction_UJoyShockLibrary_JslStillConnected, "JslStillConnected" }, // 3495739421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyShockLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// JSL_SETTINGS;\n" },
		{ "IncludePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ModuleRelativePath", "JoyShockLibrary/JoyShockLibrary.h" },
		{ "ToolTip", "JSL_SETTINGS;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyShockLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyShockLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UJoyShockLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoyShockLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyShockLibrary()
	{
		if (!Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton, Z_Construct_UClass_UJoyShockLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoyShockLibrary.OuterSingleton;
	}
	template<> JOYSHOCKLIBRARY4UNREAL_API UClass* StaticClass<UJoyShockLibrary>()
	{
		return UJoyShockLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyShockLibrary);
	UJoyShockLibrary::~UJoyShockLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::EnumInfo[] = {
		{ EJSL4UControllerType_StaticEnum, TEXT("EJSL4UControllerType"), &Z_Registration_Info_UEnum_EJSL4UControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 852111059U) },
		{ EJSL4UGyroSpace_StaticEnum, TEXT("EJSL4UGyroSpace"), &Z_Registration_Info_UEnum_EJSL4UGyroSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3671309783U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ScriptStructInfo[] = {
		{ FJoyShockState::StaticStruct, Z_Construct_UScriptStruct_FJoyShockState_Statics::NewStructOps, TEXT("JoyShockState"), &Z_Registration_Info_UScriptStruct_JoyShockState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoyShockState), 953360248U) },
		{ FJSL4UJoyShockState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UJoyShockState_Statics::NewStructOps, TEXT("JSL4UJoyShockState"), &Z_Registration_Info_UScriptStruct_JSL4UJoyShockState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UJoyShockState), 1096728735U) },
		{ FIMUState::StaticStruct, Z_Construct_UScriptStruct_FIMUState_Statics::NewStructOps, TEXT("IMUState"), &Z_Registration_Info_UScriptStruct_IMUState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIMUState), 3312877962U) },
		{ FJSL4UIMUState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UIMUState_Statics::NewStructOps, TEXT("JSL4UIMUState"), &Z_Registration_Info_UScriptStruct_JSL4UIMUState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UIMUState), 1748788704U) },
		{ FMotionState::StaticStruct, Z_Construct_UScriptStruct_FMotionState_Statics::NewStructOps, TEXT("MotionState"), &Z_Registration_Info_UScriptStruct_MotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionState), 4107090172U) },
		{ FJSL4UMotionState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UMotionState_Statics::NewStructOps, TEXT("JSL4UMotionState"), &Z_Registration_Info_UScriptStruct_JSL4UMotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UMotionState), 3466524033U) },
		{ FTouchState::StaticStruct, Z_Construct_UScriptStruct_FTouchState_Statics::NewStructOps, TEXT("TouchState"), &Z_Registration_Info_UScriptStruct_TouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchState), 3437328248U) },
		{ FJSL4USingleTouchState::StaticStruct, Z_Construct_UScriptStruct_FJSL4USingleTouchState_Statics::NewStructOps, TEXT("JSL4USingleTouchState"), &Z_Registration_Info_UScriptStruct_JSL4USingleTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4USingleTouchState), 2831005760U) },
		{ FJSL4UTouchState::StaticStruct, Z_Construct_UScriptStruct_FJSL4UTouchState_Statics::NewStructOps, TEXT("JSL4UTouchState"), &Z_Registration_Info_UScriptStruct_JSL4UTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4UTouchState), 688364754U) },
		{ FJSLAutoCalibration::StaticStruct, Z_Construct_UScriptStruct_FJSLAutoCalibration_Statics::NewStructOps, TEXT("JSLAutoCalibration"), &Z_Registration_Info_UScriptStruct_JSLAutoCalibration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSLAutoCalibration), 2064021215U) },
		{ FJSL4USettings::StaticStruct, Z_Construct_UScriptStruct_FJSL4USettings_Statics::NewStructOps, TEXT("JSL4USettings"), &Z_Registration_Info_UScriptStruct_JSL4USettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSL4USettings), 1296640502U) },
		{ FJSLSettings::StaticStruct, Z_Construct_UScriptStruct_FJSLSettings_Statics::NewStructOps, TEXT("JSLSettings"), &Z_Registration_Info_UScriptStruct_JSLSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSLSettings), 791906201U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoyShockLibrary, UJoyShockLibrary::StaticClass, TEXT("UJoyShockLibrary"), &Z_Registration_Info_UClass_UJoyShockLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoyShockLibrary), 3877685200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_2780350086(TEXT("/Script/JoyShockLibrary4Unreal"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_JoyShockLibrary_JoyShockLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
