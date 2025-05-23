// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/Widgets/GraphPlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphPlot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UGraphPlot();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UGraphPlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UGraphPlot::execMarkValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkValue(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphPlot::execGetCurrentMinValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMinValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphPlot::execGetCurrentMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphPlot::execSetData)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_InData);
		P_NATIVE_END;
	}
	void UGraphPlot::StaticRegisterNativesUGraphPlot()
	{
		UClass* Class = UGraphPlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentMaxValue", &UGraphPlot::execGetCurrentMaxValue },
			{ "GetCurrentMinValue", &UGraphPlot::execGetCurrentMinValue },
			{ "MarkValue", &UGraphPlot::execMarkValue },
			{ "SetData", &UGraphPlot::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics
	{
		struct GraphPlot_eventGetCurrentMaxValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GraphPlot_eventGetCurrentMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "GetCurrentMaxValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::GraphPlot_eventGetCurrentMaxValue_Parms), Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics
	{
		struct GraphPlot_eventGetCurrentMinValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GraphPlot_eventGetCurrentMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "GetCurrentMinValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::GraphPlot_eventGetCurrentMinValue_Parms), Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphPlot_MarkValue_Statics
	{
		struct GraphPlot_eventMarkValue_Parms
		{
			FString Key;
			float Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GraphPlot_eventMarkValue_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GraphPlot_eventMarkValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "MarkValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::GraphPlot_eventMarkValue_Parms), Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGraphPlot_MarkValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphPlot_SetData_Statics
	{
		struct GraphPlot_eventSetData_Parms
		{
			TArray<float> InData;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_Inner = { "InData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GraphPlot_eventSetData_Parms, InData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphPlot_SetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "SetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGraphPlot_SetData_Statics::GraphPlot_eventSetData_Parms), Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGraphPlot_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGraphPlot_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphPlot);
	UClass* Z_Construct_UClass_UGraphPlot_NoRegister()
	{
		return UGraphPlot::StaticClass();
	}
	struct Z_Construct_UClass_UGraphPlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticalLines_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumVerticalLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHorizontalLines_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumHorizontalLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoscaleToData_MetaData[];
#endif
		static void NewProp_bAutoscaleToData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoscaleToData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGraphSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGraphSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledGraphMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnscaledGraphMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledGraphMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnscaledGraphMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingAverageWindowSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MovingAverageWindowSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGraphPlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue, "GetCurrentMaxValue" }, // 262708330
		{ &Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue, "GetCurrentMinValue" }, // 572480762
		{ &Z_Construct_UFunction_UGraphPlot_MarkValue, "MarkValue" }, // 1376838468
		{ &Z_Construct_UFunction_UGraphPlot_SetData, "SetData" }, // 2734260673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GraphPlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of grid lines that stretch from top to bottom\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of grid lines that stretch from top to bottom" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines = { "NumVerticalLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, NumVerticalLines), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of grid lines that stretch from left to right\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of grid lines that stretch from left to right" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines = { "NumHorizontalLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, NumHorizontalLines), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness = { "GridLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, GridLineThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor = { "GridLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, GridLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness = { "MarkLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, MarkLineThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor = { "MarkLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, MarkLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness = { "SampleLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, SampleLineThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor = { "SampleLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, SampleLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif
	void Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_SetBit(void* Obj)
	{
		((UGraphPlot*)Obj)->bAutoscaleToData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData = { "bAutoscaleToData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGraphPlot), &Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The amount added to the most extreme absolute value in a data sample when setting graph vertical scaling.\n// For scaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The amount added to the most extreme absolute value in a data sample when setting graph vertical scaling.\nFor scaling graphs only." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize = { "MinGraphSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, MinGraphSize), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The minimum value shown on the graph. For nonscaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The minimum value shown on the graph. For nonscaling graphs only." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum = { "UnscaledGraphMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, UnscaledGraphMinimum), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The maximum value shown on the graph. For nonscaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The maximum value shown on the graph. For nonscaling graphs only." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum = { "UnscaledGraphMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, UnscaledGraphMaximum), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of values to be stored when using a simple moving average\n// If zero, there will be no SMA smoothing\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of values to be stored when using a simple moving average\nIf zero, there will be no SMA smoothing" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize = { "MovingAverageWindowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGraphPlot, MovingAverageWindowSize), METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphPlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphPlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphPlot_Statics::ClassParams = {
		&UGraphPlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGraphPlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGraphPlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGraphPlot()
	{
		if (!Z_Registration_Info_UClass_UGraphPlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphPlot.OuterSingleton, Z_Construct_UClass_UGraphPlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraphPlot.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<UGraphPlot>()
	{
		return UGraphPlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphPlot);
	UGraphPlot::~UGraphPlot() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGraphPlot, UGraphPlot::StaticClass, TEXT("UGraphPlot"), &Z_Registration_Info_UClass_UGraphPlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphPlot), 3263353237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h_3934675004(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
