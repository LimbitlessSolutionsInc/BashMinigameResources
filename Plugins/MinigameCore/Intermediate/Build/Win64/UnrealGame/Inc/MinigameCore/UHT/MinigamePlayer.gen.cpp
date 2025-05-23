// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Player/MinigamePlayer.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigamePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(AMinigamePlayer::execReadyPlayer)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadyPlayer(Z_Param_Out_value);
		P_NATIVE_END;
	}
	void AMinigamePlayer::StaticRegisterNativesAMinigamePlayer()
	{
		UClass* Class = AMinigamePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadyPlayer", &AMinigamePlayer::execReadyPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics
	{
		struct MinigamePlayer_eventReadyPlayer_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MinigamePlayer_eventReadyPlayer_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinigamePlayer, nullptr, "ReadyPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::MinigamePlayer_eventReadyPlayer_Parms), Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinigamePlayer);
	UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister()
	{
		return AMinigamePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMinigamePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasFlexDevice_MetaData[];
#endif
		static void NewProp_bHasFlexDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlexDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadyAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReadyAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinigamePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinigamePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigamePlayer_ReadyPlayer, "ReadyPlayer" }, // 4005786227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/MinigamePlayer.h" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigamePlayer, Team), METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigamePlayer, PlayerNumber), METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_SetBit(void* Obj)
	{
		((AMinigamePlayer*)Obj)->bHasFlexDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice = { "bHasFlexDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMinigamePlayer), &Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((AMinigamePlayer*)Obj)->bIsReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMinigamePlayer), &Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame_MetaData[] = {
		{ "Category", "Minigame Player" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigamePlayer, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_InputMapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigamePlayer, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_ReadyAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/Player/MinigamePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_ReadyAction = { "ReadyAction", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMinigamePlayer, ReadyAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_ReadyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_ReadyAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_PlayerNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bHasFlexDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_bIsReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_Minigame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigamePlayer_Statics::NewProp_ReadyAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinigamePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigamePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigamePlayer_Statics::ClassParams = {
		&AMinigamePlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinigamePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinigamePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinigamePlayer()
	{
		if (!Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton, Z_Construct_UClass_AMinigamePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinigamePlayer.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<AMinigamePlayer>()
	{
		return AMinigamePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigamePlayer);
	AMinigamePlayer::~AMinigamePlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinigamePlayer, AMinigamePlayer::StaticClass, TEXT("AMinigamePlayer"), &Z_Registration_Info_UClass_AMinigamePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigamePlayer), 1664291518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_1699077490(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
