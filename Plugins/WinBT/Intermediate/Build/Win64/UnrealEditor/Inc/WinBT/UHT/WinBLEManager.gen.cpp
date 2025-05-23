// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WinBT/Public/WinBLEManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinBLEManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WinBT();
	WINBT_API UClass* Z_Construct_UClass_UWinBLEManager();
	WINBT_API UClass* Z_Construct_UClass_UWinBLEManager_NoRegister();
// End Cross Module References
	void UWinBLEManager::StaticRegisterNativesUWinBLEManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWinBLEManager);
	UClass* Z_Construct_UClass_UWinBLEManager_NoRegister()
	{
		return UWinBLEManager::StaticClass();
	}
	struct Z_Construct_UClass_UWinBLEManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinBLEManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WinBT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinBLEManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ServiceUUIDs \"0000FE84-0000-1000-8000-00805F9B34FB\"\n// CharacteristicUUID \"0000FE84-0000-0001-8000-00805F9B34FB\"\n" },
		{ "IncludePath", "WinBLEManager.h" },
		{ "ModuleRelativePath", "Public/WinBLEManager.h" },
		{ "ToolTip", "ServiceUUIDs \"0000FE84-0000-1000-8000-00805F9B34FB\"\nCharacteristicUUID \"0000FE84-0000-0001-8000-00805F9B34FB\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinBLEManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinBLEManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWinBLEManager_Statics::ClassParams = {
		&UWinBLEManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWinBLEManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinBLEManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinBLEManager()
	{
		if (!Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton, Z_Construct_UClass_UWinBLEManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton;
	}
	template<> WINBT_API UClass* StaticClass<UWinBLEManager>()
	{
		return UWinBLEManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinBLEManager);
	UWinBLEManager::~UWinBLEManager() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_WinBT_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_WinBT_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWinBLEManager, UWinBLEManager::StaticClass, TEXT("UWinBLEManager"), &Z_Registration_Info_UClass_UWinBLEManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWinBLEManager), 277187884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_WinBT_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h_2755808621(TEXT("/Script/WinBT"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_WinBT_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_WinBT_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
