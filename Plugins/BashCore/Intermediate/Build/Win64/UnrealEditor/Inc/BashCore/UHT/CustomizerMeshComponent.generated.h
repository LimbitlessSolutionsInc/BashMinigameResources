// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/CustomizerMeshComponent.h"

#ifdef BASHCORE_CustomizerMeshComponent_generated_h
#error "CustomizerMeshComponent.generated.h already included, missing '#pragma once' in CustomizerMeshComponent.h"
#endif
#define BASHCORE_CustomizerMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPlayerMeshData;

// ********** Begin Class UCustomizerMeshComponent *************************************************
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadMeshData); \
	DECLARE_FUNCTION(execGenerateMergeMesh);


BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister();

#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizerMeshComponent(); \
	friend struct Z_Construct_UClass_UCustomizerMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UCustomizerMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizerMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UCustomizerMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UCustomizerMeshComponent)


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizerMeshComponent(UCustomizerMeshComponent&&) = delete; \
	UCustomizerMeshComponent(const UCustomizerMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizerMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizerMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizerMeshComponent) \
	NO_API virtual ~UCustomizerMeshComponent();


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_18_PROLOG
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizerMeshComponent;

// ********** End Class UCustomizerMeshComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizerMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
