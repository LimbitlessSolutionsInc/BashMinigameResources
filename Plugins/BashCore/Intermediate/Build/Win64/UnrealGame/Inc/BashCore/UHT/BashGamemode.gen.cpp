// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/BashGamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBashGamemode() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode();
	BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode_NoRegister();
	BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister();
	BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadLevelParams;
class UScriptStruct* FLoadLevelParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadLevelParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadLevelParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadLevelParams, Z_Construct_UPackage__Script_BashCore(), TEXT("LoadLevelParams"));
	}
	return Z_Registration_Info_UScriptStruct_LoadLevelParams.OuterSingleton;
}
template<> BASHCORE_API UScriptStruct* StaticStruct<FLoadLevelParams>()
{
	return FLoadLevelParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoadLevelParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadLevelParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadLevelParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadLevelParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
		nullptr,
		&NewStructOps,
		"LoadLevelParams",
		sizeof(FLoadLevelParams),
		alignof(FLoadLevelParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadLevelParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelParams()
	{
		if (!Z_Registration_Info_UScriptStruct_LoadLevelParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadLevelParams.InnerSingleton, Z_Construct_UScriptStruct_FLoadLevelParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoadLevelParams.InnerSingleton;
	}
	DEFINE_FUNCTION(ABashGamemode::execOpenLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABashGamemode::execPlayTransitionEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransitionEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABashGamemode::execOnEnterTransitionFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterTransitionFinish();
		P_NATIVE_END;
	}
	void ABashGamemode::StaticRegisterNativesABashGamemode()
	{
		UClass* Class = ABashGamemode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnterTransitionFinish", &ABashGamemode::execOnEnterTransitionFinish },
			{ "OpenLevel", &ABashGamemode::execOpenLevel },
			{ "PlayTransitionEffects", &ABashGamemode::execPlayTransitionEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called after the circular wipe\n" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
		{ "ToolTip", "Called after the circular wipe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "OnEnterTransitionFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "OpenLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABashGamemode_OpenLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_OpenLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABashGamemode, nullptr, "PlayTransitionEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABashGamemode);
	UClass* Z_Construct_UClass_ABashGamemode_NoRegister()
	{
		return ABashGamemode::StaticClass();
	}
	struct Z_Construct_UClass_ABashGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircularWipeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CircularWipeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircularWipeWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CircularWipeWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABashGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABashGamemode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABashGamemode_OnEnterTransitionFinish, "OnEnterTransitionFinish" }, // 3360706514
		{ &Z_Construct_UFunction_ABashGamemode_OpenLevel, "OpenLevel" }, // 4101092915
		{ &Z_Construct_UFunction_ABashGamemode_PlayTransitionEffects, "PlayTransitionEffects" }, // 4161252734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashGamemode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BashGamemode.h" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass_MetaData[] = {
		{ "Category", "BashGamemode" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass = { "CircularWipeClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABashGamemode, CircularWipeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCircularWipeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget_MetaData[] = {
		{ "Category", "BashGamemode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BashGamemode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget = { "CircularWipeWidget", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABashGamemode, CircularWipeWidget), Z_Construct_UClass_UCircularWipeWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABashGamemode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashGamemode_Statics::NewProp_CircularWipeWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABashGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABashGamemode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABashGamemode_Statics::ClassParams = {
		&ABashGamemode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABashGamemode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABashGamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABashGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABashGamemode()
	{
		if (!Z_Registration_Info_UClass_ABashGamemode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABashGamemode.OuterSingleton, Z_Construct_UClass_ABashGamemode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABashGamemode.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<ABashGamemode>()
	{
		return ABashGamemode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABashGamemode);
	ABashGamemode::~ABashGamemode() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ScriptStructInfo[] = {
		{ FLoadLevelParams::StaticStruct, Z_Construct_UScriptStruct_FLoadLevelParams_Statics::NewStructOps, TEXT("LoadLevelParams"), &Z_Registration_Info_UScriptStruct_LoadLevelParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadLevelParams), 3784311532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABashGamemode, ABashGamemode::StaticClass, TEXT("ABashGamemode"), &Z_Registration_Info_UClass_ABashGamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABashGamemode), 3455401086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_3154826167(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
