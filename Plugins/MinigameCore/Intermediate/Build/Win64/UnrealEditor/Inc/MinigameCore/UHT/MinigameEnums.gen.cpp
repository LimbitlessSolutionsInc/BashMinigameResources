// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/MinigameEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameEnums() {}
// Cross Module References
	MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_EMinigameType();
	MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_ESplitBy();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinigameType;
	static UEnum* EMinigameType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMinigameType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMinigameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinigameCore_EMinigameType, Z_Construct_UPackage__Script_MinigameCore(), TEXT("EMinigameType"));
		}
		return Z_Registration_Info_UEnum_EMinigameType.OuterSingleton;
	}
	template<> MINIGAMECORE_API UEnum* StaticEnum<EMinigameType>()
	{
		return EMinigameType_StaticEnum();
	}
	struct Z_Construct_UEnum_MinigameCore_EMinigameType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enumerators[] = {
		{ "EMinigameType::MT_FFA", (int64)EMinigameType::MT_FFA },
		{ "EMinigameType::MT_3v1", (int64)EMinigameType::MT_3v1 },
		{ "EMinigameType::MT_2v2", (int64)EMinigameType::MT_2v2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MinigameEnums.h" },
		{ "MT_2v2.DisplayName", "2v2" },
		{ "MT_2v2.Name", "EMinigameType::MT_2v2" },
		{ "MT_3v1.DisplayName", "3v1" },
		{ "MT_3v1.Name", "EMinigameType::MT_3v1" },
		{ "MT_FFA.DisplayName", "Free for All" },
		{ "MT_FFA.Name", "EMinigameType::MT_FFA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinigameCore,
		nullptr,
		"EMinigameType",
		"EMinigameType",
		Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinigameCore_EMinigameType()
	{
		if (!Z_Registration_Info_UEnum_EMinigameType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinigameType.InnerSingleton, Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMinigameType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplitBy;
	static UEnum* ESplitBy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplitBy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplitBy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinigameCore_ESplitBy, Z_Construct_UPackage__Script_MinigameCore(), TEXT("ESplitBy"));
		}
		return Z_Registration_Info_UEnum_ESplitBy.OuterSingleton;
	}
	template<> MINIGAMECORE_API UEnum* StaticEnum<ESplitBy>()
	{
		return ESplitBy_StaticEnum();
	}
	struct Z_Construct_UEnum_MinigameCore_ESplitBy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enumerators[] = {
		{ "ESplitBy::PLAYERS", (int64)ESplitBy::PLAYERS },
		{ "ESplitBy::TEAMS", (int64)ESplitBy::TEAMS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MinigameEnums.h" },
		{ "PLAYERS.DisplayName", "Players" },
		{ "PLAYERS.Name", "ESplitBy::PLAYERS" },
		{ "TEAMS.DisplayName", "Teams" },
		{ "TEAMS.Name", "ESplitBy::TEAMS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MinigameCore,
		nullptr,
		"ESplitBy",
		"ESplitBy",
		Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MinigameCore_ESplitBy()
	{
		if (!Z_Registration_Info_UEnum_ESplitBy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplitBy.InnerSingleton, Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplitBy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameEnums_h_Statics::EnumInfo[] = {
		{ EMinigameType_StaticEnum, TEXT("EMinigameType"), &Z_Registration_Info_UEnum_EMinigameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1286244663U) },
		{ ESplitBy_StaticEnum, TEXT("ESplitBy"), &Z_Registration_Info_UEnum_ESplitBy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 832254999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameEnums_h_3313579984(TEXT("/Script/MinigameCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
