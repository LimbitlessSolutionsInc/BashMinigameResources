// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/SensorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensorData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIMBITLESSBLUETOOTHPLUGIN_API UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor();
	LIMBITLESSBLUETOOTHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSensorData();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlexColor;
	static UEnum* EFlexColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlexColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlexColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin(), TEXT("EFlexColor"));
		}
		return Z_Registration_Info_UEnum_EFlexColor.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UEnum* StaticEnum<EFlexColor>()
	{
		return EFlexColor_StaticEnum();
	}
	struct Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enumerators[] = {
		{ "EFlexColor::EFC_None", (int64)EFlexColor::EFC_None },
		{ "EFlexColor::EFC_Blue", (int64)EFlexColor::EFC_Blue },
		{ "EFlexColor::EFC_Green", (int64)EFlexColor::EFC_Green },
		{ "EFlexColor::EFC_Cyan", (int64)EFlexColor::EFC_Cyan },
		{ "EFlexColor::EFC_Red", (int64)EFlexColor::EFC_Red },
		{ "EFlexColor::EFC_Magenta", (int64)EFlexColor::EFC_Magenta },
		{ "EFlexColor::EFC_Yellow", (int64)EFlexColor::EFC_Yellow },
		{ "EFlexColor::EFC_White", (int64)EFlexColor::EFC_White },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sensor Data" },
		{ "EFC_Blue.Name", "EFlexColor::EFC_Blue" },
		{ "EFC_Cyan.Name", "EFlexColor::EFC_Cyan" },
		{ "EFC_Green.Name", "EFlexColor::EFC_Green" },
		{ "EFC_Magenta.Name", "EFlexColor::EFC_Magenta" },
		{ "EFC_None.Comment", "// Flex controller takes in color data like binary in base 10\n// Each color is created by either presence or absence of each RGB component\n" },
		{ "EFC_None.Name", "EFlexColor::EFC_None" },
		{ "EFC_None.ToolTip", "Flex controller takes in color data like binary in base 10\nEach color is created by either presence or absence of each RGB component" },
		{ "EFC_Red.Name", "EFlexColor::EFC_Red" },
		{ "EFC_White.Name", "EFlexColor::EFC_White" },
		{ "EFC_Yellow.Name", "EFlexColor::EFC_Yellow" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
		nullptr,
		"EFlexColor",
		"EFlexColor",
		Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor()
	{
		if (!Z_Registration_Info_UEnum_EFlexColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlexColor.InnerSingleton, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlexColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SensorData;
class UScriptStruct* FSensorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SensorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SensorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSensorData, Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin(), TEXT("SensorData"));
	}
	return Z_Registration_Info_UScriptStruct_SensorData.OuterSingleton;
}
template<> LIMBITLESSBLUETOOTHPLUGIN_API UScriptStruct* StaticStruct<FSensorData>()
{
	return FSensorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSensorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProperAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProperAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Battery_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Battery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Color_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSensorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSensorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration = { "ProperAcceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorData, ProperAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorData, Scale), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery = { "Battery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorData, Battery), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSensorData, Color), Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_MetaData)) }; // 1823751619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSensorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
		nullptr,
		&NewStructOps,
		"SensorData",
		sizeof(FSensorData),
		alignof(FSensorData),
		Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSensorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSensorData()
	{
		if (!Z_Registration_Info_UScriptStruct_SensorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SensorData.InnerSingleton, Z_Construct_UScriptStruct_FSensorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SensorData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::EnumInfo[] = {
		{ EFlexColor_StaticEnum, TEXT("EFlexColor"), &Z_Registration_Info_UEnum_EFlexColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1823751619U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::ScriptStructInfo[] = {
		{ FSensorData::StaticStruct, Z_Construct_UScriptStruct_FSensorData_Statics::NewStructOps, TEXT("SensorData"), &Z_Registration_Info_UScriptStruct_SensorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSensorData), 1472233427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_3639256922(TEXT("/Script/LimbitlessBluetoothPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
