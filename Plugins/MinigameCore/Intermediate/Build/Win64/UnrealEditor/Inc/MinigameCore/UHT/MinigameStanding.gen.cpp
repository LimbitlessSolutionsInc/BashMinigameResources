// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/MinigameStanding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameStanding() {}
// Cross Module References
	MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinigameStanding;
class UScriptStruct* FMinigameStanding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinigameStanding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinigameStanding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinigameStanding, Z_Construct_UPackage__Script_MinigameCore(), TEXT("MinigameStanding"));
	}
	return Z_Registration_Info_UScriptStruct_MinigameStanding.OuterSingleton;
}
template<> MINIGAMECORE_API UScriptStruct* StaticStruct<FMinigameStanding>()
{
	return FMinigameStanding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinigameStanding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Place_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Place;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinigameStanding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MinigameStanding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinigameStanding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Standing" },
		{ "Comment", "// Number of the player in this standing\n" },
		{ "ModuleRelativePath", "Public/MinigameStanding.h" },
		{ "ToolTip", "Number of the player in this standing" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinigameStanding, Player), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place_MetaData[] = {
		{ "Category", "Standing" },
		{ "Comment", "// 1st place, 2nd place, etc. Multiple players can have the same place\n" },
		{ "ModuleRelativePath", "Public/MinigameStanding.h" },
		{ "ToolTip", "1st place, 2nd place, etc. Multiple players can have the same place" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place = { "Place", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinigameStanding, Place), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
		nullptr,
		&NewStructOps,
		"MinigameStanding",
		sizeof(FMinigameStanding),
		alignof(FMinigameStanding),
		Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinigameStanding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding()
	{
		if (!Z_Registration_Info_UScriptStruct_MinigameStanding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinigameStanding.InnerSingleton, Z_Construct_UScriptStruct_FMinigameStanding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinigameStanding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameStanding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameStanding_h_Statics::ScriptStructInfo[] = {
		{ FMinigameStanding::StaticStruct, Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewStructOps, TEXT("MinigameStanding"), &Z_Registration_Info_UScriptStruct_MinigameStanding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinigameStanding), 41450610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameStanding_h_2051849693(TEXT("/Script/MinigameCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameStanding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameStanding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
