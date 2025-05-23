// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Widgets/MinigameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinigameUI() {}
// Cross Module References
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameUI();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(UMinigameUI::execStartUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartUI_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UMinigameUI_StartUI = FName(TEXT("StartUI"));
	void UMinigameUI::StartUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMinigameUI_StartUI),NULL);
	}
	void UMinigameUI::StaticRegisterNativesUMinigameUI()
	{
		UClass* Class = UMinigameUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartUI", &UMinigameUI::execStartUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinigameUI_StartUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinigameUI_StartUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameUI_StartUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinigameUI, nullptr, "StartUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinigameUI_StartUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameUI_StartUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinigameUI_StartUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameUI_StartUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinigameUI);
	UClass* Z_Construct_UClass_UMinigameUI_NoRegister()
	{
		return UMinigameUI::StaticClass();
	}
	struct Z_Construct_UClass_UMinigameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignedSplit_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssignedSplit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinigameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinigameUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameUI_StartUI, "StartUI" }, // 1833527227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinigameUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MinigameUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMinigameUI, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit = { "AssignedSplit", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMinigameUI, AssignedSplit), METADATA_PARAMS(Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinigameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameUI_Statics::ClassParams = {
		&UMinigameUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMinigameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinigameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinigameUI()
	{
		if (!Z_Registration_Info_UClass_UMinigameUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameUI.OuterSingleton, Z_Construct_UClass_UMinigameUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinigameUI.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UMinigameUI>()
	{
		return UMinigameUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameUI);
	UMinigameUI::~UMinigameUI() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameUI, UMinigameUI::StaticClass, TEXT("UMinigameUI"), &Z_Registration_Info_UClass_UMinigameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameUI), 2036880656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h_2029578689(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
