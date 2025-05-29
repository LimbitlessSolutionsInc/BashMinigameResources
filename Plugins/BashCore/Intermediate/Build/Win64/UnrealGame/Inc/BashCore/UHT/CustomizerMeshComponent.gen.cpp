// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Components/Player/CustomizerMeshComponent.h"
#include "BashCore/Public/Player/PlayerMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizerMeshComponent() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent();
	BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister();
	BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMeshData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizerMeshComponent::execLoadMeshData)
	{
		P_GET_STRUCT(FPlayerMeshData,Z_Param_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMeshData(Z_Param_MeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizerMeshComponent::execGenerateMergeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMergeMesh();
		P_NATIVE_END;
	}
	void UCustomizerMeshComponent::StaticRegisterNativesUCustomizerMeshComponent()
	{
		UClass* Class = UCustomizerMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMergeMesh", &UCustomizerMeshComponent::execGenerateMergeMesh },
			{ "LoadMeshData", &UCustomizerMeshComponent::execLoadMeshData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizerMeshComponent, nullptr, "GenerateMergeMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics
	{
		struct CustomizerMeshComponent_eventLoadMeshData_Parms
		{
			FPlayerMeshData MeshData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizerMeshComponent_eventLoadMeshData_Parms, MeshData), Z_Construct_UScriptStruct_FPlayerMeshData, METADATA_PARAMS(nullptr, 0) }; // 3227966688
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizerMeshComponent, nullptr, "LoadMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::CustomizerMeshComponent_eventLoadMeshData_Parms), Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizerMeshComponent);
	UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister()
	{
		return UCustomizerMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizerMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMeshData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizerMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizerMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizerMeshComponent_GenerateMergeMesh, "GenerateMergeMesh" }, // 3518711977
		{ &Z_Construct_UFunction_UCustomizerMeshComponent_LoadMeshData, "LoadMeshData" }, // 3186556459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerMeshComponent_Statics::Class_MetaDataParams[] = {
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
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData_MetaData[] = {
		{ "Category", "Customizer" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData = { "PreviewMeshData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizerMeshComponent, PreviewMeshData), Z_Construct_UScriptStruct_FPlayerMeshData, METADATA_PARAMS(Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData_MetaData)) }; // 3227966688
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_ValueProp = { "Parts", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_Key_KeyProp = { "Parts_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_MetaData[] = {
		{ "Category", "Customizer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizerMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizerMeshComponent, Parts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizerMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_PreviewMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerMeshComponent_Statics::NewProp_Parts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizerMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizerMeshComponent>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizerMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizerMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton, Z_Construct_UClass_UCustomizerMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizerMeshComponent.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UCustomizerMeshComponent>()
	{
		return UCustomizerMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizerMeshComponent);
	UCustomizerMeshComponent::~UCustomizerMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizerMeshComponent, UCustomizerMeshComponent::StaticClass, TEXT("UCustomizerMeshComponent"), &Z_Registration_Info_UClass_UCustomizerMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizerMeshComponent), 1542830835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_4168802771(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
