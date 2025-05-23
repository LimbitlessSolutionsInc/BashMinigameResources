// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformManager/Public/BluetoothManagerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBluetoothManagerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor();
	PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem();
	PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister();
	PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlatformManager();
// End Cross Module References
	DEFINE_FUNCTION(UBluetoothManagerSubsystem::execAssignControllerToPlayer)
	{
		P_GET_OBJECT(ALimbitlessPlayerController,Z_Param_player);
		P_GET_OBJECT(UFlexController,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignControllerToPlayer(Z_Param_player,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluetoothManagerSubsystem::execStopScan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopScan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluetoothManagerSubsystem::execStartScan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartScan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBluetoothManagerSubsystem::execGetColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EFlexColor>*)Z_Param__Result=P_THIS->GetColors();
		P_NATIVE_END;
	}
	void UBluetoothManagerSubsystem::StaticRegisterNativesUBluetoothManagerSubsystem()
	{
		UClass* Class = UBluetoothManagerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignControllerToPlayer", &UBluetoothManagerSubsystem::execAssignControllerToPlayer },
			{ "GetColors", &UBluetoothManagerSubsystem::execGetColors },
			{ "StartScan", &UBluetoothManagerSubsystem::execStartScan },
			{ "StopScan", &UBluetoothManagerSubsystem::execStopScan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics
	{
		struct BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms
		{
			ALimbitlessPlayerController* player;
			UFlexController* device;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms, player), Z_Construct_UClass_ALimbitlessPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms, device), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assignment" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "AssignControllerToPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms), Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics
	{
		struct BluetoothManagerSubsystem_eventGetColors_Parms
		{
			TArray<EFlexColor> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(nullptr, 0) }; // 1823751619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BluetoothManagerSubsystem_eventGetColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_MetaData)) }; // 1823751619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// Gets all the colors that can be assigned to devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Gets all the colors that can be assigned to devices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "GetColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::BluetoothManagerSubsystem_eventGetColors_Parms), Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanning" },
		{ "Comment", "// Starts a bluetooth scan\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Starts a bluetooth scan" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "StartScan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanning" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "StopScan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBluetoothManagerSubsystem);
	UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister()
	{
		return UBluetoothManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBluetoothManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnpairedFlexDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnpairedFlexDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnpairedFlexDevices;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PairedFlexDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PairedFlexDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PairedFlexDevices;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedControllers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceColors_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BLEManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BLEManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer, "AssignControllerToPlayer" }, // 4031402968
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors, "GetColors" }, // 464205245
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan, "StartScan" }, // 1680402902
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan, "StopScan" }, // 614828238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BluetoothManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_Inner = { "UnpairedFlexDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "Comment", "// Information about connected devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Information about connected devices" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices = { "UnpairedFlexDevices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluetoothManagerSubsystem, UnpairedFlexDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_Inner = { "PairedFlexDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices = { "PairedFlexDevices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluetoothManagerSubsystem, PairedFlexDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_Inner = { "ConnectedControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers = { "ConnectedControllers", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluetoothManagerSubsystem, ConnectedControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner = { "DeviceColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(nullptr, 0) }; // 1823751619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_MetaData[] = {
		{ "BlueprintGetter", "GetColors" },
		{ "Category", "Assignment" },
		{ "Comment", "// Colors automatically assigned to flex devices in order of connection. \n// First color is reserved for unassigned players and isn't assigned to flex devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Colors automatically assigned to flex devices in order of connection.\nFirst color is reserved for unassigned players and isn't assigned to flex devices" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors = { "DeviceColors", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluetoothManagerSubsystem, DeviceColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_MetaData)) }; // 1823751619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager_MetaData[] = {
		{ "Comment", "// --------------------\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager = { "BLEManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluetoothManagerSubsystem, BLEManager), Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBluetoothManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::ClassParams = {
		&UBluetoothManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBluetoothManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton, Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton;
	}
	template<> PLATFORMMANAGER_API UClass* StaticClass<UBluetoothManagerSubsystem>()
	{
		return UBluetoothManagerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBluetoothManagerSubsystem);
	UBluetoothManagerSubsystem::~UBluetoothManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBluetoothManagerSubsystem, UBluetoothManagerSubsystem::StaticClass, TEXT("UBluetoothManagerSubsystem"), &Z_Registration_Info_UClass_UBluetoothManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluetoothManagerSubsystem), 3120940759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_1347719500(TEXT("/Script/PlatformManager"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
