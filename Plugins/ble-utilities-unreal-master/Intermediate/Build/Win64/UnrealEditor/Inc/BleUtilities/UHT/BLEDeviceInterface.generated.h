// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/BLEDeviceInterface.h"

#ifdef BLEUTILITIES_BLEDeviceInterface_generated_h
#error "BLEDeviceInterface.generated.h already included, missing '#pragma once' in BLEDeviceInterface.h"
#endif
#define BLEUTILITIES_BLEDeviceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBLEDeviceInterface **************************************************
BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEDeviceInterface_NoRegister();

#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBLEDeviceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBLEDeviceInterface(UBLEDeviceInterface&&) = delete; \
	UBLEDeviceInterface(const UBLEDeviceInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBLEDeviceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBLEDeviceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBLEDeviceInterface) \
	virtual ~UBLEDeviceInterface() = default;


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBLEDeviceInterface(); \
	friend struct Z_Construct_UClass_UBLEDeviceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLEUTILITIES_API UClass* Z_Construct_UClass_UBLEDeviceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBLEDeviceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleUtilities"), Z_Construct_UClass_UBLEDeviceInterface_NoRegister) \
	DECLARE_SERIALIZER(UBLEDeviceInterface)


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBLEDeviceInterface() {} \
public: \
	typedef UBLEDeviceInterface UClassType; \
	typedef IBLEDeviceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_17_PROLOG
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBLEDeviceInterface;

// ********** End Interface UBLEDeviceInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_ble_utilities_unreal_master_Source_BleUtilities_Public_Interface_BLEDeviceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
