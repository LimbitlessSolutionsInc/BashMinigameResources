// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/BLEScannerInterface.h"

#ifdef BLEUTILITIES_BLEScannerInterface_generated_h
#error "BLEScannerInterface.generated.h already included, missing '#pragma once' in BLEScannerInterface.h"
#endif
#define BLEUTILITIES_BLEScannerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnAdvertisementReceivedDelegate **************************************
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_8_DELEGATE \
BLEUTILITIES_API void FOnAdvertisementReceivedDelegate_DelegateWrapper(const FScriptDelegate& OnAdvertisementReceivedDelegate, const FString& Name, TArray<uint8> const& data);


// ********** End Delegate FOnAdvertisementReceivedDelegate ****************************************

// ********** Begin Interface UBLEScannerInterface *************************************************
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execStartScan);


BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEScannerInterface_NoRegister();

#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBLEScannerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBLEScannerInterface(UBLEScannerInterface&&) = delete; \
	UBLEScannerInterface(const UBLEScannerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBLEScannerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBLEScannerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBLEScannerInterface) \
	virtual ~UBLEScannerInterface() = default;


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBLEScannerInterface(); \
	friend struct Z_Construct_UClass_UBLEScannerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEScannerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBLEScannerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleUtilities"), Z_Construct_UClass_UBLEScannerInterface_NoRegister) \
	DECLARE_SERIALIZER(UBLEScannerInterface)


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBLEScannerInterface() {} \
public: \
	typedef UBLEScannerInterface UClassType; \
	typedef IBLEScannerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_10_PROLOG
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBLEScannerInterface;

// ********** End Interface UBLEScannerInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEScannerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
