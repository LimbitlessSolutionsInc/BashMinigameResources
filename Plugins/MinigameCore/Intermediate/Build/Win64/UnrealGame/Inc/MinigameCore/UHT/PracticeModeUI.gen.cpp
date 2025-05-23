// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/Widgets/PracticeModeUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeModeUI() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UPracticeModeUI();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UPracticeModeUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	DEFINE_FUNCTION(UPracticeModeUI::execGetTextSize)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetTextSize(Z_Param_Text);
		P_NATIVE_END;
	}
	struct PracticeModeUI_eventGetPreviewWindow_Parms
	{
		UPanelWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		PracticeModeUI_eventGetPreviewWindow_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UPracticeModeUI_EndResetEffect = FName(TEXT("EndResetEffect"));
	void UPracticeModeUI::EndResetEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPracticeModeUI_EndResetEffect),NULL);
	}
	static FName NAME_UPracticeModeUI_GetPreviewWindow = FName(TEXT("GetPreviewWindow"));
	UPanelWidget* UPracticeModeUI::GetPreviewWindow() const
	{
		PracticeModeUI_eventGetPreviewWindow_Parms Parms;
		const_cast<UPracticeModeUI*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPracticeModeUI_GetPreviewWindow),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPracticeModeUI_PlayResetEffect = FName(TEXT("PlayResetEffect"));
	void UPracticeModeUI::PlayResetEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPracticeModeUI_PlayResetEffect),NULL);
	}
	void UPracticeModeUI::StaticRegisterNativesUPracticeModeUI()
	{
		UClass* Class = UPracticeModeUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextSize", &UPracticeModeUI::execGetTextSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "EndResetEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPracticeModeUI_EndResetEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_EndResetEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PracticeModeUI_eventGetPreviewWindow_Parms, ReturnValue), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "GetPreviewWindow", nullptr, nullptr, sizeof(PracticeModeUI_eventGetPreviewWindow_Parms), Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics
	{
		struct PracticeModeUI_eventGetTextSize_Parms
		{
			const UTextBlock* Text;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PracticeModeUI_eventGetTextSize_Parms, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PracticeModeUI_eventGetTextSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "GetTextSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PracticeModeUI_eventGetTextSize_Parms), Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPracticeModeUI_GetTextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_GetTextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPracticeModeUI, nullptr, "PlayResetEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeModeUI);
	UClass* Z_Construct_UClass_UPracticeModeUI_NoRegister()
	{
		return UPracticeModeUI::StaticClass();
	}
	struct Z_Construct_UClass_UPracticeModeUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPracticeModeUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPracticeModeUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPracticeModeUI_EndResetEffect, "EndResetEffect" }, // 3451299333
		{ &Z_Construct_UFunction_UPracticeModeUI_GetPreviewWindow, "GetPreviewWindow" }, // 2827331198
		{ &Z_Construct_UFunction_UPracticeModeUI_GetTextSize, "GetTextSize" }, // 2086096075
		{ &Z_Construct_UFunction_UPracticeModeUI_PlayResetEffect, "PlayResetEffect" }, // 3668887848
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPracticeModeUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/PracticeModeUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/PracticeModeUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPracticeModeUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeModeUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeModeUI_Statics::ClassParams = {
		&UPracticeModeUI::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPracticeModeUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeModeUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPracticeModeUI()
	{
		if (!Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton, Z_Construct_UClass_UPracticeModeUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPracticeModeUI.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UPracticeModeUI>()
	{
		return UPracticeModeUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeModeUI);
	UPracticeModeUI::~UPracticeModeUI() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeModeUI, UPracticeModeUI::StaticClass, TEXT("UPracticeModeUI"), &Z_Registration_Info_UClass_UPracticeModeUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeModeUI), 942846090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h_1148868296(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_PracticeModeUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
