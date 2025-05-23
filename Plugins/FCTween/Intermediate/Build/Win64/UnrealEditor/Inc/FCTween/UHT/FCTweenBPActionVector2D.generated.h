// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionVector2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UFCTweenBPActionVector2D;
enum class EFCEase : uint8;
#ifdef FCTWEEN_FCTweenBPActionVector2D_generated_h
#error "FCTweenBPActionVector2D.generated.h already included, missing '#pragma once' in FCTweenBPActionVector2D.h"
#endif
#define FCTWEEN_FCTweenBPActionVector2D_generated_h

#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_9_DELEGATE \
struct _Script_FCTween_eventTweenUpdateVector2DOutputPin_Parms \
{ \
	FVector2D Value; \
}; \
static inline void FTweenUpdateVector2DOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateVector2DOutputPin, FVector2D Value) \
{ \
	_Script_FCTween_eventTweenUpdateVector2DOutputPin_Parms Parms; \
	Parms.Value=Value; \
	TweenUpdateVector2DOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_SPARSE_DATA
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTweenVector2DCustomCurve); \
	DECLARE_FUNCTION(execTweenVector2D);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTweenVector2DCustomCurve); \
	DECLARE_FUNCTION(execTweenVector2D);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_ACCESSORS
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionVector2D(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionVector2D_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionVector2D, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionVector2D)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionVector2D(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionVector2D_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionVector2D, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionVector2D)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionVector2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionVector2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionVector2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionVector2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionVector2D(UFCTweenBPActionVector2D&&); \
	NO_API UFCTweenBPActionVector2D(const UFCTweenBPActionVector2D&); \
public: \
	NO_API virtual ~UFCTweenBPActionVector2D();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionVector2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionVector2D(UFCTweenBPActionVector2D&&); \
	NO_API UFCTweenBPActionVector2D(const UFCTweenBPActionVector2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionVector2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionVector2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionVector2D) \
	NO_API virtual ~UFCTweenBPActionVector2D();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_11_PROLOG
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_RPC_WRAPPERS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_INCLASS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBPActionVector2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
