// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCore/Public/Widgets/SelectableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectableWidget() {}
// Cross Module References
	BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget();
	BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BashCore();
// End Cross Module References
	DEFINE_FUNCTION(ISelectableWidget::execOnSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelected_Implementation();
		P_NATIVE_END;
	}
	void ISelectableWidget::OnSelected()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelected instead.");
	}
	void USelectableWidget::StaticRegisterNativesUSelectableWidget()
	{
		UClass* Class = USelectableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelected", &ISelectableWidget::execOnSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectableWidget_OnSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "Comment", "//calling on selected will call cpp and blueprint version. Anything that the UI Controller can focus and interact with should either implement this or be a widget button.\n" },
		{ "ModuleRelativePath", "Public/Widgets/SelectableWidget.h" },
		{ "ToolTip", "calling on selected will call cpp and blueprint version. Anything that the UI Controller can focus and interact with should either implement this or be a widget button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectableWidget, nullptr, "OnSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectableWidget_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectableWidget_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectableWidget);
	UClass* Z_Construct_UClass_USelectableWidget_NoRegister()
	{
		return USelectableWidget::StaticClass();
	}
	struct Z_Construct_UClass_USelectableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectableWidget_OnSelected, "OnSelected" }, // 1715026839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectableWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SelectableWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectableWidget_Statics::ClassParams = {
		&USelectableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USelectableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectableWidget()
	{
		if (!Z_Registration_Info_UClass_USelectableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectableWidget.OuterSingleton, Z_Construct_UClass_USelectableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectableWidget.OuterSingleton;
	}
	template<> BASHCORE_API UClass* StaticClass<USelectableWidget>()
	{
		return USelectableWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectableWidget);
	USelectableWidget::~USelectableWidget() {}
	static FName NAME_USelectableWidget_OnSelected = FName(TEXT("OnSelected"));
	void ISelectableWidget::Execute_OnSelected(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USelectableWidget::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USelectableWidget_OnSelected);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISelectableWidget*)(O->GetNativeInterfaceAddress(USelectableWidget::StaticClass())))
		{
			I->OnSelected_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectableWidget, USelectableWidget::StaticClass, TEXT("USelectableWidget"), &Z_Registration_Info_UClass_USelectableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectableWidget), 2373500408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_3976262363(TEXT("/Script/BashCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
