// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/Blueprints/FCTweenBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary();
	FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary_NoRegister();
	FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EFCEase();
	UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References
	DEFINE_FUNCTION(UFCTweenBlueprintLibrary::execEnsureTweenCapacity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumFloatTweens);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumVectorTweens);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumVector2DTweens);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumQuatTweens);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFCTweenBlueprintLibrary::EnsureTweenCapacity(Z_Param_NumFloatTweens,Z_Param_NumVectorTweens,Z_Param_NumVector2DTweens,Z_Param_NumQuatTweens);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFCTweenBlueprintLibrary::execEaseWithParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_t);
		P_GET_ENUM(EFCEase,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFCTweenBlueprintLibrary::EaseWithParams(Z_Param_t,EFCEase(Z_Param_EaseType),Z_Param_Param1,Z_Param_Param2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFCTweenBlueprintLibrary::execEase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_t);
		P_GET_ENUM(EFCEase,Z_Param_EaseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFCTweenBlueprintLibrary::Ease(Z_Param_t,EFCEase(Z_Param_EaseType));
		P_NATIVE_END;
	}
	void UFCTweenBlueprintLibrary::StaticRegisterNativesUFCTweenBlueprintLibrary()
	{
		UClass* Class = UFCTweenBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Ease", &UFCTweenBlueprintLibrary::execEase },
			{ "EaseWithParams", &UFCTweenBlueprintLibrary::execEaseWithParams },
			{ "EnsureTweenCapacity", &UFCTweenBlueprintLibrary::execEnsureTweenCapacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics
	{
		struct FCTweenBlueprintLibrary_eventEase_Parms
		{
			float t;
			EFCEase EaseType;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEase_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEase_Parms, EaseType), Z_Construct_UEnum_FCTween_EFCEase, METADATA_PARAMS(nullptr, 0) }; // 623727477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_EaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_EaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tween" },
		{ "Comment", "/**\n\x09 * Ease with overriding parameters\n\x09 * @param t the percent complete, 0-1\n\x09 * @param EaseType The easing function to interpolate with\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBlueprintLibrary.h" },
		{ "ToolTip", "Ease with overriding parameters\n@param t the percent complete, 0-1\n@param EaseType The easing function to interpolate with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBlueprintLibrary, nullptr, "Ease", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::FCTweenBlueprintLibrary_eventEase_Parms), Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics
	{
		struct FCTweenBlueprintLibrary_eventEaseWithParams_Parms
		{
			float t;
			EFCEase EaseType;
			float Param1;
			float Param2;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEaseWithParams_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEaseWithParams_Parms, EaseType), Z_Construct_UEnum_FCTween_EFCEase, METADATA_PARAMS(nullptr, 0) }; // 623727477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEaseWithParams_Parms, Param1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEaseWithParams_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEaseWithParams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_EaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_EaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tween" },
		{ "Comment", "/**\n\x09 * Ease with overriding parameters that affect Elastic, Back, Stepped, and Smoothstep. 0 means no override\n\x09 * @param t the percent complete, 0-1\n\x09 * @param EaseType The easing function to interpolate with\n\x09 * @param Param1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n\x09 * @param Param2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n\x09 */" },
		{ "CPP_Default_Param1", "0.000000" },
		{ "CPP_Default_Param2", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBlueprintLibrary.h" },
		{ "ToolTip", "Ease with overriding parameters that affect Elastic, Back, Stepped, and Smoothstep. 0 means no override\n@param t the percent complete, 0-1\n@param EaseType The easing function to interpolate with\n@param Param1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n@param Param2 Elastic: Period (0.2) / Smoothstep: x1 (1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBlueprintLibrary, nullptr, "EaseWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::FCTweenBlueprintLibrary_eventEaseWithParams_Parms), Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics
	{
		struct FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms
		{
			int32 NumFloatTweens;
			int32 NumVectorTweens;
			int32 NumVector2DTweens;
			int32 NumQuatTweens;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumFloatTweens;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumVectorTweens;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumVector2DTweens;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumQuatTweens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumFloatTweens = { "NumFloatTweens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms, NumFloatTweens), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumVectorTweens = { "NumVectorTweens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms, NumVectorTweens), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumVector2DTweens = { "NumVector2DTweens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms, NumVector2DTweens), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumQuatTweens = { "NumQuatTweens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms, NumQuatTweens), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumFloatTweens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumVectorTweens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumVector2DTweens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::NewProp_NumQuatTweens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tween|Utility" },
		{ "Comment", "// Make sure there are at least these many of each type of tween available in memory. Call this only once, probably in a\n// GameInstance blueprint, if you need more initial memory reserved on game startup.\n" },
		{ "CPP_Default_NumFloatTweens", "75" },
		{ "CPP_Default_NumQuatTweens", "10" },
		{ "CPP_Default_NumVector2DTweens", "50" },
		{ "CPP_Default_NumVectorTweens", "50" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBlueprintLibrary.h" },
		{ "ToolTip", "Make sure there are at least these many of each type of tween available in memory. Call this only once, probably in a\nGameInstance blueprint, if you need more initial memory reserved on game startup." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCTweenBlueprintLibrary, nullptr, "EnsureTweenCapacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::FCTweenBlueprintLibrary_eventEnsureTweenCapacity_Parms), Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFCTweenBlueprintLibrary);
	UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary_NoRegister()
	{
		return UFCTweenBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCTweenBlueprintLibrary_Ease, "Ease" }, // 3511546292
		{ &Z_Construct_UFunction_UFCTweenBlueprintLibrary_EaseWithParams, "EaseWithParams" }, // 562066331
		{ &Z_Construct_UFunction_UFCTweenBlueprintLibrary_EnsureTweenCapacity, "EnsureTweenCapacity" }, // 2824426216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/FCTweenBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::ClassParams = {
		&UFCTweenBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFCTweenBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UFCTweenBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFCTweenBlueprintLibrary.OuterSingleton;
	}
	template<> FCTWEEN_API UClass* StaticClass<UFCTweenBlueprintLibrary>()
	{
		return UFCTweenBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenBlueprintLibrary);
	UFCTweenBlueprintLibrary::~UFCTweenBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenBlueprintLibrary, UFCTweenBlueprintLibrary::StaticClass, TEXT("UFCTweenBlueprintLibrary"), &Z_Registration_Info_UClass_UFCTweenBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenBlueprintLibrary), 1500274346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_1703727132(TEXT("/Script/FCTween"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
