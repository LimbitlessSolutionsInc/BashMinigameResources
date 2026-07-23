// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/BLEDeviceInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBLEDeviceInterface() {}

// ********** Begin Cross Module References ********************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEDeviceInterface();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEDeviceInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BleUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBLEDeviceInterface **************************************************
void UBLEDeviceInterface::StaticRegisterNativesUBLEDeviceInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBLEDeviceInterface;
UClass* UBLEDeviceInterface::GetPrivateStaticClass()
{
	using TClass = UBLEDeviceInterface;
	if (!Z_Registration_Info_UClass_UBLEDeviceInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BLEDeviceInterface"),
			Z_Registration_Info_UClass_UBLEDeviceInterface.InnerSingleton,
			StaticRegisterNativesUBLEDeviceInterface,
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
	return Z_Registration_Info_UClass_UBLEDeviceInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UBLEDeviceInterface_NoRegister()
{
	return UBLEDeviceInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBLEDeviceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BLEDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBLEDeviceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBLEDeviceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BleUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEDeviceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBLEDeviceInterface_Statics::ClassParams = {
	&UBLEDeviceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEDeviceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBLEDeviceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBLEDeviceInterface()
{
	if (!Z_Registration_Info_UClass_UBLEDeviceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBLEDeviceInterface.OuterSingleton, Z_Construct_UClass_UBLEDeviceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBLEDeviceInterface.OuterSingleton;
}
UBLEDeviceInterface::UBLEDeviceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBLEDeviceInterface);
// ********** End Interface UBLEDeviceInterface ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h__Script_BleUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBLEDeviceInterface, UBLEDeviceInterface::StaticClass, TEXT("UBLEDeviceInterface"), &Z_Registration_Info_UClass_UBLEDeviceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBLEDeviceInterface), 2836258634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h__Script_BleUtilities_729782869(TEXT("/Script/BleUtilities"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h__Script_BleUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h__Script_BleUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
