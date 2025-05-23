// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePointCounter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIGAMECORE_BasePointCounter_generated_h
#error "BasePointCounter.generated.h already included, missing '#pragma once' in BasePointCounter.h"
#endif
#define MINIGAMECORE_BasePointCounter_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_13_DELEGATE \
struct _Script_MinigameCore_eventPointsChanged_Parms \
{ \
	int32 Team; \
	int32 Amount; \
}; \
static inline void FPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& PointsChanged, int32 Team, int32 Amount) \
{ \
	_Script_MinigameCore_eventPointsChanged_Parms Parms; \
	Parms.Team=Team; \
	Parms.Amount=Amount; \
	PointsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointsByPlayer); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execAddPoints);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointsByPlayer); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execAddPoints);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePointCounter(); \
	friend struct Z_Construct_UClass_UBasePointCounter_Statics; \
public: \
	DECLARE_CLASS(UBasePointCounter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UBasePointCounter)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBasePointCounter(); \
	friend struct Z_Construct_UClass_UBasePointCounter_Statics; \
public: \
	DECLARE_CLASS(UBasePointCounter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(UBasePointCounter)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePointCounter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePointCounter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePointCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePointCounter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePointCounter(UBasePointCounter&&); \
	NO_API UBasePointCounter(const UBasePointCounter&); \
public: \
	NO_API virtual ~UBasePointCounter();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePointCounter(UBasePointCounter&&); \
	NO_API UBasePointCounter(const UBasePointCounter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePointCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePointCounter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasePointCounter) \
	NO_API virtual ~UBasePointCounter();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_15_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIGAMECORE_API UClass* StaticClass<class UBasePointCounter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
