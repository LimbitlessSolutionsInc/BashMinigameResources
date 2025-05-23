// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBTWindows/Public/WindowsBluetoothManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsBluetoothManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
	LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsBluetoothManager();
	LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsBluetoothManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBTWindows();
	WINBT_API UClass* Z_Construct_UClass_UWinBLEManager_NoRegister();
// End Cross Module References
	void UWindowsBluetoothManager::StaticRegisterNativesUWindowsBluetoothManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsBluetoothManager);
	UClass* Z_Construct_UClass_UWindowsBluetoothManager_NoRegister()
	{
		return UWindowsBluetoothManager::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsBluetoothManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinBLEManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WinBLEManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsBluetoothManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBTWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsBluetoothManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WindowsBluetoothManager.h" },
		{ "ModuleRelativePath", "Public/WindowsBluetoothManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/WindowsBluetoothManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager = { "WinBLEManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsBluetoothManager, WinBLEManager), Z_Construct_UClass_UWinBLEManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBluetoothManager_NoRegister, (int32)VTABLE_OFFSET(UWindowsBluetoothManager, IBluetoothManager), false },  // 2703961374
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsBluetoothManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsBluetoothManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::ClassParams = {
		&UWindowsBluetoothManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsBluetoothManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsBluetoothManager()
	{
		if (!Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton, Z_Construct_UClass_UWindowsBluetoothManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton;
	}
	template<> LIMBITLESSBTWINDOWS_API UClass* StaticClass<UWindowsBluetoothManager>()
	{
		return UWindowsBluetoothManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsBluetoothManager);
	UWindowsBluetoothManager::~UWindowsBluetoothManager() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsBluetoothManager, UWindowsBluetoothManager::StaticClass, TEXT("UWindowsBluetoothManager"), &Z_Registration_Info_UClass_UWindowsBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsBluetoothManager), 1586219250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h_3920942500(TEXT("/Script/LimbitlessBTWindows"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
