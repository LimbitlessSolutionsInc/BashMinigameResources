// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/AsyncActions/AsyncActionCalibrateFlex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionCalibrateFlex() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnFlexFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFlexFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnFlexStarted)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFlexStarted(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execOnRestStarted)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestStarted(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionCalibrateFlex::execAsyncCalibrateFlexController)
	{
		P_GET_OBJECT(UFlexController,Z_Param_FlexController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionCalibrateFlex**)Z_Param__Result=UAsyncActionCalibrateFlex::AsyncCalibrateFlexController(Z_Param_FlexController);
		P_NATIVE_END;
	}
	void UAsyncActionCalibrateFlex::StaticRegisterNativesUAsyncActionCalibrateFlex()
	{
		UClass* Class = UAsyncActionCalibrateFlex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncCalibrateFlexController", &UAsyncActionCalibrateFlex::execAsyncCalibrateFlexController },
			{ "OnFlexFinished", &UAsyncActionCalibrateFlex::execOnFlexFinished },
			{ "OnFlexStarted", &UAsyncActionCalibrateFlex::execOnFlexStarted },
			{ "OnRestStarted", &UAsyncActionCalibrateFlex::execOnRestStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics
	{
		struct AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms
		{
			UFlexController* FlexController;
			UAsyncActionCalibrateFlex* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_FlexController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "AsyncCalibrateFlexController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::AsyncActionCalibrateFlex_eventAsyncCalibrateFlexController_Parms), Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnFlexFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics
	{
		struct AsyncActionCalibrateFlex_eventOnFlexStarted_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventOnFlexStarted_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnFlexStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::AsyncActionCalibrateFlex_eventOnFlexStarted_Parms), Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics
	{
		struct AsyncActionCalibrateFlex_eventOnRestStarted_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionCalibrateFlex_eventOnRestStarted_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionCalibrateFlex, nullptr, "OnRestStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::AsyncActionCalibrateFlex_eventOnRestStarted_Parms), Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionCalibrateFlex);
	UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex_NoRegister()
	{
		return UAsyncActionCalibrateFlex::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRestCalibrationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRestCalibrationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFlexCalibrationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlexCalibrationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCalibrationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCalibrationComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_AsyncCalibrateFlexController, "AsyncCalibrateFlexController" }, // 2028581236
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexFinished, "OnFlexFinished" }, // 4262499271
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnFlexStarted, "OnFlexStarted" }, // 236441171
		{ &Z_Construct_UFunction_UAsyncActionCalibrateFlex_OnRestStarted, "OnRestStarted" }, // 3329855736
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncActions/AsyncActionCalibrateFlex.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted = { "OnRestCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnRestCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted = { "OnFlexCalibrationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnFlexCalibrationStarted), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted_MetaData)) }; // 301080828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/AsyncActionCalibrateFlex.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete = { "OnCalibrationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionCalibrateFlex, OnCalibrationComplete), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete_MetaData)) }; // 2863929423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnRestCalibrationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnFlexCalibrationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::NewProp_OnCalibrationComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionCalibrateFlex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::ClassParams = {
		&UAsyncActionCalibrateFlex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionCalibrateFlex()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton, Z_Construct_UClass_UAsyncActionCalibrateFlex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionCalibrateFlex.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<UAsyncActionCalibrateFlex>()
	{
		return UAsyncActionCalibrateFlex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionCalibrateFlex);
	UAsyncActionCalibrateFlex::~UAsyncActionCalibrateFlex() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionCalibrateFlex, UAsyncActionCalibrateFlex::StaticClass, TEXT("UAsyncActionCalibrateFlex"), &Z_Registration_Info_UClass_UAsyncActionCalibrateFlex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionCalibrateFlex), 1800526906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h_3119434337(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_AsyncActions_AsyncActionCalibrateFlex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
