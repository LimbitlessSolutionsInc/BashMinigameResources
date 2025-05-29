// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Widgets/FlexCalibrationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlexCalibrationMenu() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu();
	BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister();
	BASHCORE_API UClass* Z_Construct_UClass_UMenu();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(UFlexCalibrationMenu::execGetTrackedRestThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackedRestThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlexCalibrationMenu::execGetRecentFlexData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetRecentFlexData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlexCalibrationMenu::execGetTrackedController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFlexController**)Z_Param__Result=P_THIS->GetTrackedController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlexCalibrationMenu::execSetTrackedController)
	{
		P_GET_OBJECT(UFlexController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackedController(Z_Param_Controller);
		P_NATIVE_END;
	}
	void UFlexCalibrationMenu::StaticRegisterNativesUFlexCalibrationMenu()
	{
		UClass* Class = UFlexCalibrationMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecentFlexData", &UFlexCalibrationMenu::execGetRecentFlexData },
			{ "GetTrackedController", &UFlexCalibrationMenu::execGetTrackedController },
			{ "GetTrackedRestThreshold", &UFlexCalibrationMenu::execGetTrackedRestThreshold },
			{ "SetTrackedController", &UFlexCalibrationMenu::execSetTrackedController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics
	{
		struct FlexCalibrationMenu_eventGetRecentFlexData_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlexCalibrationMenu_eventGetRecentFlexData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetRecentFlexData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FlexCalibrationMenu_eventGetRecentFlexData_Parms), Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics
	{
		struct FlexCalibrationMenu_eventGetTrackedController_Parms
		{
			UFlexController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlexCalibrationMenu_eventGetTrackedController_Parms, ReturnValue), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetTrackedController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FlexCalibrationMenu_eventGetTrackedController_Parms), Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics
	{
		struct FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "GetTrackedRestThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FlexCalibrationMenu_eventGetTrackedRestThreshold_Parms), Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics
	{
		struct FlexCalibrationMenu_eventSetTrackedController_Parms
		{
			UFlexController* Controller;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlexCalibrationMenu_eventSetTrackedController_Parms, Controller), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlexCalibrationMenu, nullptr, "SetTrackedController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FlexCalibrationMenu_eventSetTrackedController_Parms), Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlexCalibrationMenu);
	UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister()
	{
		return UFlexCalibrationMenu::StaticClass();
	}
	struct Z_Construct_UClass_UFlexCalibrationMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStoredValues_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumStoredValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlexCalibrationMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenu,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlexCalibrationMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetRecentFlexData, "GetRecentFlexData" }, // 9235932
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedController, "GetTrackedController" }, // 4029592204
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_GetTrackedRestThreshold, "GetTrackedRestThreshold" }, // 2422350951
		{ &Z_Construct_UFunction_UFlexCalibrationMenu_SetTrackedController, "SetTrackedController" }, // 453393453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexCalibrationMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/FlexCalibrationMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues_MetaData[] = {
		{ "Category", "Flex Calibration Menu" },
		{ "Comment", "// How many flex values to store to show in calibration graph\n" },
		{ "ModuleRelativePath", "Public/Widgets/FlexCalibrationMenu.h" },
		{ "ToolTip", "How many flex values to store to show in calibration graph" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues = { "NumStoredValues", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlexCalibrationMenu, NumStoredValues), METADATA_PARAMS(Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexCalibrationMenu_Statics::NewProp_NumStoredValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlexCalibrationMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlexCalibrationMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlexCalibrationMenu_Statics::ClassParams = {
		&UFlexCalibrationMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlexCalibrationMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlexCalibrationMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlexCalibrationMenu()
	{
		if (!Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton, Z_Construct_UClass_UFlexCalibrationMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlexCalibrationMenu.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UFlexCalibrationMenu>()
	{
		return UFlexCalibrationMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlexCalibrationMenu);
	UFlexCalibrationMenu::~UFlexCalibrationMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlexCalibrationMenu, UFlexCalibrationMenu::StaticClass, TEXT("UFlexCalibrationMenu"), &Z_Registration_Info_UClass_UFlexCalibrationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlexCalibrationMenu), 763952548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_351270212(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
