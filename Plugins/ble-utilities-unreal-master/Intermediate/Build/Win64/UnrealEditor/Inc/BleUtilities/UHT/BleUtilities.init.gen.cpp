// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleUtilities_init() {}
	BLEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BleUtilities;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BleUtilities()
	{
		if (!Z_Registration_Info_UPackage__Script_BleUtilities.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BleUtilities",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDF0E0A76,
				0xD97A515E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BleUtilities.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BleUtilities.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BleUtilities(Z_Construct_UPackage__Script_BleUtilities, TEXT("/Script/BleUtilities"), Z_Registration_Info_UPackage__Script_BleUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDF0E0A76, 0xD97A515E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
