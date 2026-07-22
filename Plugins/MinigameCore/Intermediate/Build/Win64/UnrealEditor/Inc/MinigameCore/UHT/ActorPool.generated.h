// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPool.h"

#ifdef MINIGAMECORE_ActorPool_generated_h
#error "ActorPool.generated.h already included, missing '#pragma once' in ActorPool.h"
#endif
#define MINIGAMECORE_ActorPool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;

// ********** Begin Class UActorPool ***************************************************************
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReturnToPool); \
	DECLARE_FUNCTION(execGetActorFromPool); \
	DECLARE_FUNCTION(execGetActorFromPoolTyped); \
	DECLARE_FUNCTION(execGetPoolClass); \
	DECLARE_FUNCTION(execInitializePool);


MINIGAMECORE_API UClass* Z_Construct_UClass_UActorPool_NoRegister();

#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPool(); \
	friend struct Z_Construct_UClass_UActorPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UActorPool_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UActorPool_NoRegister) \
	DECLARE_SERIALIZER(UActorPool)


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPool(UActorPool&&) = delete; \
	UActorPool(const UActorPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorPool) \
	NO_API virtual ~UActorPool();


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_9_PROLOG
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPool;

// ********** End Class UActorPool *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
