// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/FlexController.h"
#include "LimbitlessBluetoothPlugin/Public/SensorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlexController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSensorData();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "AnalogReceivedFlexSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnRotationReceivedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnAccelerationReceivedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnAngularVelocityReceivedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms
		{
			int32 Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "DiscreteReceivedFlexSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms
		{
			int32 Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "DiscreteThresholdReachedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnCalibrationStartedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnCalibrationEndedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFlexController::execBeginFlexCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginFlexCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlexController::execBeginIMUCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginIMUCalibration();
		P_NATIVE_END;
	}
	void UFlexController::StaticRegisterNativesUFlexController()
	{
		UClass* Class = UFlexController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginFlexCalibration", &UFlexController::execBeginFlexCalibration },
			{ "BeginIMUCalibration", &UFlexController::execBeginIMUCalibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexController, nullptr, "BeginFlexCalibration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexController_BeginFlexCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexController, nullptr, "BeginIMUCalibration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexController_BeginIMUCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlexController);
	UClass* Z_Construct_UClass_UFlexController_NoRegister()
	{
		return UFlexController::StaticClass();
	}
	struct Z_Construct_UClass_UFlexController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRotationReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotationReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAngularVelocityReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAngularVelocityReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccelerationReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccelerationReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnalogFlex_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnalogFlex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDiscreteFlex_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDiscreteFlex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDiscreteThresholdReached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDiscreteThresholdReached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartRestCalibration_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartRestCalibration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartFlexCalibration_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartFlexCalibration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishFlexCalibration_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishFlexCalibration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartIMUCalibration_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartIMUCalibration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishIMUCalibration_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishIMUCalibration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateAccelerationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoordinateAccelerationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SensorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlexController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlexController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlexController_BeginFlexCalibration, "BeginFlexCalibration" }, // 3543965218
		{ &Z_Construct_UFunction_UFlexController_BeginIMUCalibration, "BeginIMUCalibration" }, // 2683933217
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlexController.h" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived = { "OnRotationReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnRotationReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived_MetaData)) }; // 990283005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived = { "OnAngularVelocityReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnAngularVelocityReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived_MetaData)) }; // 2978861725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived = { "OnAccelerationReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnAccelerationReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived_MetaData)) }; // 614854735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex_MetaData[] = {
		{ "Comment", "// A value from 0-1, where 0 is rest threshold and 1 is maximum flex\n" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
		{ "ToolTip", "A value from 0-1, where 0 is rest threshold and 1 is maximum flex" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex = { "OnAnalogFlex", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnAnalogFlex), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex_MetaData)) }; // 811030757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex_MetaData[] = {
		{ "Comment", "// Passes discrete level ranging from 1 to NumDiscreteLevels\n" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
		{ "ToolTip", "Passes discrete level ranging from 1 to NumDiscreteLevels" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex = { "OnDiscreteFlex", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnDiscreteFlex), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex_MetaData)) }; // 884270015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached = { "OnDiscreteThresholdReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnDiscreteThresholdReached), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached_MetaData)) }; // 2083308001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration = { "OnStartRestCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnStartRestCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration = { "OnStartFlexCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnStartFlexCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration = { "OnFinishFlexCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnFinishFlexCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration_MetaData)) }; // 2863929423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration = { "OnStartIMUCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnStartIMUCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration = { "OnFinishIMUCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, OnFinishIMUCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration_MetaData)) }; // 2863929423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold_MetaData[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold = { "CoordinateAccelerationThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, CoordinateAccelerationThreshold), METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, SensorData), Z_Construct_UScriptStruct_FSensorData, METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData_MetaData)) }; // 1472233427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay_MetaData[] = {
		{ "Category", "Disconnection" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay = { "TimeoutDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexController, TimeoutDelay), METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlexController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlexController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlexController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlexController_Statics::ClassParams = {
		&UFlexController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlexController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlexController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlexController()
	{
		if (!Z_Registration_Info_UClass_UFlexController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlexController.OuterSingleton, Z_Construct_UClass_UFlexController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlexController.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<UFlexController>()
	{
		return UFlexController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlexController);
	UFlexController::~UFlexController() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlexController, UFlexController::StaticClass, TEXT("UFlexController"), &Z_Registration_Info_UClass_UFlexController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlexController), 379938112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_1037989851(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
