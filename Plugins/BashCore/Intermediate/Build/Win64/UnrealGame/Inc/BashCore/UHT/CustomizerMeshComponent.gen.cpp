// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/CustomizerMeshComponent.h"
#include "Player/PlayerMeshData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomizerMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent();
BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister();
BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMeshData();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomizerMeshComponent Function GenerateMergeMesh **********************
struct Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomizerMeshComponent, nullptr, "GenerateMergeMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomizerMeshComponent::execGenerateMergeMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMergeMesh();
	P_NATIVE_END;
}
// ********** End Class UCustomizerMeshComponent Function GenerateMergeMesh ************************

// ********** Begin Class UCustomizerMeshComponent Function LoadMeshData ***************************
struct Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics
{
	struct CustomizerMeshComponent_eventLoadMeshData_Parms
	{
		FPlayerMeshData MeshData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizerMeshComponent_eventLoadMeshData_Parms, MeshData), Z_Construct_UScriptStruct_FPlayerMeshData, METADATA_PARAMS(0, nullptr) }; // 1369378647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::NewProp_MeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomizerMeshComponent, nullptr, "LoadMeshData", Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::CustomizerMeshComponent_eventLoadMeshData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::CustomizerMeshComponent_eventLoadMeshData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomizerMeshComponent::execLoadMeshData)
{
	P_GET_STRUCT(FPlayerMeshData,Z_Param_MeshData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadMeshData(Z_Param_MeshData);
	P_NATIVE_END;
}
// ********** End Class UCustomizerMeshComponent Function LoadMeshData *****************************

// ********** Begin Class UCustomizerMeshComponent *************************************************
void UCustomizerMeshComponent::StaticRegisterNativesUCustomizerMeshComponent()
{
	UClass* Class = UCustomizerMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateMergeMesh", &UCustomizerMeshComponent::execGenerateMergeMesh },
		{ "LoadMeshData", &UCustomizerMeshComponent::execLoadMeshData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomizerMeshComponent;
UClass* UCustomizerMeshComponent::GetPrivateStaticClass()
{
	using TClass = UCustomizerMeshComponent;
	if (!Z_Registration_Info_UClass_UCustomizerMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomizerMeshComponent"),
			Z_Registration_Info_UClass_UCustomizerMeshComponent.InnerSingleton,
			StaticRegisterNativesUCustomizerMeshComponent,
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
	return Z_Registration_Info_UClass_UCustomizerMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister()
{
	return UCustomizerMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomizerMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n *  Class that uses leader pose component to quickly swap pieces of the mesh out for customization\n *  When done with customization, can also be used to bake a merged skeletal mesh for use in gameplay\n */" },
		{ "HideCategories", "Object Mesh Materials Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Components/Player/CustomizerMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
		{ "ToolTip", "Class that uses leader pose component to quickly swap pieces of the mesh out for customization\nWhen done with customization, can also be used to bake a merged skeletal mesh for use in gameplay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshData_MetaData[] = {
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[] = {
		{ "Category", "Customizer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMeshData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh, "GenerateMergeMesh" }, // 2919902891
		{ &Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData, "LoadMeshData" }, // 932108128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizerMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData = { "PreviewMeshData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizerMeshComponent, PreviewMeshData), Z_Construct_UScriptStruct_FPlayerMeshData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshData_MetaData), NewProp_PreviewMeshData_MetaData) }; // 1369378647
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_ValueProp = { "Parts", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_Key_KeyProp = { "Parts_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizerMeshComponent, Parts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parts_MetaData), NewProp_Parts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizerMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomizerMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::ClassParams = {
	&UCustomizerMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomizerMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizerMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomizerMeshComponent()
{
	if (!Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton, Z_Construct_UClass_UCustomizerMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizerMeshComponent);
UCustomizerMeshComponent::~UCustomizerMeshComponent() {}
// ********** End Class UCustomizerMeshComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizerMeshComponent, UCustomizerMeshComponent::StaticClass, TEXT("UCustomizerMeshComponent"), &Z_Registration_Info_UClass_UCustomizerMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizerMeshComponent), 791484731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h__Script_BashCore_1138705185(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
