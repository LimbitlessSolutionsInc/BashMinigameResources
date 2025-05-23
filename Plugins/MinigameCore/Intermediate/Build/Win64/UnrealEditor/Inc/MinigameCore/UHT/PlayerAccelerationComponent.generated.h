// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerAccelerationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIGAMECORE_PlayerAccelerationComponent_generated_h
#error "PlayerAccelerationComponent.generated.h already included, missing '#pragma once' in PlayerAccelerationComponent.h"
#endif
#define MINIGAMECORE_PlayerAccelerationComponent_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_13_DELEGATE \
static inline void FOnMovementTriggeredSignature_DelegateWrapper(const FScriptDelegate& OnMovementTriggeredSignature) \
{ \
	OnMovementTriggeredSignature.ProcessDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_14_DELEGATE \
struct _Script_MinigameCore_eventEvaluateMovementSignature_Parms \
{ \
	FVector CoordinateAcceleration; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_MinigameCore_eventEvaluateMovementSignature_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FEvaluateMovementSignature_DelegateWrapper(const FScriptDelegate& EvaluateMovementSignature, FVector CoordinateAcceleration) \
{ \
	_Script_MinigameCore_eventEvaluateMovementSignature_Parms Parms; \
	Parms.CoordinateAcceleration=CoordinateAcceleration; \
	EvaluateMovementSignature.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccelerationInputValue); \
	DECLARE_FUNCTION(execGetCoordinateAcceleration); \
	DECLARE_FUNCTION(execListenForMovement);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccelerationInputValue); \
	DECLARE_FUNCTION(execGetCoordinateAcceleration); \
	DECLARE_FUNCTION(execListenForMovement);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAccelerationComponent(); \
	friend struct Z_Construct_UClass_UPlayerAccelerationComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerAccelerationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAccelerationComponent)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAccelerationComponent(); \
	friend struct Z_Construct_UClass_UPlayerAccelerationComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerAccelerationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAccelerationComponent)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAccelerationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAccelerationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAccelerationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAccelerationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAccelerationComponent(UPlayerAccelerationComponent&&); \
	NO_API UPlayerAccelerationComponent(const UPlayerAccelerationComponent&); \
public: \
	NO_API virtual ~UPlayerAccelerationComponent();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAccelerationComponent(UPlayerAccelerationComponent&&); \
	NO_API UPlayerAccelerationComponent(const UPlayerAccelerationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAccelerationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAccelerationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAccelerationComponent) \
	NO_API virtual ~UPlayerAccelerationComponent();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_16_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIGAMECORE_API UClass* StaticClass<class UPlayerAccelerationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
