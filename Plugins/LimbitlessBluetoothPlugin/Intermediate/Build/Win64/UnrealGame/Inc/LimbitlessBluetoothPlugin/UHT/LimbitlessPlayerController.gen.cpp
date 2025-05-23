// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothPlugin/Public/BaseClasses/LimbitlessPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbitlessPlayerController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister();
	LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAcceleration)
	{
		P_GET_STRUCT(FVector,Z_Param_accel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcceleration(Z_Param_accel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAngularVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_vel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAngularVelocity(Z_Param_vel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALimbitlessPlayerController::execOnRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotation(Z_Param_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALimbitlessPlayerController::execOnDiscreteFlex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDiscreteFlex(Z_Param_level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAnalogFlex)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnalogFlex(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALimbitlessPlayerController::execFlexControllerConnected)
	{
		P_GET_OBJECT(UFlexController,Z_Param_FlexController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlexControllerConnected(Z_Param_FlexController);
		P_NATIVE_END;
	}
	void ALimbitlessPlayerController::StaticRegisterNativesALimbitlessPlayerController()
	{
		UClass* Class = ALimbitlessPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlexControllerConnected", &ALimbitlessPlayerController::execFlexControllerConnected },
			{ "OnAcceleration", &ALimbitlessPlayerController::execOnAcceleration },
			{ "OnAnalogFlex", &ALimbitlessPlayerController::execOnAnalogFlex },
			{ "OnAngularVelocity", &ALimbitlessPlayerController::execOnAngularVelocity },
			{ "OnDiscreteFlex", &ALimbitlessPlayerController::execOnDiscreteFlex },
			{ "OnRotation", &ALimbitlessPlayerController::execOnRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics
	{
		struct LimbitlessPlayerController_eventFlexControllerConnected_Parms
		{
			UFlexController* FlexController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventFlexControllerConnected_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::NewProp_FlexController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "FlexControllerConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::LimbitlessPlayerController_eventFlexControllerConnected_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics
	{
		struct LimbitlessPlayerController_eventOnAcceleration_Parms
		{
			FVector accel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_accel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::NewProp_accel = { "accel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAcceleration_Parms, accel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::NewProp_accel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAcceleration", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::LimbitlessPlayerController_eventOnAcceleration_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics
	{
		struct LimbitlessPlayerController_eventOnAnalogFlex_Parms
		{
			float val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAnalogFlex_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAnalogFlex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::LimbitlessPlayerController_eventOnAnalogFlex_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics
	{
		struct LimbitlessPlayerController_eventOnAngularVelocity_Parms
		{
			FVector vel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::NewProp_vel = { "vel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAngularVelocity_Parms, vel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::NewProp_vel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAngularVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::LimbitlessPlayerController_eventOnAngularVelocity_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics
	{
		struct LimbitlessPlayerController_eventOnDiscreteFlex_Parms
		{
			int32 level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventOnDiscreteFlex_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnDiscreteFlex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::LimbitlessPlayerController_eventOnDiscreteFlex_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics
	{
		struct LimbitlessPlayerController_eventOnRotation_Parms
		{
			FVector angle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LimbitlessPlayerController_eventOnRotation_Parms, angle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::NewProp_angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::LimbitlessPlayerController_eventOnRotation_Parms), Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALimbitlessPlayerController);
	UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister()
	{
		return ALimbitlessPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALimbitlessPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalogFlexAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnalogFlexAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightFlexAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightFlexAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumFlexAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediumFlexAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrongFlexAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrongFlexAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AngularVelocityAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AccelerationAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALimbitlessPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALimbitlessPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected, "FlexControllerConnected" }, // 1211773776
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration, "OnAcceleration" }, // 1465986631
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex, "OnAnalogFlex" }, // 2557704121
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity, "OnAngularVelocity" }, // 671155913
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex, "OnDiscreteFlex" }, // 822401576
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation, "OnRotation" }, // 2106794895
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseClasses/LimbitlessPlayerController.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction = { "AnalogFlexAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, AnalogFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction = { "LightFlexAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, LightFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction = { "MediumFlexAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, MediumFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction = { "StrongFlexAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, StrongFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction = { "RotationAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, RotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction = { "AngularVelocityAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, AngularVelocityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction = { "AccelerationAction", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALimbitlessPlayerController, AccelerationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALimbitlessPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALimbitlessPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::ClassParams = {
		&ALimbitlessPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALimbitlessPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALimbitlessPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton, Z_Construct_UClass_ALimbitlessPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton;
	}
	template<> LIMBITLESSBLUETOOTHPLUGIN_API UClass* StaticClass<ALimbitlessPlayerController>()
	{
		return ALimbitlessPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALimbitlessPlayerController);
	ALimbitlessPlayerController::~ALimbitlessPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALimbitlessPlayerController, ALimbitlessPlayerController::StaticClass, TEXT("ALimbitlessPlayerController"), &Z_Registration_Info_UClass_ALimbitlessPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALimbitlessPlayerController), 2948304492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h_3581750265(TEXT("/Script/LimbitlessBluetoothPlugin"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
