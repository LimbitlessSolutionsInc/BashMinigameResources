// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Components/Player/UIInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIInputComponent() {}
// Cross Module References
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
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics
	{
		struct _Script_BashCore_eventUIInputSignature_Parms
		{
			ABashPlayerController* FromPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer = { "FromPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_BashCore_eventUIInputSignature_Parms, FromPlayer), Z_Construct_UClass_ABashPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::NewProp_FromPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BashCore, nullptr, "UIInputSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::_Script_BashCore_eventUIInputSignature_Parms), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMenuStackContext::StaticRegisterNativesUMenuStackContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuStackContext);
	UClass* Z_Construct_UClass_UMenuStackContext_NoRegister()
	{
		return UMenuStackContext::StaticClass();
	}
	struct Z_Construct_UClass_UMenuStackContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuStackContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n * Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu.\n*/" },
		{ "IncludePath", "Components/Player/UIInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.\n* Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuStackContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuStackContext>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStackContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuStackContext()
	{
		if (!Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton, Z_Construct_UClass_UMenuStackContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenuStackContext.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UMenuStackContext>()
	{
		return UMenuStackContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuStackContext);
	UMenuStackContext::~UMenuStackContext() {}
	DEFINE_FUNCTION(UUIInputComponent::execBackButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execStartButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execNavigateRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execNavigateLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execNavigateDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execNavigateUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execFocusWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusWidget(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputComponent::execCloseAllMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAllMenus();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUIInputComponent::execOpenMenu)
	{
		P_GET_OBJECT(UMenu,Z_Param_menu);
		P_GET_UBOOL(Z_Param_clearMenuStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMenu(Z_Param_menu,Z_Param_clearMenuStack);
		P_NATIVE_END;
	}
	void UUIInputComponent::StaticRegisterNativesUUIInputComponent()
	{
		UClass* Class = UUIInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackButtonPressed", &UUIInputComponent::execBackButtonPressed },
			{ "CloseAllMenus", &UUIInputComponent::execCloseAllMenus },
			{ "CloseMenu", &UUIInputComponent::execCloseMenu },
			{ "FocusWidget", &UUIInputComponent::execFocusWidget },
			{ "NavigateDown", &UUIInputComponent::execNavigateDown },
			{ "NavigateLeft", &UUIInputComponent::execNavigateLeft },
			{ "NavigateRight", &UUIInputComponent::execNavigateRight },
			{ "NavigateUp", &UUIInputComponent::execNavigateUp },
			{ "OpenMenu", &UUIInputComponent::execOpenMenu },
			{ "StartButtonPressed", &UUIInputComponent::execStartButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "BackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_BackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_BackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "CloseAllMenus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_CloseAllMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_CloseAllMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics
	{
		struct UIInputComponent_eventCloseMenu_Parms
		{
			UMenu* menu;
			bool closeAll;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
		static void NewProp_closeAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_closeAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIInputComponent_eventCloseMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu_MetaData)) };
	void Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll_SetBit(void* Obj)
	{
		((UIInputComponent_eventCloseMenu_Parms*)Obj)->closeAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll = { "closeAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIInputComponent_eventCloseMenu_Parms), &Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::NewProp_closeAll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to close a menu. Will close all menus on top of it.\n\x09 * @param menu - The menu to close\n\x09 * \n\x09 */" },
		{ "CPP_Default_closeAll", "false" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Call to close a menu. Will close all menus on top of it.\n       * @param menu - The menu to close" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "CloseMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::UIInputComponent_eventCloseMenu_Parms), Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_CloseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_CloseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics
	{
		struct UIInputComponent_eventFocusWidget_Parms
		{
			UUserWidget* widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIInputComponent_eventFocusWidget_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "//Has User focus specific widget.\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Has User focus specific widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "FocusWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::UIInputComponent_eventFocusWidget_Parms), Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_FocusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_FocusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "NavigateUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_NavigateUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_NavigateUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics
	{
		struct UIInputComponent_eventOpenMenu_Parms
		{
			UMenu* menu;
			bool clearMenuStack;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_menu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_menu;
		static void NewProp_clearMenuStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clearMenuStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu = { "menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIInputComponent_eventOpenMenu_Parms, menu), Z_Construct_UClass_UMenu_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu_MetaData)) };
	void Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack_SetBit(void* Obj)
	{
		((UIInputComponent_eventOpenMenu_Parms*)Obj)->clearMenuStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack = { "clearMenuStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIInputComponent_eventOpenMenu_Parms), &Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::NewProp_clearMenuStack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/* Call to open a menu with this player as the controller.\n\x09 * @param menu - The menu to open\n\x09 * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Call to open a menu with this player as the controller.\n       * @param menu - The menu to open\n       * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "OpenMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::UIInputComponent_eventOpenMenu_Parms), Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_OpenMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_OpenMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputComponent, nullptr, "StartButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputComponent_StartButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIInputComponent_StartButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIInputComponent);
	UClass* Z_Construct_UClass_UUIInputComponent_NoRegister()
	{
		return UUIInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUIInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBackButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDownButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRightButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownNavigateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DownNavigateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpNavigateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpNavigateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftNavigateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftNavigateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightNavigateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightNavigateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MenuMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FocusedWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIInputComponent_BackButtonPressed, "BackButtonPressed" }, // 1226135529
		{ &Z_Construct_UFunction_UUIInputComponent_CloseAllMenus, "CloseAllMenus" }, // 3473772747
		{ &Z_Construct_UFunction_UUIInputComponent_CloseMenu, "CloseMenu" }, // 3137341756
		{ &Z_Construct_UFunction_UUIInputComponent_FocusWidget, "FocusWidget" }, // 298103923
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateDown, "NavigateDown" }, // 2641732302
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateLeft, "NavigateLeft" }, // 3395967501
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateRight, "NavigateRight" }, // 1415307255
		{ &Z_Construct_UFunction_UUIInputComponent_NavigateUp, "NavigateUp" }, // 4206454162
		{ &Z_Construct_UFunction_UUIInputComponent_OpenMenu, "OpenMenu" }, // 3017747244
		{ &Z_Construct_UFunction_UUIInputComponent_StartButtonPressed, "StartButtonPressed" }, // 3177189879
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Player/UIInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input Delegates\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed = { "OnSelectButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnSelectButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnSelectButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed = { "OnBackButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnBackButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnBackButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed = { "OnStartButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnStartButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnStartButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed = { "OnUpButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnUpButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnUpButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed = { "OnDownButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnDownButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnDownButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed = { "OnLeftButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnLeftButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnLeftButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed = { "OnRightButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OnRightButtonPressed), Z_Construct_UDelegateFunction_BashCore_UIInputSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OnRightButtonPressed_MetaData)) }; // 3073865626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input:\n//Input Actions:\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input:\nInput Actions:" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction = { "SelectAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, SelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_SelectAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction = { "BackAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, BackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_BackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction = { "StartAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, StartAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_StartAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction = { "DownNavigateAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, DownNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_DownNavigateAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction = { "UpNavigateAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, UpNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_UpNavigateAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction = { "LeftNavigateAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, LeftNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_LeftNavigateAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction = { "RightNavigateAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, RightNavigateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_RightNavigateAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input Mapping context:\n" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "Input Mapping context:" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext = { "MenuMappingContext", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, MenuMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget_MetaData[] = {
		{ "Comment", "//runtime fields\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
		{ "ToolTip", "runtime fields" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget = { "FocusedWidget", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, FocusedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_FocusedWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, OwningPlayer), Z_Construct_UClass_ABashPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_OwningPlayer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_Inner = { "MenuStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMenuStackContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Player/UIInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack = { "MenuStack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIInputComponent, MenuStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::NewProp_MenuStack_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIInputComponent>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UUIInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIInputComponent()
	{
		if (!Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton, Z_Construct_UClass_UUIInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIInputComponent.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<UUIInputComponent>()
	{
		return UUIInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIInputComponent);
	UUIInputComponent::~UUIInputComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenuStackContext, UMenuStackContext::StaticClass, TEXT("UMenuStackContext"), &Z_Registration_Info_UClass_UMenuStackContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuStackContext), 1582068682U) },
		{ Z_Construct_UClass_UUIInputComponent, UUIInputComponent::StaticClass, TEXT("UUIInputComponent"), &Z_Registration_Info_UClass_UUIInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIInputComponent), 3542529372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_2251373909(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
