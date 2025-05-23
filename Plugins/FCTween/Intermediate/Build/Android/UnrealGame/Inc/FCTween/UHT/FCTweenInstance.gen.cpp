// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/FCTweenInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenInstance() {}
// Cross Module References
	FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EDelayState();
	UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDelayState;
	static UEnum* EDelayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDelayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDelayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FCTween_EDelayState, Z_Construct_UPackage__Script_FCTween(), TEXT("EDelayState"));
		}
		return Z_Registration_Info_UEnum_EDelayState.OuterSingleton;
	}
	template<> FCTWEEN_API UEnum* StaticEnum<EDelayState>()
	{
		return EDelayState_StaticEnum();
	}
	struct Z_Construct_UEnum_FCTween_EDelayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FCTween_EDelayState_Statics::Enumerators[] = {
		{ "EDelayState::None", (int64)EDelayState::None },
		{ "EDelayState::Start", (int64)EDelayState::Start },
		{ "EDelayState::Loop", (int64)EDelayState::Loop },
		{ "EDelayState::Yoyo", (int64)EDelayState::Yoyo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FCTween_EDelayState_Statics::Enum_MetaDataParams[] = {
		{ "Loop.Name", "EDelayState::Loop" },
		{ "ModuleRelativePath", "Public/FCTweenInstance.h" },
		{ "None.Name", "EDelayState::None" },
		{ "Start.Name", "EDelayState::Start" },
		{ "Yoyo.Name", "EDelayState::Yoyo" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FCTween_EDelayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FCTween,
		nullptr,
		"EDelayState",
		"EDelayState",
		Z_Construct_UEnum_FCTween_EDelayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EDelayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FCTween_EDelayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EDelayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FCTween_EDelayState()
	{
		if (!Z_Registration_Info_UEnum_EDelayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDelayState.InnerSingleton, Z_Construct_UEnum_FCTween_EDelayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDelayState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics::EnumInfo[] = {
		{ EDelayState_StaticEnum, TEXT("EDelayState"), &Z_Registration_Info_UEnum_EDelayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3392434086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenInstance_h_1124861160(TEXT("/Script/FCTween"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
