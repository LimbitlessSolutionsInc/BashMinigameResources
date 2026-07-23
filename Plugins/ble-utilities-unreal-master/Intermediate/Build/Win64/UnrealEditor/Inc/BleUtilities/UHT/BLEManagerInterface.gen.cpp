// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/BLEManagerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBLEManagerInterface() {}

// ********** Begin Cross Module References ********************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEManagerInterface();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEManagerInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BleUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBLEManagerInterface *************************************************
void UBLEManagerInterface::StaticRegisterNativesUBLEManagerInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBLEManagerInterface;
UClass* UBLEManagerInterface::GetPrivateStaticClass()
{
	using TClass = UBLEManagerInterface;
	if (!Z_Registration_Info_UClass_UBLEManagerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BLEManagerInterface"),
			Z_Registration_Info_UClass_UBLEManagerInterface.InnerSingleton,
			StaticRegisterNativesUBLEManagerInterface,
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
	return Z_Registration_Info_UClass_UBLEManagerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UBLEManagerInterface_NoRegister()
{
	return UBLEManagerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBLEManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BLEManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBLEManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBLEManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BleUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBLEManagerInterface_Statics::ClassParams = {
	&UBLEManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBLEManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBLEManagerInterface()
{
	if (!Z_Registration_Info_UClass_UBLEManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBLEManagerInterface.OuterSingleton, Z_Construct_UClass_UBLEManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBLEManagerInterface.OuterSingleton;
}
UBLEManagerInterface::UBLEManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBLEManagerInterface);
// ********** End Interface UBLEManagerInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEManagerInterface_h__Script_BleUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBLEManagerInterface, UBLEManagerInterface::StaticClass, TEXT("UBLEManagerInterface"), &Z_Registration_Info_UClass_UBLEManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBLEManagerInterface), 3071833659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEManagerInterface_h__Script_BleUtilities_255844289(TEXT("/Script/BleUtilities"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEManagerInterface_h__Script_BleUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEManagerInterface_h__Script_BleUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
