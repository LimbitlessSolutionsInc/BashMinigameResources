// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FMinigameStanding;
#ifdef MINIGAMECORE_MinigameSessionSubsystem_generated_h
#error "MinigameSessionSubsystem.generated.h already included, missing '#pragma once' in MinigameSessionSubsystem.h"
#endif
#define MINIGAMECORE_MinigameSessionSubsystem_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_11_DELEGATE \
struct _Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms \
{ \
	int32 ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FGetMinigamePlayerCountSignature_DelegateWrapper(const FScriptDelegate& GetMinigamePlayerCountSignature) \
{ \
	_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms Parms; \
	GetMinigamePlayerCountSignature.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMinigameReturnLevel); \
	DECLARE_FUNCTION(execSetMinigameReturnLevel); \
	DECLARE_FUNCTION(execGetPlayerCount); \
	DECLARE_FUNCTION(execSetPlayerCount); \
	DECLARE_FUNCTION(execGetMinigameResults);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMinigameReturnLevel); \
	DECLARE_FUNCTION(execSetMinigameReturnLevel); \
	DECLARE_FUNCTION(execGetPlayerCount); \
	DECLARE_FUNCTION(execSetPlayerCount); \
	DECLARE_FUNCTION(execGetMinigameResults);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinigameSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMinigameSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMinigameSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UMinigameSessionSubsystem)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMinigameSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMinigameSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMinigameSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UMinigameSessionSubsystem)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinigameSessionSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinigameSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinigameSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinigameSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMinigameSessionSubsystem(UMinigameSessionSubsystem&&); \
	NO_API UMinigameSessionSubsystem(const UMinigameSessionSubsystem&); \
public: \
	NO_API virtual ~UMinigameSessionSubsystem();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinigameSessionSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMinigameSessionSubsystem(UMinigameSessionSubsystem&&); \
	NO_API UMinigameSessionSubsystem(const UMinigameSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinigameSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinigameSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMinigameSessionSubsystem) \
	NO_API virtual ~UMinigameSessionSubsystem();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_16_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIGAMECORE_API UClass* StaticClass<class UMinigameSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
