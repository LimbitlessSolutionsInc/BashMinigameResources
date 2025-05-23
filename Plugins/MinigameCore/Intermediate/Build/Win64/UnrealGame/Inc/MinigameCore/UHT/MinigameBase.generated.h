// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMinigameCapture;
class AMinigamePlayer;
class UBasePointCounter;
enum class EMinigameType : uint8;
#ifdef MINIGAMECORE_MinigameBase_generated_h
#error "MinigameBase.generated.h already included, missing '#pragma once' in MinigameBase.h"
#endif
#define MINIGAMECORE_MinigameBase_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_23_DELEGATE \
static inline void FGameStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameStartedSignature) \
{ \
	GameStartedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_24_DELEGATE \
static inline void FGameEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameEndedSignature) \
{ \
	GameEndedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_25_DELEGATE \
static inline void FGameResetSignature_DelegateWrapper(const FMulticastScriptDelegate& GameResetSignature) \
{ \
	GameResetSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_26_DELEGATE \
static inline void FPracticeModeEndSignature_DelegateWrapper(const FMulticastScriptDelegate& PracticeModeEndSignature) \
{ \
	PracticeModeEndSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointCounter); \
	DECLARE_FUNCTION(execGetTeamType); \
	DECLARE_FUNCTION(execIsInProgress); \
	DECLARE_FUNCTION(execIsPractice); \
	DECLARE_FUNCTION(execGetInstanceNumPlayers); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execSetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execGetNumCameraSplits); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execCheckReady); \
	DECLARE_FUNCTION(execReadyPlayer);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointCounter); \
	DECLARE_FUNCTION(execGetTeamType); \
	DECLARE_FUNCTION(execIsInProgress); \
	DECLARE_FUNCTION(execIsPractice); \
	DECLARE_FUNCTION(execGetInstanceNumPlayers); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execSetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execGetNumCameraSplits); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execCheckReady); \
	DECLARE_FUNCTION(execReadyPlayer);


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameBase(); \
	friend struct Z_Construct_UClass_AMinigameBase_Statics; \
public: \
	DECLARE_CLASS(AMinigameBase, ABashGamemode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(AMinigameBase)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAMinigameBase(); \
	friend struct Z_Construct_UClass_AMinigameBase_Statics; \
public: \
	DECLARE_CLASS(AMinigameBase, ABashGamemode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), NO_API) \
	DECLARE_SERIALIZER(AMinigameBase)


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinigameBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinigameBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinigameBase(AMinigameBase&&); \
	NO_API AMinigameBase(const AMinigameBase&); \
public: \
	NO_API virtual ~AMinigameBase();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinigameBase(AMinigameBase&&); \
	NO_API AMinigameBase(const AMinigameBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameBase) \
	NO_API virtual ~AMinigameBase();


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_35_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIGAMECORE_API UClass* StaticClass<class AMinigameBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
