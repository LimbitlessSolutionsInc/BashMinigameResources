// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/BashLocalPlayer.h"
#include "Engine/Engine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashLocalPlayer() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer();
BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerData Function GetCoins ********************************************
struct Z_Construct_UFunction_UPlayerData_GetCoins_Statics
{
	struct PlayerData_eventGetCoins_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetCoins", Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PlayerData_eventGetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PlayerData_eventGetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetCoins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCoins();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetCoins **********************************************

// ********** Begin Class UPlayerData Function GetCustomizableInstance *****************************
struct Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics
{
	struct PlayerData_eventGetCustomizableInstance_Parms
	{
		UCustomizableObjectInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetCustomizableInstance_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetCustomizableInstance", Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PlayerData_eventGetCustomizableInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PlayerData_eventGetCustomizableInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetCustomizableInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetCustomizableInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomizableObjectInstance**)Z_Param__Result=P_THIS->GetCustomizableInstance();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetCustomizableInstance *******************************

// ********** Begin Class UPlayerData Function GetMobius *******************************************
struct Z_Construct_UFunction_UPlayerData_GetMobius_Statics
{
	struct PlayerData_eventGetMobius_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetMobius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetMobius", Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PlayerData_eventGetMobius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PlayerData_eventGetMobius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetMobius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetMobius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMobius();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetMobius *********************************************

// ********** Begin Class UPlayerData Function GetPlayerNum ****************************************
struct Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics
{
	struct PlayerData_eventGetPlayerNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetPlayerNum", Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PlayerData_eventGetPlayerNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PlayerData_eventGetPlayerNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetPlayerNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetPlayerNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetPlayerNum ******************************************

// ********** Begin Class UPlayerData Function GetTilePos ******************************************
struct Z_Construct_UFunction_UPlayerData_GetTilePos_Statics
{
	struct PlayerData_eventGetTilePos_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "Comment", "//Player Data getters/setters\n" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
		{ "ToolTip", "Player Data getters/setters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetTilePos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetTilePos", Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PlayerData_eventGetTilePos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PlayerData_eventGetTilePos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetTilePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetTilePos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTilePos();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetTilePos ********************************************

// ********** Begin Class UPlayerData Function SetCoins ********************************************
struct Z_Construct_UFunction_UPlayerData_SetCoins_Statics
{
	struct PlayerData_eventSetCoins_Parms
	{
		int32 newCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins = { "newCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetCoins_Parms, newCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetCoins", Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PlayerData_eventSetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PlayerData_eventSetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCoins(Z_Param_newCoins);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetCoins **********************************************

// ********** Begin Class UPlayerData Function SetMobius *******************************************
struct Z_Construct_UFunction_UPlayerData_SetMobius_Statics
{
	struct PlayerData_eventSetMobius_Parms
	{
		int32 newMobius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newMobius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius = { "newMobius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetMobius_Parms, newMobius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetMobius", Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PlayerData_eventSetMobius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PlayerData_eventSetMobius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetMobius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetMobius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newMobius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMobius(Z_Param_newMobius);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetMobius *********************************************

// ********** Begin Class UPlayerData Function SetTilePos ******************************************
struct Z_Construct_UFunction_UPlayerData_SetTilePos_Statics
{
	struct PlayerData_eventSetTilePos_Parms
	{
		int32 newTilePos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newTilePos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_newTilePos = { "newTilePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetTilePos_Parms, newTilePos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_newTilePos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetTilePos", Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PlayerData_eventSetTilePos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PlayerData_eventSetTilePos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetTilePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetTilePos)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newTilePos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTilePos(Z_Param_newTilePos);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetTilePos ********************************************

// ********** Begin Class UPlayerData **************************************************************
void UPlayerData::StaticRegisterNativesUPlayerData()
{
	UClass* Class = UPlayerData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoins", &UPlayerData::execGetCoins },
		{ "GetCustomizableInstance", &UPlayerData::execGetCustomizableInstance },
		{ "GetMobius", &UPlayerData::execGetMobius },
		{ "GetPlayerNum", &UPlayerData::execGetPlayerNum },
		{ "GetTilePos", &UPlayerData::execGetTilePos },
		{ "SetCoins", &UPlayerData::execSetCoins },
		{ "SetMobius", &UPlayerData::execSetMobius },
		{ "SetTilePos", &UPlayerData::execSetTilePos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerData;
UClass* UPlayerData::GetPrivateStaticClass()
{
	using TClass = UPlayerData;
	if (!Z_Registration_Info_UClass_UPlayerData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerData"),
			Z_Registration_Info_UClass_UPlayerData.InnerSingleton,
			StaticRegisterNativesUPlayerData,
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
	return Z_Registration_Info_UClass_UPlayerData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerData_NoRegister()
{
	return UPlayerData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePos_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobius_MetaData[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilePos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mobius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObjectInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerData_GetCoins, "GetCoins" }, // 1413395485
		{ &Z_Construct_UFunction_UPlayerData_GetCustomizableInstance, "GetCustomizableInstance" }, // 3165297211
		{ &Z_Construct_UFunction_UPlayerData_GetMobius, "GetMobius" }, // 4272605864
		{ &Z_Construct_UFunction_UPlayerData_GetPlayerNum, "GetPlayerNum" }, // 1121576403
		{ &Z_Construct_UFunction_UPlayerData_GetTilePos, "GetTilePos" }, // 884446194
		{ &Z_Construct_UFunction_UPlayerData_SetCoins, "SetCoins" }, // 1290350708
		{ &Z_Construct_UFunction_UPlayerData_SetMobius, "SetMobius" }, // 570519964
		{ &Z_Construct_UFunction_UPlayerData_SetTilePos, "SetTilePos" }, // 1040611693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder = { "PlayerOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, PlayerOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOrder_MetaData), NewProp_PlayerOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos = { "TilePos", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, TilePos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePos_MetaData), NewProp_TilePos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius = { "Mobius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, Mobius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobius_MetaData), NewProp_Mobius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_CustomizableObjectInstance = { "CustomizableObjectInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, CustomizableObjectInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObjectInstance_MetaData), NewProp_CustomizableObjectInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_PlayerOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_TilePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_Mobius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_CustomizableObjectInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerData()
{
	if (!Z_Registration_Info_UClass_UPlayerData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerData.OuterSingleton, Z_Construct_UClass_UPlayerData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerData.OuterSingleton;
}
UPlayerData::UPlayerData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerData);
UPlayerData::~UPlayerData() {}
// ********** End Class UPlayerData ****************************************************************

// ********** Begin Class UBashLocalPlayer Function GetPlayerData **********************************
struct Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics
{
	struct BashLocalPlayer_eventGetPlayerData_Parms
	{
		UPlayerData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashLocalPlayer_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashLocalPlayer, nullptr, "GetPlayerData", Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::BashLocalPlayer_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::BashLocalPlayer_eventGetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBashLocalPlayer::execGetPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerData**)Z_Param__Result=P_THIS->GetPlayerData();
	P_NATIVE_END;
}
// ********** End Class UBashLocalPlayer Function GetPlayerData ************************************

// ********** Begin Class UBashLocalPlayer *********************************************************
void UBashLocalPlayer::StaticRegisterNativesUBashLocalPlayer()
{
	UClass* Class = UBashLocalPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerData", &UBashLocalPlayer::execGetPlayerData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBashLocalPlayer;
UClass* UBashLocalPlayer::GetPrivateStaticClass()
{
	using TClass = UBashLocalPlayer;
	if (!Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashLocalPlayer"),
			Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton,
			StaticRegisterNativesUBashLocalPlayer,
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
	return Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister()
{
	return UBashLocalPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBashLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "BlueprintGetter", "GetPlayerData" },
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData, "GetPlayerData" }, // 4159252913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBashLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBashLocalPlayer, PlayerData), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBashLocalPlayer, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObject_MetaData), NewProp_CustomizableObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_CustomizableObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBashLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULimbitlessLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBashLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton, Z_Construct_UClass_UBashLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBashLocalPlayer);
UBashLocalPlayer::~UBashLocalPlayer() {}
// ********** End Class UBashLocalPlayer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerData, UPlayerData::StaticClass, TEXT("UPlayerData"), &Z_Registration_Info_UClass_UPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerData), 3309081850U) },
		{ Z_Construct_UClass_UBashLocalPlayer, UBashLocalPlayer::StaticClass, TEXT("UBashLocalPlayer"), &Z_Registration_Info_UClass_UBashLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBashLocalPlayer), 3532342674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_1003253594(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
