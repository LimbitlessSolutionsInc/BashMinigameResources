// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utils/BleUtilitiesPluginUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBleUtilitiesPluginUtils() {}

// ********** Begin Cross Module References ********************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBleUtilitiesPluginUtils();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBleUtilitiesPluginUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BleUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBleUtilitiesPluginUtils Function GetPluginVersionName *******************
struct Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics
{
	struct BleUtilitiesPluginUtils_eventGetPluginVersionName_Parms
	{
		FString PluginName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ble Utilities | Plugin Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get plugin version name\n\x09*\n\x09* @param PluginName - name of the plugin to get info from\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Utils/BleUtilitiesPluginUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get plugin version name\n\n@param PluginName - name of the plugin to get info from" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesPluginUtils_eventGetPluginVersionName_Parms, PluginName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesPluginUtils_eventGetPluginVersionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::NewProp_PluginName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBleUtilitiesPluginUtils, nullptr, "GetPluginVersionName", Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::BleUtilitiesPluginUtils_eventGetPluginVersionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::BleUtilitiesPluginUtils_eventGetPluginVersionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtilitiesPluginUtils::execGetPluginVersionName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBleUtilitiesPluginUtils::GetPluginVersionName(Z_Param_PluginName);
	P_NATIVE_END;
}
// ********** End Class UBleUtilitiesPluginUtils Function GetPluginVersionName *********************

// ********** Begin Class UBleUtilitiesPluginUtils *************************************************
void UBleUtilitiesPluginUtils::StaticRegisterNativesUBleUtilitiesPluginUtils()
{
	UClass* Class = UBleUtilitiesPluginUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPluginVersionName", &UBleUtilitiesPluginUtils::execGetPluginVersionName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBleUtilitiesPluginUtils;
UClass* UBleUtilitiesPluginUtils::GetPrivateStaticClass()
{
	using TClass = UBleUtilitiesPluginUtils;
	if (!Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BleUtilitiesPluginUtils"),
			Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.InnerSingleton,
			StaticRegisterNativesUBleUtilitiesPluginUtils,
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
	return Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UBleUtilitiesPluginUtils_NoRegister()
{
	return UBleUtilitiesPluginUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/BleUtilitiesPluginUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/BleUtilitiesPluginUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleUtilitiesPluginUtils_GetPluginVersionName, "GetPluginVersionName" }, // 140008918
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleUtilitiesPluginUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BleUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::ClassParams = {
	&UBleUtilitiesPluginUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleUtilitiesPluginUtils()
{
	if (!Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.OuterSingleton, Z_Construct_UClass_UBleUtilitiesPluginUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleUtilitiesPluginUtils.OuterSingleton;
}
UBleUtilitiesPluginUtils::UBleUtilitiesPluginUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleUtilitiesPluginUtils);
UBleUtilitiesPluginUtils::~UBleUtilitiesPluginUtils() {}
// ********** End Class UBleUtilitiesPluginUtils ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Utils_BleUtilitiesPluginUtils_h__Script_BleUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleUtilitiesPluginUtils, UBleUtilitiesPluginUtils::StaticClass, TEXT("UBleUtilitiesPluginUtils"), &Z_Registration_Info_UClass_UBleUtilitiesPluginUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleUtilitiesPluginUtils), 2326223046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Utils_BleUtilitiesPluginUtils_h__Script_BleUtilities_1496821307(TEXT("/Script/BleUtilities"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Utils_BleUtilitiesPluginUtils_h__Script_BleUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Utils_BleUtilitiesPluginUtils_h__Script_BleUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
