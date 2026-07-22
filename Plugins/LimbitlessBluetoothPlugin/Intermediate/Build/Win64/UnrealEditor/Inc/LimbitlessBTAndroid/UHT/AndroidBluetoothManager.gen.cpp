// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidBluetoothManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidBluetoothManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
LIMBITLESSBTANDROID_API UClass* Z_Construct_UClass_UAndroidBluetoothManager();
LIMBITLESSBTANDROID_API UClass* Z_Construct_UClass_UAndroidBluetoothManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBTAndroid();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidBluetoothManager *************************************************
void UAndroidBluetoothManager::StaticRegisterNativesUAndroidBluetoothManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidBluetoothManager;
UClass* UAndroidBluetoothManager::GetPrivateStaticClass()
{
	using TClass = UAndroidBluetoothManager;
	if (!Z_Registration_Info_UClass_UAndroidBluetoothManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidBluetoothManager"),
			Z_Registration_Info_UClass_UAndroidBluetoothManager.InnerSingleton,
			StaticRegisterNativesUAndroidBluetoothManager,
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
	return Z_Registration_Info_UClass_UAndroidBluetoothManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidBluetoothManager_NoRegister()
{
	return UAndroidBluetoothManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidBluetoothManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AndroidBluetoothManager.h" },
		{ "ModuleRelativePath", "Public/AndroidBluetoothManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidBluetoothManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidBluetoothManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBTAndroid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidBluetoothManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAndroidBluetoothManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBluetoothManager_NoRegister, (int32)VTABLE_OFFSET(UAndroidBluetoothManager, IBluetoothManager), false },  // 390813429
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidBluetoothManager_Statics::ClassParams = {
	&UAndroidBluetoothManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidBluetoothManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidBluetoothManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidBluetoothManager()
{
	if (!Z_Registration_Info_UClass_UAndroidBluetoothManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidBluetoothManager.OuterSingleton, Z_Construct_UClass_UAndroidBluetoothManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidBluetoothManager.OuterSingleton;
}
UAndroidBluetoothManager::UAndroidBluetoothManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidBluetoothManager);
UAndroidBluetoothManager::~UAndroidBluetoothManager() {}
// ********** End Class UAndroidBluetoothManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidBluetoothManager_h__Script_LimbitlessBTAndroid_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidBluetoothManager, UAndroidBluetoothManager::StaticClass, TEXT("UAndroidBluetoothManager"), &Z_Registration_Info_UClass_UAndroidBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidBluetoothManager), 3542261410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidBluetoothManager_h__Script_LimbitlessBTAndroid_562492177(TEXT("/Script/LimbitlessBTAndroid"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidBluetoothManager_h__Script_LimbitlessBTAndroid_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidBluetoothManager_h__Script_LimbitlessBTAndroid_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
