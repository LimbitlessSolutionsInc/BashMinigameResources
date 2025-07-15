// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BashPlayerController.h"

#ifdef BASHCORE_BashPlayerController_generated_h
#error "BashPlayerController.generated.h already included, missing '#pragma once' in BashPlayerController.h"
#endif
#define BASHCORE_BashPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBashLocalPlayer;

// ********** Begin Class ABashPlayerController ****************************************************
#define FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBashLocalPlayer);


BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController_NoRegister();

#define FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABashPlayerController(); \
	friend struct Z_Construct_UClass_ABashPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ABashPlayerController, ALimbitlessPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_ABashPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ABashPlayerController)


#define FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABashPlayerController(ABashPlayerController&&) = delete; \
	ABashPlayerController(const ABashPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABashPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABashPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABashPlayerController) \
	NO_API virtual ~ABashPlayerController();


#define FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_18_PROLOG
#define FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABashPlayerController;

// ********** End Class ABashPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_PackagePlugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
