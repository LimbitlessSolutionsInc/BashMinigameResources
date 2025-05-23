// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CircularWipeWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCircleWipeParams;
#ifdef BASHCORE_CircularWipeWidget_generated_h
#error "CircularWipeWidget.generated.h already included, missing '#pragma once' in CircularWipeWidget.h"
#endif
#define BASHCORE_CircularWipeWidget_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_13_DELEGATE \
static inline void FOnWipeFilledSignature_DelegateWrapper(const FScriptDelegate& OnWipeFilledSignature) \
{ \
	OnWipeFilledSignature.ProcessDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCircleWipeParams_Statics; \
	BASHCORE_API static class UScriptStruct* StaticStruct();


template<> BASHCORE_API UScriptStruct* StaticStruct<struct FCircleWipeParams>();

#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallDelegate); \
	DECLARE_FUNCTION(execPlayFullWipe); \
	DECLARE_FUNCTION(execFadeFromBlack); \
	DECLARE_FUNCTION(execStartWipe);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallDelegate); \
	DECLARE_FUNCTION(execPlayFullWipe); \
	DECLARE_FUNCTION(execFadeFromBlack); \
	DECLARE_FUNCTION(execStartWipe);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_CALLBACK_WRAPPERS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCircularWipeWidget(); \
	friend struct Z_Construct_UClass_UCircularWipeWidget_Statics; \
public: \
	DECLARE_CLASS(UCircularWipeWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UCircularWipeWidget)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCircularWipeWidget(); \
	friend struct Z_Construct_UClass_UCircularWipeWidget_Statics; \
public: \
	DECLARE_CLASS(UCircularWipeWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), NO_API) \
	DECLARE_SERIALIZER(UCircularWipeWidget)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularWipeWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularWipeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularWipeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularWipeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularWipeWidget(UCircularWipeWidget&&); \
	NO_API UCircularWipeWidget(const UCircularWipeWidget&); \
public: \
	NO_API virtual ~UCircularWipeWidget();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularWipeWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCircularWipeWidget(UCircularWipeWidget&&); \
	NO_API UCircularWipeWidget(const UCircularWipeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularWipeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularWipeWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularWipeWidget) \
	NO_API virtual ~UCircularWipeWidget();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_28_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASHCORE_API UClass* StaticClass<class UCircularWipeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
