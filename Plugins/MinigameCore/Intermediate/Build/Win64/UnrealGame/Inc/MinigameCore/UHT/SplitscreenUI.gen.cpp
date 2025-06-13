// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/SplitscreenUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplitscreenUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI();
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USplitscreenUI ***********************************************************
void USplitscreenUI::StaticRegisterNativesUSplitscreenUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplitscreenUI;
UClass* USplitscreenUI::GetPrivateStaticClass()
{
	using TClass = USplitscreenUI;
	if (!Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplitscreenUI"),
			Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton,
			StaticRegisterNativesUSplitscreenUI,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton;
}
UClass* Z_Construct_UClass_USplitscreenUI_NoRegister()
{
	return USplitscreenUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplitscreenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/SplitscreenUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Splits" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargets_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSize_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Splits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Splits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitscreenUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x014400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, Splits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Splits_MetaData), NewProp_Splits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner = { "RenderTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets = { "RenderTargets", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, RenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargets_MetaData), NewProp_RenderTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize = { "TargetSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, TargetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSize_MetaData), NewProp_TargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitscreenUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplitscreenUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitscreenUI()
{
	if (!Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton, Z_Construct_UClass_USplitscreenUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton;
}
USplitscreenUI::USplitscreenUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitscreenUI);
USplitscreenUI::~USplitscreenUI() {}
// ********** End Class USplitscreenUI *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplitscreenUI, USplitscreenUI::StaticClass, TEXT("USplitscreenUI"), &Z_Registration_Info_UClass_USplitscreenUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitscreenUI), 2146320322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_357266059(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
