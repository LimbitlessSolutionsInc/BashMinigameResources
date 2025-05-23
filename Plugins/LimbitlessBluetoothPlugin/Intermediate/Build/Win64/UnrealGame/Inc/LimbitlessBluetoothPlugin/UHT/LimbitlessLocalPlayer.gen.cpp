// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/BaseClasses/LimbitlessLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbitlessLocalPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics
	{
		struct _Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms
		{
			UFlexController* FlexController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::NewProp_FlexController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnFlexControllerAssignedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnFlexControllerAssignedSignature_Parms), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnFlexControllerAssignedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULimbitlessLocalPlayer::execSetFlexController)
	{
		P_GET_OBJECT(UFlexController,Z_Param_newController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlexController(Z_Param_newController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULimbitlessLocalPlayer::execGetFlexController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFlexController**)Z_Param__Result=P_THIS->GetFlexController();
		P_NATIVE_END;
	}
	void ULimbitlessLocalPlayer::StaticRegisterNativesULimbitlessLocalPlayer()
	{
		UClass* Class = ULimbitlessLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFlexController", &ULimbitlessLocalPlayer::execGetFlexController },
			{ "SetFlexController", &ULimbitlessLocalPlayer::execSetFlexController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics
	{
		struct LimbitlessLocalPlayer_eventGetFlexController_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessLocalPlayer_eventGetFlexController_Parms, ReturnValue), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Controller" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimbitlessLocalPlayer, nullptr, "GetFlexController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::LimbitlessLocalPlayer_eventGetFlexController_Parms), Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics
	{
		struct LimbitlessLocalPlayer_eventSetFlexController_Parms
		{
			UFlexController* newController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::NewProp_newController = { "newController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessLocalPlayer_eventSetFlexController_Parms, newController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::NewProp_newController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flex Controller" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimbitlessLocalPlayer, nullptr, "SetFlexController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::LimbitlessLocalPlayer_eventSetFlexController_Parms), Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULimbitlessLocalPlayer);
	UClass* Z_Construct_UClass_ULimbitlessLocalPlayer_NoRegister()
	{
		return ULimbitlessLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULimbitlessLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULimbitlessLocalPlayer_GetFlexController, "GetFlexController" }, // 2930304832
		{ &Z_Construct_UFunction_ULimbitlessLocalPlayer_SetFlexController, "SetFlexController" }, // 3007691629
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseClasses/LimbitlessLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController = { "AssociatedController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULimbitlessLocalPlayer, AssociatedController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::NewProp_AssociatedController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbitlessLocalPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::ClassParams = {
		&ULimbitlessLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULimbitlessLocalPlayer()
	{
		if (!Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton, Z_Construct_UClass_ULimbitlessLocalPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULimbitlessLocalPlayer.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<ULimbitlessLocalPlayer>()
	{
		return ULimbitlessLocalPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULimbitlessLocalPlayer);
	ULimbitlessLocalPlayer::~ULimbitlessLocalPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULimbitlessLocalPlayer, ULimbitlessLocalPlayer::StaticClass, TEXT("ULimbitlessLocalPlayer"), &Z_Registration_Info_UClass_ULimbitlessLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbitlessLocalPlayer), 57260743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_4292283025(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessLocalPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
