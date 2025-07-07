// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/UIInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIInputComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenu_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext();
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister();
BASHCORE_API UFunction* Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUIInputSignature *****************************************************
struct Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics
{
	struct _Script_BashCore_eventUIInputSignature_Parms
	{
		ABashPlayerController* FromPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer = { "FromPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BashCore_eventUIInputSignature_Parms, FromPlayer), Z_Construct_UClass_ABashPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BashCore, nullptr, "UIInputSignature__DelegateSignature", Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::_Script_BashCore_eventUIInputSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::_Script_BashCore_eventUIInputSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUIInputSignature_DelegateWrapper(const FMulticastScriptDelegate& UIInputSignature, ABashPlayerController* FromPlayer)
{
	struct _Script_BashCore_eventUIInputSignature_Parms
	{
		ABashPlayerController* FromPlayer;
	};
	_Script_BashCore_eventUIInputSignature_Parms Parms;
	Parms.FromPlayer=FromPlayer;
	UIInputSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUIInputSignature *******************************************************

// ********** Begin Class UMenuStackContext ********************************************************
void UMenuStackContext::StaticRegisterNativesUMenuStackContext()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuStackContext;
UClass* UMenuStackContext::GetPrivateStaticClass()
{
	using TClass = UMenuStackContext;
	if (!Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuStackContext"),
			Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton,
			StaticRegisterNativesUMenuStackContext,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMenuStackContext.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuStackContext_NoRegister()
{
	return UMenuStackContext::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuStackContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n * Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu.\n*/" },
		{ "IncludePath", "Components/Player/UIInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n* Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuStackContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMenuStackContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStackContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuStackContext_Statics::ClassParams = {
	&UMenuStackContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuStackContext()
{
	if (!Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton, Z_Construct_UClass_UMenuStackContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton;
}
UMenuStackContext::UMenuStackContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuStackContext);
UMenuStackContext::~UMenuStackContext() {}
// ********** End Class UMenuStackContext **********************************************************

// ********** Begin Class UUIInputComponent Function BackButtonPressed *****************************
struct Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "BackButtonPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_BackButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execBackButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BackButtonPressed();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function BackButtonPressed *******************************

// ********** Begin Class UUIInputComponent Function CloseAllMenus *********************************
struct Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "CloseAllMenus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_CloseAllMenus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execCloseAllMenus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseAllMenus();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function CloseAllMenus ***********************************

// ********** Begin Class UUIInputComponent Function CloseMenu *************************************
struct Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics
{
	struct UIInputComponent_eventCloseMenu_Parms
	{
		UMenu* menu;
		bool closeAll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to close a menu. Will close all menus on top of it.\n\x09 * @param menu - The menu to close\n\x09 * \n\x09 */" },
		{ "CPP_Default_closeAll", "false" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Call to close a menu. Will close all menus on top of it.\n       * @param menu - The menu to close" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
	static void NewProp_closeAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_closeAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponent_eventCloseMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_menu_MetaData), NewProp_menu_MetaData) };
void Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll_SetBit(void* Obj)
{
	((UIInputComponent_eventCloseMenu_Parms*)Obj)->closeAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll = { "closeAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIInputComponent_eventCloseMenu_Parms), &Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "CloseMenu", Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::UIInputComponent_eventCloseMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::UIInputComponent_eventCloseMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponent_CloseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execCloseMenu)
{
	P_GET_OBJECT(UMenu,Z_Param_menu);
	P_GET_UBOOL(Z_Param_closeAll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseMenu(Z_Param_menu,Z_Param_closeAll);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function CloseMenu ***************************************

// ********** Begin Class UUIInputComponent Function FocusWidget ***********************************
struct Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics
{
	struct UIInputComponent_eventFocusWidget_Parms
	{
		UUserWidget* widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "//Has User focus specific widget.\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Has User focus specific widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponent_eventFocusWidget_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "FocusWidget", Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::UIInputComponent_eventFocusWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::UIInputComponent_eventFocusWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponent_FocusWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execFocusWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusWidget(Z_Param_widget);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function FocusWidget *************************************

// ********** Begin Class UUIInputComponent Function GetFocusWidget ********************************
struct Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics
{
	struct UIInputComponent_eventGetFocusWidget_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponent_eventGetFocusWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "GetFocusWidget", Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::UIInputComponent_eventGetFocusWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::UIInputComponent_eventGetFocusWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponent_GetFocusWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_GetFocusWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execGetFocusWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetFocusWidget();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function GetFocusWidget **********************************

// ********** Begin Class UUIInputComponent Function NavigateDown **********************************
struct Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateDown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execNavigateDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NavigateDown();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function NavigateDown ************************************

// ********** Begin Class UUIInputComponent Function NavigateLeft **********************************
struct Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateLeft", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execNavigateLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NavigateLeft();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function NavigateLeft ************************************

// ********** Begin Class UUIInputComponent Function NavigateRight *********************************
struct Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateRight", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execNavigateRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NavigateRight();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function NavigateRight ***********************************

// ********** Begin Class UUIInputComponent Function NavigateUp ************************************
struct Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execNavigateUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NavigateUp();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function NavigateUp **************************************

// ********** Begin Class UUIInputComponent Function OpenMenu **************************************
struct Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics
{
	struct UIInputComponent_eventOpenMenu_Parms
	{
		UMenu* menu;
		bool clearMenuStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to open a menu with this player as the controller.\n\x09 * @param menu - The menu to open\n\x09 * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Call to open a menu with this player as the controller.\n       * @param menu - The menu to open\n       * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
	static void NewProp_clearMenuStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_clearMenuStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInputComponent_eventOpenMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_menu_MetaData), NewProp_menu_MetaData) };
void Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack_SetBit(void* Obj)
{
	((UIInputComponent_eventOpenMenu_Parms*)Obj)->clearMenuStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack = { "clearMenuStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIInputComponent_eventOpenMenu_Parms), &Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "OpenMenu", Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::UIInputComponent_eventOpenMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::UIInputComponent_eventOpenMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIInputComponent_OpenMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execOpenMenu)
{
	P_GET_OBJECT(UMenu,Z_Param_menu);
	P_GET_UBOOL(Z_Param_clearMenuStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenMenu(Z_Param_menu,Z_Param_clearMenuStack);
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function OpenMenu ****************************************

// ********** Begin Class UUIInputComponent Function StartButtonPressed ****************************
struct Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "StartButtonPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUIInputComponent_StartButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIInputComponent::execStartButtonPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartButtonPressed();
	P_NATIVE_END;
}
// ********** End Class UUIInputComponent Function StartButtonPressed ******************************

// ********** Begin Class UUIInputComponent ********************************************************
void UUIInputComponent::StaticRegisterNativesUUIInputComponent()
{
	UClass* Class = UUIInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BackButtonPressed", &UUIInputComponent::execBackButtonPressed },
		{ "CloseAllMenus", &UUIInputComponent::execCloseAllMenus },
		{ "CloseMenu", &UUIInputComponent::execCloseMenu },
		{ "FocusWidget", &UUIInputComponent::execFocusWidget },
		{ "GetFocusWidget", &UUIInputComponent::execGetFocusWidget },
		{ "NavigateDown", &UUIInputComponent::execNavigateDown },
		{ "NavigateLeft", &UUIInputComponent::execNavigateLeft },
		{ "NavigateRight", &UUIInputComponent::execNavigateRight },
		{ "NavigateUp", &UUIInputComponent::execNavigateUp },
		{ "OpenMenu", &UUIInputComponent::execOpenMenu },
		{ "StartButtonPressed", &UUIInputComponent::execStartButtonPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIInputComponent;
UClass* UUIInputComponent::GetPrivateStaticClass()
{
	using TClass = UUIInputComponent;
	if (!Z_Registration_Info_UClass_UUIInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIInputComponent"),
			Z_Registration_Info_UClass_UUIInputComponent.InnerSingleton,
			StaticRegisterNativesUUIInputComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUIInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIInputComponent_NoRegister()
{
	return UUIInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Player/UIInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input Delegates\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDownButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRightButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input:\n//Input Actions:\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input:\nInput Actions:" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input Mapping context:\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input Mapping context:" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedWidget_MetaData[] = {
		{ "Comment", "//runtime fields\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "runtime fields" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftButtonPressed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightButtonPressed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownNavigateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpNavigateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftNavigateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightNavigateAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIInputComponent_BackButtonPressed, "BackButtonPressed" }, // 894058687
		{ &Z_Construct_UFunction_UUIInputComponent_CloseAllMenus, "CloseAllMenus" }, // 1348371340
		{ &Z_Construct_UFunction_UUIInputComponent_CloseMenu, "CloseMenu" }, // 3365552045
		{ &Z_Construct_UFunction_UUIInputComponent_FocusWidget, "FocusWidget" }, // 3307711876
		{ &Z_Construct_UFunction_UUIInputComponent_GetFocusWidget, "GetFocusWidget" }, // 3038338308
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateDown, "NavigateDown" }, // 2569178754
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateLeft, "NavigateLeft" }, // 2922688387
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateRight, "NavigateRight" }, // 4213174726
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateUp, "NavigateUp" }, // 2774351449
		{ &Z_Construct_UFunction_UUIInputComponent_OpenMenu, "OpenMenu" }, // 3952153712
		{ &Z_Construct_UFunction_UUIInputComponent_StartButtonPressed, "StartButtonPressed" }, // 2385315693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed = { "OnSelectButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnSelectButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectButtonPressed_MetaData), NewProp_OnSelectButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed = { "OnBackButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnBackButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackButtonPressed_MetaData), NewProp_OnBackButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed = { "OnStartButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnStartButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartButtonPressed_MetaData), NewProp_OnStartButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed = { "OnUpButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnUpButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpButtonPressed_MetaData), NewProp_OnUpButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed = { "OnDownButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnDownButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDownButtonPressed_MetaData), NewProp_OnDownButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed = { "OnLeftButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnLeftButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftButtonPressed_MetaData), NewProp_OnLeftButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed = { "OnRightButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OnRightButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRightButtonPressed_MetaData), NewProp_OnRightButtonPressed_MetaData) }; // 4160662544
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction = { "SelectAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, SelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAction_MetaData), NewProp_SelectAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction = { "BackAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, BackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackAction_MetaData), NewProp_BackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction = { "StartAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, StartAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAction_MetaData), NewProp_StartAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction = { "DownNavigateAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, DownNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownNavigateAction_MetaData), NewProp_DownNavigateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction = { "UpNavigateAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, UpNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpNavigateAction_MetaData), NewProp_UpNavigateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction = { "LeftNavigateAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, LeftNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftNavigateAction_MetaData), NewProp_LeftNavigateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction = { "RightNavigateAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, RightNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightNavigateAction_MetaData), NewProp_RightNavigateAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext = { "MenuMappingContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, MenuMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuMappingContext_MetaData), NewProp_MenuMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget = { "FocusedWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, FocusedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedWidget_MetaData), NewProp_FocusedWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, OwningPlayer), Z_Construct_UClass_ABashPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_Inner = { "MenuStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMenuStackContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack = { "MenuStack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIInputComponent, MenuStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuStack_MetaData), NewProp_MenuStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIInputComponent_Statics::ClassParams = {
	&UUIInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIInputComponent()
{
	if (!Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton, Z_Construct_UClass_UUIInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIInputComponent);
UUIInputComponent::~UUIInputComponent() {}
// ********** End Class UUIInputComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuStackContext, UMenuStackContext::StaticClass, TEXT("UMenuStackContext"), &Z_Registration_Info_UClass_UMenuStackContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuStackContext), 866477904U) },
		{ Z_Construct_UClass_UUIInputComponent, UUIInputComponent::StaticClass, TEXT("UUIInputComponent"), &Z_Registration_Info_UClass_UUIInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIInputComponent), 2309172974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h__Script_BashCore_1591193211(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
