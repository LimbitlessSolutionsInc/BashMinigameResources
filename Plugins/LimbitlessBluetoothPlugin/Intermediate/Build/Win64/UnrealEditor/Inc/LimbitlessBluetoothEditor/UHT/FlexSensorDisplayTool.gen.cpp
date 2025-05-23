// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothEditor/Public/FlexSensorDisplayTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlexSensorDisplayTool() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	LIMBITLESSBLUETOOTHEDITOR_API UClass* Z_Construct_UClass_UFlexSensorDisplayTool();
	LIMBITLESSBLUETOOTHEDITOR_API UClass* Z_Construct_UClass_UFlexSensorDisplayTool_NoRegister();
	LIMBITLESSBLUETOOTHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSensorDisplayData();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SensorDisplayData;
class UScriptStruct* FSensorDisplayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SensorDisplayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SensorDisplayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSensorDisplayData, Z_Construct_UPackage__Script_LimbitlessBluetoothEditor(), TEXT("SensorDisplayData"));
	}
	return Z_Registration_Info_UScriptStruct_SensorDisplayData.OuterSingleton;
}
template<> LIMBITLESSBLUETOOTHEDITOR_API UScriptStruct* StaticStruct<FSensorDisplayData>()
{
	return FSensorDisplayData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSensorDisplayData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EMGReadings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMGReadings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EMGReadings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityX_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityX_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularVelocityX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityY_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityY_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularVelocityY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityZ_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityZ_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularVelocityZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProperAccelerationX_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProperAccelerationX_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProperAccelerationX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProperAccelerationY_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProperAccelerationY_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProperAccelerationY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProperAccelerationZ_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProperAccelerationZ_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProperAccelerationZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoordinateAccelerationX_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateAccelerationX_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CoordinateAccelerationX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoordinateAccelerationY_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateAccelerationY_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CoordinateAccelerationY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoordinateAccelerationZ_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateAccelerationZ_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CoordinateAccelerationZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSensorDisplayData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings_Inner = { "EMGReadings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings = { "EMGReadings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, EMGReadings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX_Inner = { "AngularVelocityX", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX = { "AngularVelocityX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, AngularVelocityX), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY_Inner = { "AngularVelocityY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY = { "AngularVelocityY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, AngularVelocityY), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ_Inner = { "AngularVelocityZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ = { "AngularVelocityZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, AngularVelocityZ), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX_Inner = { "ProperAccelerationX", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX = { "ProperAccelerationX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, ProperAccelerationX), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY_Inner = { "ProperAccelerationY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY = { "ProperAccelerationY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, ProperAccelerationY), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ_Inner = { "ProperAccelerationZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ = { "ProperAccelerationZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, ProperAccelerationZ), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX_Inner = { "CoordinateAccelerationX", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX = { "CoordinateAccelerationX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, CoordinateAccelerationX), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY_Inner = { "CoordinateAccelerationY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY = { "CoordinateAccelerationY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, CoordinateAccelerationY), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ_Inner = { "CoordinateAccelerationZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ = { "CoordinateAccelerationZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorDisplayData, CoordinateAccelerationZ), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSensorDisplayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_EMGReadings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_AngularVelocityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_ProperAccelerationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewProp_CoordinateAccelerationZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSensorDisplayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothEditor,
		nullptr,
		&NewStructOps,
		"SensorDisplayData",
		sizeof(FSensorDisplayData),
		alignof(FSensorDisplayData),
		Z_Construct_UScriptStruct_FSensorDisplayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorDisplayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSensorDisplayData()
	{
		if (!Z_Registration_Info_UScriptStruct_SensorDisplayData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SensorDisplayData.InnerSingleton, Z_Construct_UScriptStruct_FSensorDisplayData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SensorDisplayData.InnerSingleton;
	}
	DEFINE_FUNCTION(UFlexSensorDisplayTool::execRefreshDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshDevices();
		P_NATIVE_END;
	}
	void UFlexSensorDisplayTool::StaticRegisterNativesUFlexSensorDisplayTool()
	{
		UClass* Class = UFlexSensorDisplayTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshDevices", &UFlexSensorDisplayTool::execRefreshDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexSensorDisplayTool, nullptr, "RefreshDevices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlexSensorDisplayTool);
	UClass* Z_Construct_UClass_UFlexSensorDisplayTool_NoRegister()
	{
		return UFlexSensorDisplayTool::StaticClass();
	}
	struct Z_Construct_UClass_UFlexSensorDisplayTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValuesStored_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxValuesStored;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerData_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControllerData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlexSensorDisplayTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlexSensorDisplayTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlexSensorDisplayTool_RefreshDevices, "RefreshDevices" }, // 3420368997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexSensorDisplayTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlexSensorDisplayTool.h" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_MaxValuesStored_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_MaxValuesStored = { "MaxValuesStored", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexSensorDisplayTool, MaxValuesStored), METADATA_PARAMS(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_MaxValuesStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_MaxValuesStored_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_ValueProp = { "ControllerData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSensorDisplayData, METADATA_PARAMS(nullptr, 0) }; // 744409960
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_Key_KeyProp = { "ControllerData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData = { "ControllerData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexSensorDisplayTool, ControllerData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_MetaData)) }; // 744409960
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers_Inner = { "TrackedControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexSensorDisplayTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers = { "TrackedControllers", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexSensorDisplayTool, TrackedControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlexSensorDisplayTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_MaxValuesStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_ControllerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexSensorDisplayTool_Statics::NewProp_TrackedControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlexSensorDisplayTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlexSensorDisplayTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlexSensorDisplayTool_Statics::ClassParams = {
		&UFlexSensorDisplayTool::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlexSensorDisplayTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexSensorDisplayTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlexSensorDisplayTool()
	{
		if (!Z_Registration_Info_UClass_UFlexSensorDisplayTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlexSensorDisplayTool.OuterSingleton, Z_Construct_UClass_UFlexSensorDisplayTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlexSensorDisplayTool.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHEDITOR_API UClass* StaticClass<UFlexSensorDisplayTool>()
	{
		return UFlexSensorDisplayTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlexSensorDisplayTool);
	UFlexSensorDisplayTool::~UFlexSensorDisplayTool() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ScriptStructInfo[] = {
		{ FSensorDisplayData::StaticStruct, Z_Construct_UScriptStruct_FSensorDisplayData_Statics::NewStructOps, TEXT("SensorDisplayData"), &Z_Registration_Info_UScriptStruct_SensorDisplayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSensorDisplayData), 744409960U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlexSensorDisplayTool, UFlexSensorDisplayTool::StaticClass, TEXT("UFlexSensorDisplayTool"), &Z_Registration_Info_UClass_UFlexSensorDisplayTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlexSensorDisplayTool), 3487785798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_3845482323(TEXT("/Script/LimbitlessBluetoothEditor"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothEditor_Public_FlexSensorDisplayTool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
