// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorPool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UActorPool();
MINIGAMECORE_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorPool Function GetActorFromPool *************************************
struct Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics
{
	struct ActorPool_eventGetActorFromPool_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventGetActorFromPool_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "GetActorFromPool", Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::ActorPool_eventGetActorFromPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::ActorPool_eventGetActorFromPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_GetActorFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_GetActorFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execGetActorFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActorFromPool();
	P_NATIVE_END;
}
// ********** End Class UActorPool Function GetActorFromPool ***************************************

// ********** Begin Class UActorPool Function GetActorFromPoolTyped ********************************
struct Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics
{
	struct ActorPool_eventGetActorFromPoolTyped_Parms
	{
		TSubclassOf<AActor> Class;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "Class" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventGetActorFromPoolTyped_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventGetActorFromPoolTyped_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "GetActorFromPoolTyped", Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::ActorPool_eventGetActorFromPoolTyped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::ActorPool_eventGetActorFromPoolTyped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execGetActorFromPoolTyped)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActorFromPoolTyped(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UActorPool Function GetActorFromPoolTyped **********************************

// ********** Begin Class UActorPool Function GetPoolClass *****************************************
struct Z_Construct_UFunction_UActorPool_GetPoolClass_Statics
{
	struct ActorPool_eventGetPoolClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventGetPoolClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "GetPoolClass", Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::ActorPool_eventGetPoolClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::ActorPool_eventGetPoolClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_GetPoolClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_GetPoolClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execGetPoolClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetPoolClass();
	P_NATIVE_END;
}
// ********** End Class UActorPool Function GetPoolClass *******************************************

// ********** Begin Class UActorPool Function InitializePool ***************************************
struct Z_Construct_UFunction_UActorPool_InitializePool_Statics
{
	struct ActorPool_eventInitializePool_Parms
	{
		TSubclassOf<AActor> ActorClass;
		int32 Count;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventInitializePool_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventInitializePool_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventInitializePool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_InitializePool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_InitializePool_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_InitializePool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_InitializePool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "InitializePool", Z_Construct_UFunction_UActorPool_InitializePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_InitializePool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_InitializePool_Statics::ActorPool_eventInitializePool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_InitializePool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_InitializePool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_InitializePool_Statics::ActorPool_eventInitializePool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_InitializePool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_InitializePool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execInitializePool)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePool(Z_Param_ActorClass,Z_Param_Count,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UActorPool Function InitializePool *****************************************

// ********** Begin Class UActorPool Function ReturnToPool *****************************************
struct Z_Construct_UFunction_UActorPool_ReturnToPool_Statics
{
	struct ActorPool_eventReturnToPool_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventReturnToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "ReturnToPool", Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::ActorPool_eventReturnToPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::ActorPool_eventReturnToPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_ReturnToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_ReturnToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execReturnToPool)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnToPool(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UActorPool Function ReturnToPool *******************************************

// ********** Begin Class UActorPool ***************************************************************
void UActorPool::StaticRegisterNativesUActorPool()
{
	UClass* Class = UActorPool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorFromPool", &UActorPool::execGetActorFromPool },
		{ "GetActorFromPoolTyped", &UActorPool::execGetActorFromPoolTyped },
		{ "GetPoolClass", &UActorPool::execGetPoolClass },
		{ "InitializePool", &UActorPool::execInitializePool },
		{ "ReturnToPool", &UActorPool::execReturnToPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorPool;
UClass* UActorPool::GetPrivateStaticClass()
{
	using TClass = UActorPool;
	if (!Z_Registration_Info_UClass_UActorPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorPool"),
			Z_Registration_Info_UClass_UActorPool.InnerSingleton,
			StaticRegisterNativesUActorPool,
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
	return Z_Registration_Info_UClass_UActorPool.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorPool_NoRegister()
{
	return UActorPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorPool_GetActorFromPool, "GetActorFromPool" }, // 2011851233
		{ &Z_Construct_UFunction_UActorPool_GetActorFromPoolTyped, "GetActorFromPoolTyped" }, // 3338459547
		{ &Z_Construct_UFunction_UActorPool_GetPoolClass, "GetPoolClass" }, // 3804244485
		{ &Z_Construct_UFunction_UActorPool_InitializePool, "InitializePool" }, // 4084099216
		{ &Z_Construct_UFunction_UActorPool_ReturnToPool, "ReturnToPool" }, // 2022388682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_MetaData), NewProp_Pool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_Pool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_Pool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPool_Statics::ClassParams = {
	&UActorPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorPool()
{
	if (!Z_Registration_Info_UClass_UActorPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPool.OuterSingleton, Z_Construct_UClass_UActorPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPool.OuterSingleton;
}
UActorPool::UActorPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPool);
UActorPool::~UActorPool() {}
// ********** End Class UActorPool *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorPool, UActorPool::StaticClass, TEXT("UActorPool"), &Z_Registration_Info_UClass_UActorPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPool), 3123306227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h__Script_MinigameCore_3589213099(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_MinigameCore_Source_MinigameCore_Public_ActorPool_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
