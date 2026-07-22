// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidFlexController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidFlexController() {}

// ********** Begin Cross Module References ********************************************************
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController();
LIMBITLESSBTANDROID_API UClass* Z_Construct_UClass_UAndroidFlexController();
LIMBITLESSBTANDROID_API UClass* Z_Construct_UClass_UAndroidFlexController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBTAndroid();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidFlexController ***************************************************
void UAndroidFlexController::StaticRegisterNativesUAndroidFlexController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidFlexController;
UClass* UAndroidFlexController::GetPrivateStaticClass()
{
	using TClass = UAndroidFlexController;
	if (!Z_Registration_Info_UClass_UAndroidFlexController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidFlexController"),
			Z_Registration_Info_UClass_UAndroidFlexController.InnerSingleton,
			StaticRegisterNativesUAndroidFlexController,
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
	return Z_Registration_Info_UClass_UAndroidFlexController.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidFlexController_NoRegister()
{
	return UAndroidFlexController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidFlexController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AndroidFlexController.h" },
		{ "ModuleRelativePath", "Public/AndroidFlexController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidFlexController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidFlexController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlexController,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBTAndroid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFlexController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidFlexController_Statics::ClassParams = {
	&UAndroidFlexController::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFlexController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidFlexController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidFlexController()
{
	if (!Z_Registration_Info_UClass_UAndroidFlexController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidFlexController.OuterSingleton, Z_Construct_UClass_UAndroidFlexController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidFlexController.OuterSingleton;
}
UAndroidFlexController::UAndroidFlexController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidFlexController);
UAndroidFlexController::~UAndroidFlexController() {}
// ********** End Class UAndroidFlexController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidFlexController_h__Script_LimbitlessBTAndroid_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidFlexController, UAndroidFlexController::StaticClass, TEXT("UAndroidFlexController"), &Z_Registration_Info_UClass_UAndroidFlexController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidFlexController), 3444503872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidFlexController_h__Script_LimbitlessBTAndroid_1529376508(TEXT("/Script/LimbitlessBTAndroid"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidFlexController_h__Script_LimbitlessBTAndroid_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTAndroid_Public_AndroidFlexController_h__Script_LimbitlessBTAndroid_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
