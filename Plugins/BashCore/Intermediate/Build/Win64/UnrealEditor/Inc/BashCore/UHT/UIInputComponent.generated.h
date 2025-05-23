// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/UIInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABashPlayerController;
class UMenu;
class UUserWidget;
#ifdef BASHCORE_UIInputComponent_generated_h
#error "UIInputComponent.generated.h already included, missing '#pragma once' in UIInputComponent.h"
#endif
#define BASHCORE_UIInputComponent_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_17_DELEGATE \
struct _Script_BashCore_eventUIInputSignature_Parms \
{ \
	ABashPlayerController* FromPlayer; \
}; \
static inline void FUIInputSignature_DelegateWrapper(const FMulticastScriptDelegate& UIInputSignature, ABashPlayerController* FromPlayer) \
{ \
	_Script_BashCore_eventUIInputSignature_Parms Parms; \
	Parms.FromPlayer=FromPlayer; \
	UIInputSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_RPC_WRAPPERS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuStackContext(); \
	friend struct Z_Construct_UClass_UMenuStackContext_Statics; \
public: \
	DECLARE_CLASS(UMenuStackContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UMenuStackContext)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMenuStackContext(); \
	friend struct Z_Construct_UClass_UMenuStackContext_Statics; \
public: \
	DECLARE_CLASS(UMenuStackContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UMenuStackContext)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStackContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStackContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStackContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStackContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuStackContext(UMenuStackContext&&); \
	NO_API UMenuStackContext(const UMenuStackContext&); \
public: \
	NO_API virtual ~UMenuStackContext();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStackContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuStackContext(UMenuStackContext&&); \
	NO_API UMenuStackContext(const UMenuStackContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStackContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStackContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStackContext) \
	NO_API virtual ~UMenuStackContext();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_23_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASHCORE_API UClass* StaticClass<class UMenuStackContext>();

#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execStartButtonPressed); \
	DECLARE_FUNCTION(execNavigateRight); \
	DECLARE_FUNCTION(execNavigateLeft); \
	DECLARE_FUNCTION(execNavigateDown); \
	DECLARE_FUNCTION(execNavigateUp); \
	DECLARE_FUNCTION(execFocusWidget); \
	DECLARE_FUNCTION(execCloseAllMenus); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execOpenMenu);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execStartButtonPressed); \
	DECLARE_FUNCTION(execNavigateRight); \
	DECLARE_FUNCTION(execNavigateLeft); \
	DECLARE_FUNCTION(execNavigateDown); \
	DECLARE_FUNCTION(execNavigateUp); \
	DECLARE_FUNCTION(execFocusWidget); \
	DECLARE_FUNCTION(execCloseAllMenus); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execOpenMenu);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputComponent(); \
	friend struct Z_Construct_UClass_UUIInputComponent_Statics; \
public: \
	DECLARE_CLASS(UUIInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UUIInputComponent)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUUIInputComponent(); \
	friend struct Z_Construct_UClass_UUIInputComponent_Statics; \
public: \
	DECLARE_CLASS(UUIInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UUIInputComponent)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIInputComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputComponent(UUIInputComponent&&); \
	NO_API UUIInputComponent(const UUIInputComponent&); \
public: \
	NO_API virtual ~UUIInputComponent();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputComponent(UUIInputComponent&&); \
	NO_API UUIInputComponent(const UUIInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIInputComponent) \
	NO_API virtual ~UUIInputComponent();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_43_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASHCORE_API UClass* StaticClass<class UUIInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
