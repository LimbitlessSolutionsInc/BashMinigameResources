// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/UIInputComponent.h"

#ifdef BASHCORE_UIInputComponent_generated_h
#error "UIInputComponent.generated.h already included, missing '#pragma once' in UIInputComponent.h"
#endif
#define BASHCORE_UIInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ABashPlayerController;
class UMenu;
class UUserWidget;
class UWidget;

// ********** Begin Delegate FUIInputSignature *****************************************************
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_18_DELEGATE \
BASHCORE_API void FUIInputSignature_DelegateWrapper(const FMulticastScriptDelegate& UIInputSignature, ABashPlayerController* FromPlayer);


// ********** End Delegate FUIInputSignature *******************************************************

// ********** Begin Class UMenuStackContext ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister();

#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuStackContext(); \
	friend struct Z_Construct_UClass_UMenuStackContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuStackContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UMenuStackContext_NoRegister) \
	DECLARE_SERIALIZER(UMenuStackContext)


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStackContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuStackContext(UMenuStackContext&&) = delete; \
	UMenuStackContext(const UMenuStackContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStackContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStackContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStackContext) \
	NO_API virtual ~UMenuStackContext();


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_24_PROLOG
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuStackContext;

// ********** End Class UMenuStackContext **********************************************************

// ********** Begin Class UUIInputComponent ********************************************************
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execStartButtonPressed); \
	DECLARE_FUNCTION(execNavigateRight); \
	DECLARE_FUNCTION(execNavigateLeft); \
	DECLARE_FUNCTION(execNavigateDown); \
	DECLARE_FUNCTION(execNavigateUp); \
	DECLARE_FUNCTION(execGetFocusWidget); \
	DECLARE_FUNCTION(execFocusWidget); \
	DECLARE_FUNCTION(execCloseAllMenus); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execOpenMenu);


BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister();

#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputComponent(); \
	friend struct Z_Construct_UClass_UUIInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UUIInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UUIInputComponent)


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIInputComponent(UUIInputComponent&&) = delete; \
	UUIInputComponent(const UUIInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIInputComponent) \
	NO_API virtual ~UUIInputComponent();


#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_44_PROLOG
#define FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIInputComponent;

// ********** End Class UUIInputComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
