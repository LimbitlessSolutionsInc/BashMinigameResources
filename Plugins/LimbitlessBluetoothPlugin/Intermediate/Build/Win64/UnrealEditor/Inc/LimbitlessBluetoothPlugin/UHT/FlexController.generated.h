// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlexController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIMBITLESSBLUETOOTHPLUGIN_FlexController_generated_h
#error "FlexController.generated.h already included, missing '#pragma once' in FlexController.h"
#endif
#define LIMBITLESSBLUETOOTHPLUGIN_FlexController_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_14_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms \
{ \
	float Value; \
}; \
static inline void FAnalogReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& AnalogReceivedFlexSignature, float Value) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms Parms; \
	Parms.Value=Value; \
	AnalogReceivedFlexSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_15_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms \
{ \
	FVector Value; \
}; \
static inline void FOnRotationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRotationReceivedSignature, FVector Value) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms Parms; \
	Parms.Value=Value; \
	OnRotationReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_16_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms \
{ \
	FVector Value; \
}; \
static inline void FOnAccelerationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationReceivedSignature, FVector Value) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms Parms; \
	Parms.Value=Value; \
	OnAccelerationReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_17_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms \
{ \
	FVector Value; \
}; \
static inline void FOnAngularVelocityReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAngularVelocityReceivedSignature, FVector Value) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms Parms; \
	Parms.Value=Value; \
	OnAngularVelocityReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_18_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms \
{ \
	int32 Level; \
}; \
static inline void FDiscreteReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteReceivedFlexSignature, int32 Level) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms Parms; \
	Parms.Level=Level; \
	DiscreteReceivedFlexSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_19_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms \
{ \
	int32 Level; \
}; \
static inline void FDiscreteThresholdReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteThresholdReachedSignature, int32 Level) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms Parms; \
	Parms.Level=Level; \
	DiscreteThresholdReachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_21_DELEGATE \
struct _Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms \
{ \
	float Duration; \
}; \
static inline void FOnCalibrationStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationStartedSignature, float Duration) \
{ \
	_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms Parms; \
	Parms.Duration=Duration; \
	OnCalibrationStartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_22_DELEGATE \
static inline void FOnCalibrationEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationEndedSignature) \
{ \
	OnCalibrationEndedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginFlexCalibration); \
	DECLARE_FUNCTION(execBeginIMUCalibration);


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginFlexCalibration); \
	DECLARE_FUNCTION(execBeginIMUCalibration);


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlexController(); \
	friend struct Z_Construct_UClass_UFlexController_Statics; \
public: \
	DECLARE_CLASS(UFlexController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LimbitlessBluetoothPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFlexController)


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFlexController(); \
	friend struct Z_Construct_UClass_UFlexController_Statics; \
public: \
	DECLARE_CLASS(UFlexController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LimbitlessBluetoothPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFlexController)


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlexController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlexController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlexController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlexController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlexController(UFlexController&&); \
	NO_API UFlexController(const UFlexController&); \
public: \
	NO_API virtual ~UFlexController();


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlexController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlexController(UFlexController&&); \
	NO_API UFlexController(const UFlexController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlexController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlexController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlexController) \
	NO_API virtual ~UFlexController();


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_26_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<class UFlexController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
