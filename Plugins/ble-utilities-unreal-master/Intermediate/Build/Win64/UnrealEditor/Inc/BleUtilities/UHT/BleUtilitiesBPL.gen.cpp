// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleUtilitiesBPL.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBleUtilitiesBPL() {}

// ********** Begin Cross Module References ********************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEScannerInterface_NoRegister();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBleUtilitiesUtilsBPL();
BLEUTILITIES_API UClass* Z_Construct_UClass_UBleUtilitiesUtilsBPL_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BleUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBleUtilitiesUtilsBPL Function ConvertBytesToHexString *******************
struct Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics
{
	struct BleUtilitiesUtilsBPL_eventConvertBytesToHexString_Parms
	{
		TArray<uint8> bytes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert array of bytes to HEX string\n\x09 *\n\x09 * @return - hex string representing array of bytes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BleUtilitiesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert array of bytes to HEX string\n\n@return - hex string representing array of bytes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventConvertBytesToHexString_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventConvertBytesToHexString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBleUtilitiesUtilsBPL, nullptr, "ConvertBytesToHexString", Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::BleUtilitiesUtilsBPL_eventConvertBytesToHexString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::BleUtilitiesUtilsBPL_eventConvertBytesToHexString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtilitiesUtilsBPL::execConvertBytesToHexString)
{
	P_GET_TARRAY(uint8,Z_Param_bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBleUtilitiesUtilsBPL::ConvertBytesToHexString(Z_Param_bytes);
	P_NATIVE_END;
}
// ********** End Class UBleUtilitiesUtilsBPL Function ConvertBytesToHexString *********************

// ********** Begin Class UBleUtilitiesUtilsBPL Function CreateBLEScanner **************************
struct Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics
{
	struct BleUtilitiesUtilsBPL_eventCreateBLEScanner_Parms
	{
		TScriptInterface<IBLEScannerInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create new instance of BLE scanner\n\x09*\n\x09* @return - reference to BLE scanner interface\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BleUtilitiesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new instance of BLE scanner\n\n@return - reference to BLE scanner interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventCreateBLEScanner_Parms, ReturnValue), Z_Construct_UClass_UBLEScannerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBleUtilitiesUtilsBPL, nullptr, "CreateBLEScanner", Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::BleUtilitiesUtilsBPL_eventCreateBLEScanner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::BleUtilitiesUtilsBPL_eventCreateBLEScanner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtilitiesUtilsBPL::execCreateBLEScanner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IBLEScannerInterface>*)Z_Param__Result=UBleUtilitiesUtilsBPL::CreateBLEScanner();
	P_NATIVE_END;
}
// ********** End Class UBleUtilitiesUtilsBPL Function CreateBLEScanner ****************************

// ********** Begin Class UBleUtilitiesUtilsBPL Function HexToUUID *********************************
struct Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics
{
	struct BleUtilitiesUtilsBPL_eventHexToUUID_Parms
	{
		FString hexString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Parse a 16 bit hex value into an UUID string\n\x09*\n\x09* @return - FString\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BleUtilitiesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse a 16 bit hex value into an UUID string\n\n@return - FString" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_hexString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::NewProp_hexString = { "hexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventHexToUUID_Parms, hexString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventHexToUUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::NewProp_hexString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBleUtilitiesUtilsBPL, nullptr, "HexToUUID", Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::BleUtilitiesUtilsBPL_eventHexToUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::BleUtilitiesUtilsBPL_eventHexToUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtilitiesUtilsBPL::execHexToUUID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_hexString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBleUtilitiesUtilsBPL::HexToUUID(Z_Param_hexString);
	P_NATIVE_END;
}
// ********** End Class UBleUtilitiesUtilsBPL Function HexToUUID ***********************************

// ********** Begin Class UBleUtilitiesUtilsBPL Function HexToUUIDs ********************************
struct Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics
{
	struct BleUtilitiesUtilsBPL_eventHexToUUIDs_Parms
	{
		TArray<FString> hexStrings;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BleUtilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Parse an array of 16 bit hex values into an array of UUID strings\n\x09*\n\x09* @return - array of FString\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BleUtilitiesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse an array of 16 bit hex values into an array of UUID strings\n\n@return - array of FString" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_hexStrings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_hexStrings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_hexStrings_Inner = { "hexStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_hexStrings = { "hexStrings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventHexToUUIDs_Parms, hexStrings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtilitiesUtilsBPL_eventHexToUUIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_hexStrings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_hexStrings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBleUtilitiesUtilsBPL, nullptr, "HexToUUIDs", Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::BleUtilitiesUtilsBPL_eventHexToUUIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::BleUtilitiesUtilsBPL_eventHexToUUIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtilitiesUtilsBPL::execHexToUUIDs)
{
	P_GET_TARRAY(FString,Z_Param_hexStrings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UBleUtilitiesUtilsBPL::HexToUUIDs(Z_Param_hexStrings);
	P_NATIVE_END;
}
// ********** End Class UBleUtilitiesUtilsBPL Function HexToUUIDs **********************************

// ********** Begin Class UBleUtilitiesUtilsBPL ****************************************************
void UBleUtilitiesUtilsBPL::StaticRegisterNativesUBleUtilitiesUtilsBPL()
{
	UClass* Class = UBleUtilitiesUtilsBPL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertBytesToHexString", &UBleUtilitiesUtilsBPL::execConvertBytesToHexString },
		{ "CreateBLEScanner", &UBleUtilitiesUtilsBPL::execCreateBLEScanner },
		{ "HexToUUID", &UBleUtilitiesUtilsBPL::execHexToUUID },
		{ "HexToUUIDs", &UBleUtilitiesUtilsBPL::execHexToUUIDs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL;
UClass* UBleUtilitiesUtilsBPL::GetPrivateStaticClass()
{
	using TClass = UBleUtilitiesUtilsBPL;
	if (!Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BleUtilitiesUtilsBPL"),
			Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.InnerSingleton,
			StaticRegisterNativesUBleUtilitiesUtilsBPL,
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
	return Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.InnerSingleton;
}
UClass* Z_Construct_UClass_UBleUtilitiesUtilsBPL_NoRegister()
{
	return UBleUtilitiesUtilsBPL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BleUtilitiesBPL.h" },
		{ "ModuleRelativePath", "Public/BleUtilitiesBPL.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleUtilitiesUtilsBPL_ConvertBytesToHexString, "ConvertBytesToHexString" }, // 376314713
		{ &Z_Construct_UFunction_UBleUtilitiesUtilsBPL_CreateBLEScanner, "CreateBLEScanner" }, // 93607463
		{ &Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUID, "HexToUUID" }, // 24136460
		{ &Z_Construct_UFunction_UBleUtilitiesUtilsBPL_HexToUUIDs, "HexToUUIDs" }, // 633179542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleUtilitiesUtilsBPL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BleUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::ClassParams = {
	&UBleUtilitiesUtilsBPL::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleUtilitiesUtilsBPL()
{
	if (!Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.OuterSingleton, Z_Construct_UClass_UBleUtilitiesUtilsBPL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleUtilitiesUtilsBPL);
UBleUtilitiesUtilsBPL::~UBleUtilitiesUtilsBPL() {}
// ********** End Class UBleUtilitiesUtilsBPL ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_BleUtilitiesBPL_h__Script_BleUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleUtilitiesUtilsBPL, UBleUtilitiesUtilsBPL::StaticClass, TEXT("UBleUtilitiesUtilsBPL"), &Z_Registration_Info_UClass_UBleUtilitiesUtilsBPL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleUtilitiesUtilsBPL), 4056944621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_BleUtilitiesBPL_h__Script_BleUtilities_3432402639(TEXT("/Script/BleUtilities"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_BleUtilitiesBPL_h__Script_BleUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_BleUtilitiesBPL_h__Script_BleUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
