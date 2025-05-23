// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Widgets/CircularWipeWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularWipeWidget() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget();
	BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister();
	BASHCORE_API UFunction* Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature();
	BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCircleWipeParams();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BashCore, nullptr, "OnWipeFilledSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CircleWipeParams;
class UScriptStruct* FCircleWipeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CircleWipeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CircleWipeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircleWipeParams, Z_Construct_UPackage__Script_BashCore(), TEXT("CircleWipeParams"));
	}
	return Z_Registration_Info_UScriptStruct_CircleWipeParams.OuterSingleton;
}
template<> BASHCORE_API UScriptStruct* StaticStruct<FCircleWipeParams>()
{
	return FCircleWipeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCircleWipeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onWipeFilled_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onWipeFilled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onWipeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onWipeComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleWipeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircleWipeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled_MetaData[] = {
		{ "Category", "Wipe Params" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled = { "onWipeFilled", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCircleWipeParams, onWipeFilled), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled_MetaData)) }; // 472135094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete_MetaData[] = {
		{ "Category", "Wipe Params" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete = { "onWipeComplete", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCircleWipeParams, onWipeComplete), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete_MetaData)) }; // 472135094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
		nullptr,
		&NewStructOps,
		"CircleWipeParams",
		sizeof(FCircleWipeParams),
		alignof(FCircleWipeParams),
		Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircleWipeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CircleWipeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CircleWipeParams.InnerSingleton, Z_Construct_UScriptStruct_FCircleWipeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CircleWipeParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UCircularWipeWidget::execCallDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDelegate(FOnWipeFilledSignature(Z_Param_delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCircularWipeWidget::execPlayFullWipe)
	{
		P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFullWipe(Z_Param_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCircularWipeWidget::execFadeFromBlack)
	{
		P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeFromBlack(Z_Param_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCircularWipeWidget::execStartWipe)
	{
		P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWipe(Z_Param_params);
		P_NATIVE_END;
	}
	struct CircularWipeWidget_eventEndWipeVisuals_Parms
	{
		FCircleWipeParams params;
	};
	struct CircularWipeWidget_eventPlayFullWipeVisuals_Parms
	{
		FCircleWipeParams params;
	};
	struct CircularWipeWidget_eventStartWipeVisuals_Parms
	{
		FCircleWipeParams params;
	};
	static FName NAME_UCircularWipeWidget_EndWipeVisuals = FName(TEXT("EndWipeVisuals"));
	void UCircularWipeWidget::EndWipeVisuals(FCircleWipeParams params)
	{
		CircularWipeWidget_eventEndWipeVisuals_Parms Parms;
		Parms.params=params;
		ProcessEvent(FindFunctionChecked(NAME_UCircularWipeWidget_EndWipeVisuals),&Parms);
	}
	static FName NAME_UCircularWipeWidget_PlayFullWipeVisuals = FName(TEXT("PlayFullWipeVisuals"));
	void UCircularWipeWidget::PlayFullWipeVisuals(FCircleWipeParams params)
	{
		CircularWipeWidget_eventPlayFullWipeVisuals_Parms Parms;
		Parms.params=params;
		ProcessEvent(FindFunctionChecked(NAME_UCircularWipeWidget_PlayFullWipeVisuals),&Parms);
	}
	static FName NAME_UCircularWipeWidget_StartWipeVisuals = FName(TEXT("StartWipeVisuals"));
	void UCircularWipeWidget::StartWipeVisuals(FCircleWipeParams params)
	{
		CircularWipeWidget_eventStartWipeVisuals_Parms Parms;
		Parms.params=params;
		ProcessEvent(FindFunctionChecked(NAME_UCircularWipeWidget_StartWipeVisuals),&Parms);
	}
	void UCircularWipeWidget::StaticRegisterNativesUCircularWipeWidget()
	{
		UClass* Class = UCircularWipeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallDelegate", &UCircularWipeWidget::execCallDelegate },
			{ "FadeFromBlack", &UCircularWipeWidget::execFadeFromBlack },
			{ "PlayFullWipe", &UCircularWipeWidget::execPlayFullWipe },
			{ "StartWipe", &UCircularWipeWidget::execStartWipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics
	{
		struct CircularWipeWidget_eventCallDelegate_Parms
		{
			FScriptDelegate delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventCallDelegate_Parms, delegate), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 472135094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::NewProp_delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "CallDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::CircularWipeWidget_eventCallDelegate_Parms), Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_CallDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventEndWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "EndWipeVisuals", nullptr, nullptr, sizeof(CircularWipeWidget_eventEndWipeVisuals_Parms), Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics
	{
		struct CircularWipeWidget_eventFadeFromBlack_Parms
		{
			FCircleWipeParams params;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventFadeFromBlack_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "FadeFromBlack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::CircularWipeWidget_eventFadeFromBlack_Parms), Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics
	{
		struct CircularWipeWidget_eventPlayFullWipe_Parms
		{
			FCircleWipeParams params;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventPlayFullWipe_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "PlayFullWipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::CircularWipeWidget_eventPlayFullWipe_Parms), Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventPlayFullWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "PlayFullWipeVisuals", nullptr, nullptr, sizeof(CircularWipeWidget_eventPlayFullWipeVisuals_Parms), Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics
	{
		struct CircularWipeWidget_eventStartWipe_Parms
		{
			FCircleWipeParams params;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventStartWipe_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "StartWipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::CircularWipeWidget_eventStartWipe_Parms), Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_StartWipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CircularWipeWidget_eventStartWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(nullptr, 0) }; // 1004512285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::NewProp_params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "StartWipeVisuals", nullptr, nullptr, sizeof(CircularWipeWidget_eventStartWipeVisuals_Parms), Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircularWipeWidget);
	UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister()
	{
		return UCircularWipeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCircularWipeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircularWipeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCircularWipeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularWipeWidget_CallDelegate, "CallDelegate" }, // 4072707982
		{ &Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals, "EndWipeVisuals" }, // 28554715
		{ &Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack, "FadeFromBlack" }, // 1973650195
		{ &Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe, "PlayFullWipe" }, // 2144360258
		{ &Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals, "PlayFullWipeVisuals" }, // 1667859167
		{ &Z_Construct_UFunction_UCircularWipeWidget_StartWipe, "StartWipe" }, // 2890318628
		{ &Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals, "StartWipeVisuals" }, // 2183783367
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularWipeWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CircularWipeWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircularWipeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularWipeWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircularWipeWidget_Statics::ClassParams = {
		&UCircularWipeWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircularWipeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularWipeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircularWipeWidget()
	{
		if (!Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton, Z_Construct_UClass_UCircularWipeWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UCircularWipeWidget>()
	{
		return UCircularWipeWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularWipeWidget);
	UCircularWipeWidget::~UCircularWipeWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ScriptStructInfo[] = {
		{ FCircleWipeParams::StaticStruct, Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewStructOps, TEXT("CircleWipeParams"), &Z_Registration_Info_UScriptStruct_CircleWipeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircleWipeParams), 1004512285U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCircularWipeWidget, UCircularWipeWidget::StaticClass, TEXT("UCircularWipeWidget"), &Z_Registration_Info_UClass_UCircularWipeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircularWipeWidget), 2939169105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_2421191170(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
