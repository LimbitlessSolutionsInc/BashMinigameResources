// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/ControlDisplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlDisplay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FControlDisplay();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlDisplay;
class UScriptStruct* FControlDisplay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlDisplay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlDisplay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlDisplay, Z_Construct_UPackage__Script_MinigameCore(), TEXT("ControlDisplay"));
	}
	return Z_Registration_Info_UScriptStruct_ControlDisplay.OuterSingleton;
}
template<> MINIGAMECORE_API UScriptStruct* StaticStruct<FControlDisplay>()
{
	return FControlDisplay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlDisplay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlDisplay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ControlDisplay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlDisplay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlDisplay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image_MetaData[] = {
		{ "Category", "Control Display" },
		{ "Comment", "// The image that will be displayed in the instructions. Use to designate what the input is (button, flex, etc.)\n" },
		{ "ModuleRelativePath", "Public/ControlDisplay.h" },
		{ "ToolTip", "The image that will be displayed in the instructions. Use to designate what the input is (button, flex, etc.)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlDisplay, image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text_MetaData[] = {
		{ "Category", "Control Display" },
		{ "Comment", "// The text that will be displayed in the instructions. Describe what effect the input will have on the game or player.\n" },
		{ "ModuleRelativePath", "Public/ControlDisplay.h" },
		{ "ToolTip", "The text that will be displayed in the instructions. Describe what effect the input will have on the game or player." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlDisplay, text), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlDisplay_Statics::NewProp_text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlDisplay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
		nullptr,
		&NewStructOps,
		"ControlDisplay",
		sizeof(FControlDisplay),
		alignof(FControlDisplay),
		Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlDisplay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlDisplay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlDisplay()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlDisplay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlDisplay.InnerSingleton, Z_Construct_UScriptStruct_FControlDisplay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlDisplay.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_ControlDisplay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_ControlDisplay_h_Statics::ScriptStructInfo[] = {
		{ FControlDisplay::StaticStruct, Z_Construct_UScriptStruct_FControlDisplay_Statics::NewStructOps, TEXT("ControlDisplay"), &Z_Registration_Info_UScriptStruct_ControlDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlDisplay), 3376225717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_ControlDisplay_h_3175266033(TEXT("/Script/MinigameCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_ControlDisplay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_ControlDisplay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
