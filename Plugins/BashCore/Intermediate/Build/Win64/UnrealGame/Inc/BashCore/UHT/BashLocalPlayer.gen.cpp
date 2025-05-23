// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Player/BashLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBashLocalPlayer() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer();
	BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();
	BASHCORE_API UClass* Z_Construct_UClass_UPlayerData();
	BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerData::execSetMobius)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newMobius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMobius(Z_Param_newMobius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execSetCoins)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newCoins);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoins(Z_Param_newCoins);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execSetTilePos)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newTilePos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTilePos(Z_Param_newTilePos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execGetPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execGetMobius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMobius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execGetCoins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCoins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerData::execGetTilePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTilePos();
		P_NATIVE_END;
	}
	void UPlayerData::StaticRegisterNativesUPlayerData()
	{
		UClass* Class = UPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCoins", &UPlayerData::execGetCoins },
			{ "GetMobius", &UPlayerData::execGetMobius },
			{ "GetPlayerNum", &UPlayerData::execGetPlayerNum },
			{ "GetTilePos", &UPlayerData::execGetTilePos },
			{ "SetCoins", &UPlayerData::execSetCoins },
			{ "SetMobius", &UPlayerData::execSetMobius },
			{ "SetTilePos", &UPlayerData::execSetTilePos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerData_GetCoins_Statics
	{
		struct PlayerData_eventGetCoins_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetCoins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PlayerData_eventGetCoins_Parms), Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_GetCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_GetMobius_Statics
	{
		struct PlayerData_eventGetMobius_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventGetMobius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetMobius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PlayerData_eventGetMobius_Parms), Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_GetMobius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics
	{
		struct PlayerData_eventGetPlayerNum_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetPlayerNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PlayerData_eventGetPlayerNum_Parms), Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_GetPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_GetTilePos_Statics
	{
		struct PlayerData_eventGetTilePos_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventGetTilePos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "Comment", "//Player Data getters/setters\n" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
		{ "ToolTip", "Player Data getters/setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetTilePos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PlayerData_eventGetTilePos_Parms), Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_GetTilePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_SetCoins_Statics
	{
		struct PlayerData_eventSetCoins_Parms
		{
			int32 newCoins;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newCoins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins = { "newCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventSetCoins_Parms, newCoins), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetCoins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PlayerData_eventSetCoins_Parms), Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_SetCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_SetMobius_Statics
	{
		struct PlayerData_eventSetMobius_Parms
		{
			int32 newMobius;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newMobius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius = { "newMobius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventSetMobius_Parms, newMobius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetMobius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PlayerData_eventSetMobius_Parms), Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_SetMobius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerData_SetTilePos_Statics
	{
		struct PlayerData_eventSetTilePos_Parms
		{
			int32 newTilePos;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newTilePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_newTilePos = { "newTilePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerData_eventSetTilePos_Parms, newTilePos), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_newTilePos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetTilePos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PlayerData_eventSetTilePos_Parms), Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerData_SetTilePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerData);
	UClass* Z_Construct_UClass_UPlayerData_NoRegister()
	{
		return UPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePos_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilePos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Coins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobius_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Mobius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerData_GetCoins, "GetCoins" }, // 2020365329
		{ &Z_Construct_UFunction_UPlayerData_GetMobius, "GetMobius" }, // 1356794072
		{ &Z_Construct_UFunction_UPlayerData_GetPlayerNum, "GetPlayerNum" }, // 749425687
		{ &Z_Construct_UFunction_UPlayerData_GetTilePos, "GetTilePos" }, // 268277266
		{ &Z_Construct_UFunction_UPlayerData_SetCoins, "SetCoins" }, // 971461214
		{ &Z_Construct_UFunction_UPlayerData_SetMobius, "SetMobius" }, // 242905957
		{ &Z_Construct_UFunction_UPlayerData_SetTilePos, "SetTilePos" }, // 150576598
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder = { "PlayerOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerData, PlayerOrder), METADATA_PARAMS(Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos = { "TilePos", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerData, TilePos), METADATA_PARAMS(Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerData, Coins), METADATA_PARAMS(Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius = { "Mobius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerData, Mobius), METADATA_PARAMS(Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerData_Statics::ClassParams = {
		&UPlayerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerData()
	{
		if (!Z_Registration_Info_UClass_UPlayerData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerData.OuterSingleton, Z_Construct_UClass_UPlayerData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerData.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UPlayerData>()
	{
		return UPlayerData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerData);
	UPlayerData::~UPlayerData() {}
	DEFINE_FUNCTION(UBashLocalPlayer::execGetPlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerData**)Z_Param__Result=P_THIS->GetPlayerData();
		P_NATIVE_END;
	}
	void UBashLocalPlayer::StaticRegisterNativesUBashLocalPlayer()
	{
		UClass* Class = UBashLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerData", &UBashLocalPlayer::execGetPlayerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics
	{
		struct BashLocalPlayer_eventGetPlayerData_Parms
		{
			UPlayerData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BashLocalPlayer_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBashLocalPlayer, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::BashLocalPlayer_eventGetPlayerData_Parms), Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBashLocalPlayer);
	UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister()
	{
		return UBashLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBashLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBashLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULimbitlessLocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBashLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData, "GetPlayerData" }, // 1155461046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData_MetaData[] = {
		{ "BlueprintGetter", "GetPlayerData" },
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBashLocalPlayer, PlayerData), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBashLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBashLocalPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBashLocalPlayer_Statics::ClassParams = {
		&UBashLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBashLocalPlayer()
	{
		if (!Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton, Z_Construct_UClass_UBashLocalPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UBashLocalPlayer>()
	{
		return UBashLocalPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBashLocalPlayer);
	UBashLocalPlayer::~UBashLocalPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerData, UPlayerData::StaticClass, TEXT("UPlayerData"), &Z_Registration_Info_UClass_UPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerData), 649092226U) },
		{ Z_Construct_UClass_UBashLocalPlayer, UBashLocalPlayer::StaticClass, TEXT("UBashLocalPlayer"), &Z_Registration_Info_UClass_UBashLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBashLocalPlayer), 3333085517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_2973619256(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
