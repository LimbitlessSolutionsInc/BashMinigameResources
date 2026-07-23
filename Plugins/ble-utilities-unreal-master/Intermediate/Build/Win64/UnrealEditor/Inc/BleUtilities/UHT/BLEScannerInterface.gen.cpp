// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/BLEScannerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBLEScannerInterface() {}

// ********** Begin Cross Module References ********************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEScannerInterface();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEScannerInterface_NoRegister();
BLEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BleUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAdvertisementReceivedDelegate **************************************
struct Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms
	{
		FString Name;
		TArray<uint8> data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BLEScannerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BleUtilities, nullptr, "OnAdvertisementReceivedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::_Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::_Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAdvertisementReceivedDelegate_DelegateWrapper(const FScriptDelegate& OnAdvertisementReceivedDelegate, const FString& Name, TArray<uint8> const& data)
{
	struct _Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms
	{
		FString Name;
		TArray<uint8> data;
	};
	_Script_BleUtilities_eventOnAdvertisementReceivedDelegate_Parms Parms;
	Parms.Name=Name;
	Parms.data=data;
	OnAdvertisementReceivedDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAdvertisementReceivedDelegate ****************************************

// ********** Begin Interface UBLEScannerInterface Function StartScan ******************************
struct Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics
{
	struct BLEScannerInterface_eventStartScan_Parms
	{
		FScriptDelegate onAdvertisementReceivedDelegate;
		TArray<FString> nameFilters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "nameFilters" },
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Start Scan\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Interface/BLEScannerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start Scan" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onAdvertisementReceivedDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nameFilters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onAdvertisementReceivedDelegate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nameFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_nameFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_onAdvertisementReceivedDelegate = { "onAdvertisementReceivedDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BLEScannerInterface_eventStartScan_Parms, onAdvertisementReceivedDelegate), Z_Construct_UDelegateFunction_BleUtilities_OnAdvertisementReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onAdvertisementReceivedDelegate_MetaData), NewProp_onAdvertisementReceivedDelegate_MetaData) }; // 1121020899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_nameFilters_Inner = { "nameFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_nameFilters = { "nameFilters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BLEScannerInterface_eventStartScan_Parms, nameFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nameFilters_MetaData), NewProp_nameFilters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_onAdvertisementReceivedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_nameFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::NewProp_nameFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBLEScannerInterface, nullptr, "StartScan", Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::BLEScannerInterface_eventStartScan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::BLEScannerInterface_eventStartScan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBLEScannerInterface_StartScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBLEScannerInterface_StartScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBLEScannerInterface::execStartScan)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onAdvertisementReceivedDelegate);
	P_GET_TARRAY_REF(FString,Z_Param_Out_nameFilters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartScan(FOnAdvertisementReceivedDelegate(Z_Param_Out_onAdvertisementReceivedDelegate),Z_Param_Out_nameFilters);
	P_NATIVE_END;
}
// ********** End Interface UBLEScannerInterface Function StartScan ********************************

// ********** Begin Interface UBLEScannerInterface Function StopScan *******************************
struct Z_Construct_UFunction_UBLEScannerInterface_StopScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Stop Scan\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Interface/BLEScannerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop Scan" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBLEScannerInterface_StopScan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBLEScannerInterface, nullptr, "StopScan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBLEScannerInterface_StopScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBLEScannerInterface_StopScan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBLEScannerInterface_StopScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBLEScannerInterface_StopScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBLEScannerInterface::execStopScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopScan();
	P_NATIVE_END;
}
// ********** End Interface UBLEScannerInterface Function StopScan *********************************

// ********** Begin Interface UBLEScannerInterface *************************************************
void UBLEScannerInterface::StaticRegisterNativesUBLEScannerInterface()
{
	UClass* Class = UBLEScannerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartScan", &IBLEScannerInterface::execStartScan },
		{ "StopScan", &IBLEScannerInterface::execStopScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBLEScannerInterface;
UClass* UBLEScannerInterface::GetPrivateStaticClass()
{
	using TClass = UBLEScannerInterface;
	if (!Z_Registration_Info_UClass_UBLEScannerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BLEScannerInterface"),
			Z_Registration_Info_UClass_UBLEScannerInterface.InnerSingleton,
			StaticRegisterNativesUBLEScannerInterface,
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
	return Z_Registration_Info_UClass_UBLEScannerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UBLEScannerInterface_NoRegister()
{
	return UBLEScannerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBLEScannerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/BLEScannerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBLEScannerInterface_StartScan, "StartScan" }, // 596731480
		{ &Z_Construct_UFunction_UBLEScannerInterface_StopScan, "StopScan" }, // 518507806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBLEScannerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBLEScannerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BleUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEScannerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBLEScannerInterface_Statics::ClassParams = {
	&UBLEScannerInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBLEScannerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBLEScannerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBLEScannerInterface()
{
	if (!Z_Registration_Info_UClass_UBLEScannerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBLEScannerInterface.OuterSingleton, Z_Construct_UClass_UBLEScannerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBLEScannerInterface.OuterSingleton;
}
UBLEScannerInterface::UBLEScannerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBLEScannerInterface);
// ********** End Interface UBLEScannerInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h__Script_BleUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBLEScannerInterface, UBLEScannerInterface::StaticClass, TEXT("UBLEScannerInterface"), &Z_Registration_Info_UClass_UBLEScannerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBLEScannerInterface), 2687535848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h__Script_BleUtilities_3212080427(TEXT("/Script/BleUtilities"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h__Script_BleUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h__Script_BleUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
