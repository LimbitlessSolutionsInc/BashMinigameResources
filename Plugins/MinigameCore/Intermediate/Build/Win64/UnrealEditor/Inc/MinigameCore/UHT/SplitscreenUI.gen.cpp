// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Widgets/SplitscreenUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitscreenUI() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI();
	MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	void USplitscreenUI::StaticRegisterNativesUSplitscreenUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitscreenUI);
	UClass* Z_Construct_UClass_USplitscreenUI_NoRegister()
	{
		return USplitscreenUI::StaticClass();
	}
	struct Z_Construct_UClass_USplitscreenUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Splits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Splits;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplitscreenUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/SplitscreenUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Splits" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x004400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplitscreenUI, Splits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner = { "RenderTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets = { "RenderTargets", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplitscreenUI, RenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize = { "TargetSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplitscreenUI, TargetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitscreenUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplitscreenUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitscreenUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitscreenUI_Statics::ClassParams = {
		&USplitscreenUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplitscreenUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplitscreenUI()
	{
		if (!Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton, Z_Construct_UClass_USplitscreenUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<USplitscreenUI>()
	{
		return USplitscreenUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplitscreenUI);
	USplitscreenUI::~USplitscreenUI() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplitscreenUI, USplitscreenUI::StaticClass, TEXT("USplitscreenUI"), &Z_Registration_Info_UClass_USplitscreenUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitscreenUI), 1262387860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_3139598026(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
