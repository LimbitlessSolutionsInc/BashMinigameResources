// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/MinigameCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(AMinigameCapture::execSetShakeIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShakeIntensity(Z_Param_Intensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinigameCapture::execGetShakeIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShakeIntensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinigameCapture::execGetCaptureNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCaptureNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinigameCapture::execApplyCameraShake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCameraShake(Z_Param_Intensity,Z_Param_Duration);
		P_NATIVE_END;
	}
	void AMinigameCapture::StaticRegisterNativesAMinigameCapture()
	{
		UClass* Class = AMinigameCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCameraShake", &AMinigameCapture::execApplyCameraShake },
			{ "GetCaptureNumber", &AMinigameCapture::execGetCaptureNumber },
			{ "GetShakeIntensity", &AMinigameCapture::execGetShakeIntensity },
			{ "SetShakeIntensity", &AMinigameCapture::execSetShakeIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics
	{
		struct MinigameCapture_eventApplyCameraShake_Parms
		{
			float Intensity;
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCapture_eventApplyCameraShake_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCapture_eventApplyCameraShake_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "ApplyCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::MinigameCapture_eventApplyCameraShake_Parms), Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics
	{
		struct MinigameCapture_eventGetCaptureNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCapture_eventGetCaptureNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture Info" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "GetCaptureNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::MinigameCapture_eventGetCaptureNumber_Parms), Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics
	{
		struct MinigameCapture_eventGetShakeIntensity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCapture_eventGetShakeIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "GetShakeIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::MinigameCapture_eventGetShakeIntensity_Parms), Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics
	{
		struct MinigameCapture_eventSetShakeIntensity_Parms
		{
			float Intensity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameCapture_eventSetShakeIntensity_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "SetShakeIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::MinigameCapture_eventSetShakeIntensity_Parms), Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinigameCapture);
	UClass* Z_Construct_UClass_AMinigameCapture_NoRegister()
	{
		return AMinigameCapture::StaticClass();
	}
	struct Z_Construct_UClass_AMinigameCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CaptureNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinigameCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinigameCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake, "ApplyCameraShake" }, // 3262078782
		{ &Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber, "GetCaptureNumber" }, // 3106608094
		{ &Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity, "GetShakeIntensity" }, // 3027764574
		{ &Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity, "SetShakeIntensity" }, // 2335892062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigameCapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MinigameCapture.h" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "Category", "Capture Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigameCapture, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber_MetaData[] = {
		{ "Category", "Capture Info" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber = { "CaptureNumber", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigameCapture, CaptureNumber), METADATA_PARAMS(Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinigameCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameCapture_Statics::ClassParams = {
		&AMinigameCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinigameCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinigameCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinigameCapture()
	{
		if (!Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton, Z_Construct_UClass_AMinigameCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<AMinigameCapture>()
	{
		return AMinigameCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameCapture);
	AMinigameCapture::~AMinigameCapture() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameCapture, AMinigameCapture::StaticClass, TEXT("AMinigameCapture"), &Z_Registration_Info_UClass_AMinigameCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameCapture), 3718180242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_2732719640(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
