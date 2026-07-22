// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Customizer/CustomizerPortraitCapture.h"
#include "MuCO/CustomizableObjectInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomizerPortraitCapture() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_ACustomizerPortraitCapture();
BASHCORE_API UClass* Z_Construct_UClass_ACustomizerPortraitCapture_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister();
CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateContext();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACustomizerPortraitCapture Function CapturePortrait **********************
struct Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics
{
	struct CustomizerPortraitCapture_eventCapturePortrait_Parms
	{
		UPlayerData* InPlayerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::NewProp_InPlayerData = { "InPlayerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizerPortraitCapture_eventCapturePortrait_Parms, InPlayerData), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::NewProp_InPlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACustomizerPortraitCapture, nullptr, "CapturePortrait", Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::CustomizerPortraitCapture_eventCapturePortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::CustomizerPortraitCapture_eventCapturePortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustomizerPortraitCapture::execCapturePortrait)
{
	P_GET_OBJECT(UPlayerData,Z_Param_InPlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CapturePortrait(Z_Param_InPlayerData);
	P_NATIVE_END;
}
// ********** End Class ACustomizerPortraitCapture Function CapturePortrait ************************

// ********** Begin Class ACustomizerPortraitCapture Function FinishPortraitCapture ****************
struct Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics
{
	struct CustomizerPortraitCapture_eventFinishPortraitCapture_Parms
	{
		FUpdateContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizerPortraitCapture_eventFinishPortraitCapture_Parms, Context), Z_Construct_UScriptStruct_FUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2319686262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACustomizerPortraitCapture, nullptr, "FinishPortraitCapture", Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::CustomizerPortraitCapture_eventFinishPortraitCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::CustomizerPortraitCapture_eventFinishPortraitCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustomizerPortraitCapture::execFinishPortraitCapture)
{
	P_GET_STRUCT_REF(FUpdateContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishPortraitCapture(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class ACustomizerPortraitCapture Function FinishPortraitCapture ******************

// ********** Begin Class ACustomizerPortraitCapture ***********************************************
void ACustomizerPortraitCapture::StaticRegisterNativesACustomizerPortraitCapture()
{
	UClass* Class = ACustomizerPortraitCapture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CapturePortrait", &ACustomizerPortraitCapture::execCapturePortrait },
		{ "FinishPortraitCapture", &ACustomizerPortraitCapture::execFinishPortraitCapture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACustomizerPortraitCapture;
UClass* ACustomizerPortraitCapture::GetPrivateStaticClass()
{
	using TClass = ACustomizerPortraitCapture;
	if (!Z_Registration_Info_UClass_ACustomizerPortraitCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomizerPortraitCapture"),
			Z_Registration_Info_UClass_ACustomizerPortraitCapture.InnerSingleton,
			StaticRegisterNativesACustomizerPortraitCapture,
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
	return Z_Registration_Info_UClass_ACustomizerPortraitCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_ACustomizerPortraitCapture_NoRegister()
{
	return ACustomizerPortraitCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACustomizerPortraitCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Customizer/CustomizerPortraitCapture.h" },
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Portrait" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "Portrait" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Portrait" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableSkeletal_MetaData[] = {
		{ "Category", "Portrait" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Customizer/CustomizerPortraitCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableSkeletal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomizerPortraitCapture_CapturePortrait, "CapturePortrait" }, // 201170998
		{ &Z_Construct_UFunction_ACustomizerPortraitCapture_FinishPortraitCapture, "FinishPortraitCapture" }, // 2520515084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomizerPortraitCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomizerPortraitCapture, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomizerPortraitCapture, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomizerPortraitCapture, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMesh_MetaData), NewProp_PlayerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_CustomizableSkeletal = { "CustomizableSkeletal", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomizerPortraitCapture, CustomizableSkeletal), Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableSkeletal_MetaData), NewProp_CustomizableSkeletal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomizerPortraitCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_PlayerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizerPortraitCapture_Statics::NewProp_CustomizableSkeletal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizerPortraitCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomizerPortraitCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizerPortraitCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomizerPortraitCapture_Statics::ClassParams = {
	&ACustomizerPortraitCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACustomizerPortraitCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizerPortraitCapture_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizerPortraitCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomizerPortraitCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomizerPortraitCapture()
{
	if (!Z_Registration_Info_UClass_ACustomizerPortraitCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomizerPortraitCapture.OuterSingleton, Z_Construct_UClass_ACustomizerPortraitCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomizerPortraitCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomizerPortraitCapture);
ACustomizerPortraitCapture::~ACustomizerPortraitCapture() {}
// ********** End Class ACustomizerPortraitCapture *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashCore_Source_BashCore_Public_Customizer_CustomizerPortraitCapture_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomizerPortraitCapture, ACustomizerPortraitCapture::StaticClass, TEXT("ACustomizerPortraitCapture"), &Z_Registration_Info_UClass_ACustomizerPortraitCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomizerPortraitCapture), 2690999629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashCore_Source_BashCore_Public_Customizer_CustomizerPortraitCapture_h__Script_BashCore_235416145(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashCore_Source_BashCore_Public_Customizer_CustomizerPortraitCapture_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashCore_Source_BashCore_Public_Customizer_CustomizerPortraitCapture_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
