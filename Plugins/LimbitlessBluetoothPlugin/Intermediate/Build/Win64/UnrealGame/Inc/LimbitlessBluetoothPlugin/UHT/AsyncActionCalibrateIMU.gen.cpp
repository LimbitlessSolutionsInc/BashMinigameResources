// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/AsyncActions/AsyncActionCalibrateIMU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionCalibrateIMU() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execHandleCalibrationEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCalibrationEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execHandleCalibrationStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCalibrationStart(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionCalibrateIMU::execAsyncCalibrateIMU)
	{
		P_GET_OBJECT(UFlexController,Z_Param_FlexController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionCalibrateIMU**)Z_Param__Result=UAsyncActionCalibrateIMU::AsyncCalibrateIMU(Z_Param_FlexController);
		P_NATIVE_END;
	}
	void UAsyncActionCalibrateIMU::StaticRegisterNativesUAsyncActionCalibrateIMU()
	{
		UClass* Class = UAsyncActionCalibrateIMU::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncCalibrateIMU", &UAsyncActionCalibrateIMU::execAsyncCalibrateIMU },
			{ "HandleCalibrationEnd", &UAsyncActionCalibrateIMU::execHandleCalibrationEnd },
			{ "HandleCalibrationStart", &UAsyncActionCalibrateIMU::execHandleCalibrationStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics
	{
		struct AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms
		{
			UFlexController* FlexController;
			UAsyncActionCalibrateIMU* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_FlexController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "AsyncCalibrateIMU", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::AsyncActionCalibrateIMU_eventAsyncCalibrateIMU_Parms), Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "HandleCalibrationEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics
	{
		struct AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateIMU, nullptr, "HandleCalibrationStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::AsyncActionCalibrateIMU_eventHandleCalibrationStart_Parms), Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionCalibrateIMU);
	UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU_NoRegister()
	{
		return UAsyncActionCalibrateIMU::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_AsyncCalibrateIMU, "AsyncCalibrateIMU" }, // 451629592
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationEnd, "HandleCalibrationEnd" }, // 3294150473
		{ &Z_Construct_UFunction_UAsyncActionCalibrateIMU_HandleCalibrationStart, "HandleCalibrationStart" }, // 708783799
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncActions/AsyncActionCalibrateIMU.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted = { "OnCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionCalibrateIMU, OnCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateIMU.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete = { "OnCalibrationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionCalibrateIMU, OnCalibrationComplete), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete_MetaData)) }; // 2863929423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::NewProp_OnCalibrationComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionCalibrateIMU>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::ClassParams = {
		&UAsyncActionCalibrateIMU::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionCalibrateIMU()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton, Z_Construct_UClass_UAsyncActionCalibrateIMU_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionCalibrateIMU.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<UAsyncActionCalibrateIMU>()
	{
		return UAsyncActionCalibrateIMU::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionCalibrateIMU);
	UAsyncActionCalibrateIMU::~UAsyncActionCalibrateIMU() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionCalibrateIMU, UAsyncActionCalibrateIMU::StaticClass, TEXT("UAsyncActionCalibrateIMU"), &Z_Registration_Info_UClass_UAsyncActionCalibrateIMU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionCalibrateIMU), 1592137433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h_3125391074(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateIMU_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
