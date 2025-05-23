// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Player/PlayerRotationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRotationComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerRotationComponent::execGetRotationInputValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetRotationInputValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execAddAimOffset)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DeltaOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAimOffset(Z_Param_Out_DeltaOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execGetDirectionFromCamera)
	{
		P_GET_STRUCT(FQuat,Z_Param_CameraOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionFromCamera(Z_Param_CameraOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execGetAimPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetAimPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execGetDeltaRotationEuler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDeltaRotationEuler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execGetDeltaRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetDeltaRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerRotationComponent::execResetInitialOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialOrientation();
		P_NATIVE_END;
	}
	void UPlayerRotationComponent::StaticRegisterNativesUPlayerRotationComponent()
	{
		UClass* Class = UPlayerRotationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAimOffset", &UPlayerRotationComponent::execAddAimOffset },
			{ "GetAimPosition", &UPlayerRotationComponent::execGetAimPosition },
			{ "GetDeltaRotation", &UPlayerRotationComponent::execGetDeltaRotation },
			{ "GetDeltaRotationEuler", &UPlayerRotationComponent::execGetDeltaRotationEuler },
			{ "GetDirectionFromCamera", &UPlayerRotationComponent::execGetDirectionFromCamera },
			{ "GetRotationInputValue", &UPlayerRotationComponent::execGetRotationInputValue },
			{ "ResetInitialOrientation", &UPlayerRotationComponent::execResetInitialOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics
	{
		struct PlayerRotationComponent_eventAddAimOffset_Parms
		{
			FVector2D DeltaOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset = { "DeltaOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventAddAimOffset_Parms, DeltaOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "AddAimOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PlayerRotationComponent_eventAddAimOffset_Parms), Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics
	{
		struct PlayerRotationComponent_eventGetAimPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetAimPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Gets the screenspace position of the aimed position. Good for rendering a crosshair on a widget.\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Gets the screenspace position of the aimed position. Good for rendering a crosshair on a widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetAimPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PlayerRotationComponent_eventGetAimPosition_Parms), Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics
	{
		struct PlayerRotationComponent_eventGetDeltaRotation_Parms
		{
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetDeltaRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Returns the rotation from the set initial orientation\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Returns the rotation from the set initial orientation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDeltaRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PlayerRotationComponent_eventGetDeltaRotation_Parms), Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics
	{
		struct PlayerRotationComponent_eventGetDeltaRotationEuler_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetDeltaRotationEuler_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDeltaRotationEuler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PlayerRotationComponent_eventGetDeltaRotationEuler_Parms), Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics
	{
		struct PlayerRotationComponent_eventGetDirectionFromCamera_Parms
		{
			FQuat CameraOrientation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOrientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_CameraOrientation = { "CameraOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetDirectionFromCamera_Parms, CameraOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetDirectionFromCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_CameraOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Gets a direction from the camera to the aimed position in global worldspace. Good for raycasting to where a crosshair is visually aiming.\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Gets a direction from the camera to the aimed position in global worldspace. Good for raycasting to where a crosshair is visually aiming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDirectionFromCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PlayerRotationComponent_eventGetDirectionFromCamera_Parms), Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics
	{
		struct PlayerRotationComponent_eventGetRotationInputValue_Parms
		{
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerRotationComponent_eventGetRotationInputValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Reads the rotation value from the Rotation input action\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Reads the rotation value from the Rotation input action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetRotationInputValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PlayerRotationComponent_eventGetRotationInputValue_Parms), Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Sets the initial rotation to the current rotation. Helpful to reset effects of drift along Z-axis\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Sets the initial rotation to the current rotation. Helpful to reset effects of drift along Z-axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "ResetInitialOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerRotationComponent);
	UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister()
	{
		return UPlayerRotationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerRotationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AimSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ClampOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerRotationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerRotationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset, "AddAimOffset" }, // 1271889342
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition, "GetAimPosition" }, // 2741607775
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation, "GetDeltaRotation" }, // 791722594
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler, "GetDeltaRotationEuler" }, // 1671731542
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera, "GetDirectionFromCamera" }, // 1259552309
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue, "GetRotationInputValue" }, // 2297144595
		{ &Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation, "ResetInitialOrientation" }, // 3838772037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/PlayerRotationComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "/* The initial position of the crosshair.\n\x09*  Each coordinate is a percentage of the screen size away from the top left corner\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "The initial position of the crosshair.\n      *  Each coordinate is a percentage of the screen size away from the top left corner" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerRotationComponent, InitialPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction = { "RotationAction", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerRotationComponent, RotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Screen distance traveled per angle of rotation\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Screen distance traveled per angle of rotation" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity = { "AimSensitivity", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerRotationComponent, AimSensitivity), METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerRotationComponent, ScreenResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// The distance from the edge of the screen that the aimed position must remain in\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "The distance from the edge of the screen that the aimed position must remain in" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset = { "ClampOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerRotationComponent, ClampOffset), METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerRotationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerRotationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerRotationComponent_Statics::ClassParams = {
		&UPlayerRotationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerRotationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerRotationComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton, Z_Construct_UClass_UPlayerRotationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UPlayerRotationComponent>()
	{
		return UPlayerRotationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerRotationComponent);
	UPlayerRotationComponent::~UPlayerRotationComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerRotationComponent, UPlayerRotationComponent::StaticClass, TEXT("UPlayerRotationComponent"), &Z_Registration_Info_UClass_UPlayerRotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerRotationComponent), 1104498654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_3927468705(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
