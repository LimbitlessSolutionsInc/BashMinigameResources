// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SelectableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASHCORE_SelectableWidget_generated_h
#error "SelectableWidget.generated.h already included, missing '#pragma once' in SelectableWidget.h"
#endif
#define BASHCORE_SelectableWidget_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS \
	virtual void OnSelected_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnSelected);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSelected_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnSelected);


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_CALLBACK_WRAPPERS
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASHCORE_API USelectableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASHCORE_API, USelectableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASHCORE_API USelectableWidget(USelectableWidget&&); \
	BASHCORE_API USelectableWidget(const USelectableWidget&); \
public: \
	BASHCORE_API virtual ~USelectableWidget();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASHCORE_API USelectableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASHCORE_API USelectableWidget(USelectableWidget&&); \
	BASHCORE_API USelectableWidget(const USelectableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASHCORE_API, USelectableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectableWidget) \
	BASHCORE_API virtual ~USelectableWidget();


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectableWidget(); \
	friend struct Z_Construct_UClass_USelectableWidget_Statics; \
public: \
	DECLARE_CLASS(USelectableWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BashCore"), BASHCORE_API) \
	DECLARE_SERIALIZER(USelectableWidget)


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectableWidget() {} \
public: \
	typedef USelectableWidget UClassType; \
	typedef ISelectableWidget ThisClass; \
	static void Execute_OnSelected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISelectableWidget() {} \
public: \
	typedef USelectableWidget UClassType; \
	typedef ISelectableWidget ThisClass; \
	static void Execute_OnSelected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_10_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASHCORE_API UClass* StaticClass<class USelectableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
