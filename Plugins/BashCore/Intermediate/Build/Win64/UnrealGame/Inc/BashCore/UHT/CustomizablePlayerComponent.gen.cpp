// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/CustomizablePlayerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomizablePlayerComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent();
BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomizablePlayerComponent *********************************************
void UCustomizablePlayerComponent::StaticRegisterNativesUCustomizablePlayerComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomizablePlayerComponent;
UClass* UCustomizablePlayerComponent::GetPrivateStaticClass()
{
	using TClass = UCustomizablePlayerComponent;
	if (!Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomizablePlayerComponent"),
			Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton,
			StaticRegisterNativesUCustomizablePlayerComponent,
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
	return Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister()
{
	return UCustomizablePlayerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomizablePlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Player/CustomizablePlayerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizablePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizablePlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomizablePlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCustomizableSkeletalComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizablePlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizablePlayerComponent_Statics::ClassParams = {
	&UCustomizablePlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizablePlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizablePlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomizablePlayerComponent()
{
	if (!Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton, Z_Construct_UClass_UCustomizablePlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizablePlayerComponent);
UCustomizablePlayerComponent::~UCustomizablePlayerComponent() {}
// ********** End Class UCustomizablePlayerComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizablePlayerComponent, UCustomizablePlayerComponent::StaticClass, TEXT("UCustomizablePlayerComponent"), &Z_Registration_Info_UClass_UCustomizablePlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizablePlayerComponent), 1939897096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_3865558600(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
