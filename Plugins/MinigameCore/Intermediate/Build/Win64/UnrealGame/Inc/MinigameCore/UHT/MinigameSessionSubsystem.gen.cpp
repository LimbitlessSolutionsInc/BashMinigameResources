// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/MinigameSessionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "MinigameCore/Public/MinigameStanding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameSessionSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature();
	MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics
	{
		struct _Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "GetMinigamePlayerCountSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms), Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetMinigameReturnLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UWorld>*)Z_Param__Result=P_THIS->GetMinigameReturnLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameSessionSubsystem::execSetMinigameReturnLevel)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinigameReturnLevel(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetPlayerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameSessionSubsystem::execSetPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCount(Z_Param_PlayerCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetMinigameResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMinigameStanding>*)Z_Param__Result=P_THIS->GetMinigameResults();
		P_NATIVE_END;
	}
	void UMinigameSessionSubsystem::StaticRegisterNativesUMinigameSessionSubsystem()
	{
		UClass* Class = UMinigameSessionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMinigameResults", &UMinigameSessionSubsystem::execGetMinigameResults },
			{ "GetMinigameReturnLevel", &UMinigameSessionSubsystem::execGetMinigameReturnLevel },
			{ "GetPlayerCount", &UMinigameSessionSubsystem::execGetPlayerCount },
			{ "SetMinigameReturnLevel", &UMinigameSessionSubsystem::execSetMinigameReturnLevel },
			{ "SetPlayerCount", &UMinigameSessionSubsystem::execSetPlayerCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics
	{
		struct MinigameSessionSubsystem_eventGetMinigameResults_Parms
		{
			TArray<FMinigameStanding> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMinigameStanding, METADATA_PARAMS(nullptr, 0) }; // 41450610
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetMinigameResults_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 41450610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minigame Output" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetMinigameResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::MinigameSessionSubsystem_eventGetMinigameResults_Parms), Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics
	{
		struct MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms
		{
			TSoftObjectPtr<UWorld> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetMinigameReturnLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms), Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics
	{
		struct MinigameSessionSubsystem_eventGetPlayerCount_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::MinigameSessionSubsystem_eventGetPlayerCount_Parms), Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics
	{
		struct MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms
		{
			TSoftObjectPtr<UWorld> Level;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "Comment", "// Sets the level to return to after the minigame\n" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
		{ "ToolTip", "Sets the level to return to after the minigame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "SetMinigameReturnLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms), Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics
	{
		struct MinigameSessionSubsystem_eventSetPlayerCount_Parms
		{
			int32 PlayerCount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigameSessionSubsystem_eventSetPlayerCount_Parms, PlayerCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::NewProp_PlayerCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "SetPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::MinigameSessionSubsystem_eventSetPlayerCount_Parms), Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinigameSessionSubsystem);
	UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister()
	{
		return UMinigameSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMinigameSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinigameSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinigameSessionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults, "GetMinigameResults" }, // 1151780828
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel, "GetMinigameReturnLevel" }, // 655492792
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount, "GetPlayerCount" }, // 595650291
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel, "SetMinigameReturnLevel" }, // 3307953341
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount, "SetPlayerCount" }, // 522044174
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinigameSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MinigameSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinigameSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameSessionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameSessionSubsystem_Statics::ClassParams = {
		&UMinigameSessionSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMinigameSessionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameSessionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinigameSessionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton, Z_Construct_UClass_UMinigameSessionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UMinigameSessionSubsystem>()
	{
		return UMinigameSessionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameSessionSubsystem);
	UMinigameSessionSubsystem::~UMinigameSessionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameSessionSubsystem, UMinigameSessionSubsystem::StaticClass, TEXT("UMinigameSessionSubsystem"), &Z_Registration_Info_UClass_UMinigameSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameSessionSubsystem), 1635822687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_909219500(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
