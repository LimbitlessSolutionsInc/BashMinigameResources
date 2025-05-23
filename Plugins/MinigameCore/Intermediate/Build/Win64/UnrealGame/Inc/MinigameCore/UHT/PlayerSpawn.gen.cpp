// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Player/PlayerSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn();
	MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	void APlayerSpawn::StaticRegisterNativesAPlayerSpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerSpawn);
	UClass* Z_Construct_UClass_APlayerSpawn_NoRegister()
	{
		return APlayerSpawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayersRequired_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPlayersRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOnAnyPlayerCount_MetaData[];
#endif
		static void NewProp_bUseOnAnyPlayerCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOnAnyPlayerCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PlayerSpawn.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Team associated with this player spawn\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "Team associated with this player spawn" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerSpawn, Team), METADATA_PARAMS(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "// The position of this player spawn in the team\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "The position of this player spawn in the team" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerSpawn, Position), METADATA_PARAMS(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of players that must be playing to consider this player spawn\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "The number of players that must be playing to consider this player spawn" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired = { "NumPlayersRequired", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerSpawn, NumPlayersRequired), METADATA_PARAMS(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
	};
#endif
	void Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_SetBit(void* Obj)
	{
		((APlayerSpawn*)Obj)->bUseOnAnyPlayerCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount = { "bUseOnAnyPlayerCount", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerSpawn), &Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerSpawn_Statics::ClassParams = {
		&APlayerSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerSpawn()
	{
		if (!Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton, Z_Construct_UClass_APlayerSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<APlayerSpawn>()
	{
		return APlayerSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSpawn);
	APlayerSpawn::~APlayerSpawn() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerSpawn, APlayerSpawn::StaticClass, TEXT("APlayerSpawn"), &Z_Registration_Info_UClass_APlayerSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerSpawn), 3712772728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_218609772(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
