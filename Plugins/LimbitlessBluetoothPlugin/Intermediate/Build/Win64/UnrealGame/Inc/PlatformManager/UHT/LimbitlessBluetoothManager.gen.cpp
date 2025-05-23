// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformManager/Public/LimbitlessBluetoothManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbitlessBluetoothManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
	PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager();
	PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlatformManager();
// End Cross Module References
	void ULimbitlessBluetoothManager::StaticRegisterNativesULimbitlessBluetoothManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULimbitlessBluetoothManager);
	UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister()
	{
		return ULimbitlessBluetoothManager::StaticClass();
	}
	struct Z_Construct_UClass_ULimbitlessBluetoothManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BLEManager_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_BLEManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LimbitlessBluetoothManager.h" },
		{ "ModuleRelativePath", "Public/LimbitlessBluetoothManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/LimbitlessBluetoothManager.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager = { "BLEManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULimbitlessBluetoothManager, BLEManager), Z_Construct_UClass_UBluetoothManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBluetoothManager_NoRegister, (int32)VTABLE_OFFSET(ULimbitlessBluetoothManager, IBluetoothManager), false },  // 2703961374
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbitlessBluetoothManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::ClassParams = {
		&ULimbitlessBluetoothManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULimbitlessBluetoothManager()
	{
		if (!Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton, Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton;
	}
	template<> PLATFORMMANAGER_API UClass* StaticClass<ULimbitlessBluetoothManager>()
	{
		return ULimbitlessBluetoothManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULimbitlessBluetoothManager);
	ULimbitlessBluetoothManager::~ULimbitlessBluetoothManager() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULimbitlessBluetoothManager, ULimbitlessBluetoothManager::StaticClass, TEXT("ULimbitlessBluetoothManager"), &Z_Registration_Info_UClass_ULimbitlessBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbitlessBluetoothManager), 782500640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h_1147587819(TEXT("/Script/PlatformManager"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
