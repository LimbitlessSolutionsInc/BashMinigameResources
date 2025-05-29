// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Components/Player/PlayerMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMeshComponent() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_UPlayerMeshComponent();
	BASHCORE_API UClass* Z_Construct_UClass_UPlayerMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerMeshComponent::execLoadMeshFromLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMeshFromLocalPlayer();
		P_NATIVE_END;
	}
	void UPlayerMeshComponent::StaticRegisterNativesUPlayerMeshComponent()
	{
		UClass* Class = UPlayerMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMeshFromLocalPlayer", &UPlayerMeshComponent::execLoadMeshFromLocalPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Player Mesh" },
		{ "ModuleRelativePath", "Public/Components/Player/PlayerMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMeshComponent, nullptr, "LoadMeshFromLocalPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMeshComponent);
	UClass* Z_Construct_UClass_UPlayerMeshComponent_NoRegister()
	{
		return UPlayerMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer, "LoadMeshFromLocalPlayer" }, // 2451841037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Components/Player/PlayerMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/PlayerMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMeshComponent_Statics::ClassParams = {
		&UPlayerMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton, Z_Construct_UClass_UPlayerMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UPlayerMeshComponent>()
	{
		return UPlayerMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMeshComponent);
	UPlayerMeshComponent::~UPlayerMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMeshComponent, UPlayerMeshComponent::StaticClass, TEXT("UPlayerMeshComponent"), &Z_Registration_Info_UClass_UPlayerMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMeshComponent), 586202168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h_3794861982(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
