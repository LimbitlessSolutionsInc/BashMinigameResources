// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Player/BashPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBashPlayerController() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController();
	BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController_NoRegister();
	BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();
	BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(ABashPlayerController::execGetBashLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBashLocalPlayer**)Z_Param__Result=P_THIS->GetBashLocalPlayer();
		P_NATIVE_END;
	}
	void ABashPlayerController::StaticRegisterNativesABashPlayerController()
	{
		UClass* Class = ABashPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBashLocalPlayer", &ABashPlayerController::execGetBashLocalPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics
	{
		struct BashPlayerController_eventGetBashLocalPlayer_Parms
		{
			UBashLocalPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BashPlayerController_eventGetBashLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_UBashLocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Local Player" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABashPlayerController, nullptr, "GetBashLocalPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::BashPlayerController_eventGetBashLocalPlayer_Parms), Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABashPlayerController);
	UClass* Z_Construct_UClass_ABashPlayerController_NoRegister()
	{
		return ABashPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABashPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UIInputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BashLocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BashLocalPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABashPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALimbitlessPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABashPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer, "GetBashLocalPlayer" }, // 2445016220
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BashPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent = { "UIInputComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABashPlayerController, UIInputComponent), Z_Construct_UClass_UUIInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer_MetaData[] = {
		{ "Category", "Local Player" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer = { "BashLocalPlayer", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABashPlayerController, BashLocalPlayer), Z_Construct_UClass_UBashLocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABashPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABashPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABashPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABashPlayerController_Statics::ClassParams = {
		&ABashPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABashPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABashPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABashPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton, Z_Construct_UClass_ABashPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<ABashPlayerController>()
	{
		return ABashPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABashPlayerController);
	ABashPlayerController::~ABashPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABashPlayerController, ABashPlayerController::StaticClass, TEXT("ABashPlayerController"), &Z_Registration_Info_UClass_ABashPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABashPlayerController), 1301493366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_3912978838(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
