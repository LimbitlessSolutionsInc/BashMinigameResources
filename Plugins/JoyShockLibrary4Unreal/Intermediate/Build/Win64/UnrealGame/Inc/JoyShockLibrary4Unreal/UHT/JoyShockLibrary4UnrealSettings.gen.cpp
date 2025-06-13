// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyShockLibrary4UnrealSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJoyShockLibrary4UnrealSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
JOYSHOCKLIBRARY4UNREAL_API UClass* Z_Construct_UClass_UJoyShockLibrary4UnrealSettings();
JOYSHOCKLIBRARY4UNREAL_API UClass* Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_JoyShockLibrary4Unreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJoyShockLibrary4UnrealSettings ******************************************
void UJoyShockLibrary4UnrealSettings::StaticRegisterNativesUJoyShockLibrary4UnrealSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings;
UClass* UJoyShockLibrary4UnrealSettings::GetPrivateStaticClass()
{
	using TClass = UJoyShockLibrary4UnrealSettings;
	if (!Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("JoyShockLibrary4UnrealSettings"),
			Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.InnerSingleton,
			StaticRegisterNativesUJoyShockLibrary4UnrealSettings,
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
	return Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_NoRegister()
{
	return UJoyShockLibrary4UnrealSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "JoyShockLibrary4UnrealSettings.h" },
		{ "ModuleRelativePath", "Public/JoyShockLibrary4UnrealSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyShockLibrary4UnrealSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_JoyShockLibrary4Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::ClassParams = {
	&UJoyShockLibrary4UnrealSettings::StaticClass,
	"JSL4U",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJoyShockLibrary4UnrealSettings()
{
	if (!Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.OuterSingleton, Z_Construct_UClass_UJoyShockLibrary4UnrealSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings.OuterSingleton;
}
UJoyShockLibrary4UnrealSettings::UJoyShockLibrary4UnrealSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyShockLibrary4UnrealSettings);
UJoyShockLibrary4UnrealSettings::~UJoyShockLibrary4UnrealSettings() {}
// ********** End Class UJoyShockLibrary4UnrealSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_Public_JoyShockLibrary4UnrealSettings_h__Script_JoyShockLibrary4Unreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJoyShockLibrary4UnrealSettings, UJoyShockLibrary4UnrealSettings::StaticClass, TEXT("UJoyShockLibrary4UnrealSettings"), &Z_Registration_Info_UClass_UJoyShockLibrary4UnrealSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoyShockLibrary4UnrealSettings), 108476124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_Public_JoyShockLibrary4UnrealSettings_h__Script_JoyShockLibrary4Unreal_1358011297(TEXT("/Script/JoyShockLibrary4Unreal"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_Public_JoyShockLibrary4UnrealSettings_h__Script_JoyShockLibrary4Unreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_JoyShockLibrary4Unreal_HostProject_Plugins_JoyShockLibrary4Unreal_Source_JoyShockLibrary4Unreal_Public_JoyShockLibrary4UnrealSettings_h__Script_JoyShockLibrary4Unreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
