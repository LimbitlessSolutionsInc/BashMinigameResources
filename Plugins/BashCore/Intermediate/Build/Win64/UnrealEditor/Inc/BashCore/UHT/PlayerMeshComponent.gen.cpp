// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/PlayerMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UPlayerMeshComponent();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerMeshComponent Function LoadMeshFromLocalPlayer ********************
struct Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Player Mesh" },
		{ "ModuleRelativePath", "Public/Components/Player/PlayerMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerMeshComponent, nullptr, "LoadMeshFromLocalPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerMeshComponent::execLoadMeshFromLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadMeshFromLocalPlayer();
	P_NATIVE_END;
}
// ********** End Class UPlayerMeshComponent Function LoadMeshFromLocalPlayer **********************

// ********** Begin Class UPlayerMeshComponent *****************************************************
void UPlayerMeshComponent::StaticRegisterNativesUPlayerMeshComponent()
{
	UClass* Class = UPlayerMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadMeshFromLocalPlayer", &UPlayerMeshComponent::execLoadMeshFromLocalPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerMeshComponent;
UClass* UPlayerMeshComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerMeshComponent;
	if (!Z_Registration_Info_UClass_UPlayerMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerMeshComponent"),
			Z_Registration_Info_UClass_UPlayerMeshComponent.InnerSingleton,
			StaticRegisterNativesUPlayerMeshComponent,
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
	return Z_Registration_Info_UClass_UPlayerMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerMeshComponent_NoRegister()
{
	return UPlayerMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Components/Player/PlayerMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/PlayerMeshComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMeshComponent_LoadMeshFromLocalPlayer, "LoadMeshFromLocalPlayer" }, // 1115261281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMeshComponent_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMeshComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton, Z_Construct_UClass_UPlayerMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMeshComponent.OuterSingleton;
}
UPlayerMeshComponent::UPlayerMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMeshComponent);
UPlayerMeshComponent::~UPlayerMeshComponent() {}
// ********** End Class UPlayerMeshComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMeshComponent, UPlayerMeshComponent::StaticClass, TEXT("UPlayerMeshComponent"), &Z_Registration_Info_UClass_UPlayerMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMeshComponent), 2659806275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h__Script_BashCore_2360338874(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_PlayerMeshComponent_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
