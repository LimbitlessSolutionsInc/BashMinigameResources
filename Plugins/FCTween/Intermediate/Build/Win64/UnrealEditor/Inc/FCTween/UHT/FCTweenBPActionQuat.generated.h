// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionQuat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UFCTweenBPActionQuat;
enum class EFCEase : uint8;
#ifdef FCTWEEN_FCTweenBPActionQuat_generated_h
#error "FCTweenBPActionQuat.generated.h already included, missing '#pragma once' in FCTweenBPActionQuat.h"
#endif
#define FCTWEEN_FCTweenBPActionQuat_generated_h

#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_9_DELEGATE \
struct _Script_FCTween_eventTweenUpdateQuatOutputPin_Parms \
{ \
	FQuat Value; \
}; \
static inline void FTweenUpdateQuatOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateQuatOutputPin, FQuat Value) \
{ \
	_Script_FCTween_eventTweenUpdateQuatOutputPin_Parms Parms; \
	Parms.Value=Value; \
	TweenUpdateQuatOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_SPARSE_DATA
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTweenQuatFromRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatFromRotator); \
	DECLARE_FUNCTION(execTweenQuat);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTweenQuatFromRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatFromRotator); \
	DECLARE_FUNCTION(execTweenQuat);


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ACCESSORS
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionQuat(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionQuat_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionQuat, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionQuat)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionQuat(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionQuat_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionQuat, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionQuat)


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionQuat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionQuat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionQuat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionQuat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionQuat(UFCTweenBPActionQuat&&); \
	NO_API UFCTweenBPActionQuat(const UFCTweenBPActionQuat&); \
public: \
	NO_API virtual ~UFCTweenBPActionQuat();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionQuat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionQuat(UFCTweenBPActionQuat&&); \
	NO_API UFCTweenBPActionQuat(const UFCTweenBPActionQuat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionQuat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionQuat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionQuat) \
	NO_API virtual ~UFCTweenBPActionQuat();


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_11_PROLOG
#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_SPARSE_DATA \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ACCESSORS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBPActionQuat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_OneDrive_Documents_Unreal_Projects_ShootingRange_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
