// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/Managers/BluetoothManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBluetoothManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	void UBluetoothManager::StaticRegisterNativesUBluetoothManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBluetoothManager);
	UClass* Z_Construct_UClass_UBluetoothManager_NoRegister()
	{
		return UBluetoothManager::StaticClass();
	}
	struct Z_Construct_UClass_UBluetoothManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBluetoothManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManager_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/BluetoothManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBluetoothManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBluetoothManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluetoothManager_Statics::ClassParams = {
		&UBluetoothManager::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBluetoothManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBluetoothManager()
	{
		if (!Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton, Z_Construct_UClass_UBluetoothManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<UBluetoothManager>()
	{
		return UBluetoothManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBluetoothManager);
	UBluetoothManager::~UBluetoothManager() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBluetoothManager, UBluetoothManager::StaticClass, TEXT("UBluetoothManager"), &Z_Registration_Info_UClass_UBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluetoothManager), 2703961374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h_1198775423(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
