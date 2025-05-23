// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/BasePointCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePointCounter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MinigameCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics
	{
		struct _Script_MinigameCore_eventPointsChanged_Parms
		{
			int32 Team;
			int32 Amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinigameCore_eventPointsChanged_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MinigameCore_eventPointsChanged_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "PointsChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::_Script_MinigameCore_eventPointsChanged_Parms), Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBasePointCounter::execGetPointsByPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPointsByPlayer(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execGetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoints(Z_Param_Team);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execSetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoints(Z_Param_Team,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execAddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_Team,Z_Param_Amount);
		P_NATIVE_END;
	}
	void UBasePointCounter::StaticRegisterNativesUBasePointCounter()
	{
		UClass* Class = UBasePointCounter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &UBasePointCounter::execAddPoints },
			{ "GetPoints", &UBasePointCounter::execGetPoints },
			{ "GetPointsByPlayer", &UBasePointCounter::execGetPointsByPlayer },
			{ "SetPoints", &UBasePointCounter::execSetPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics
	{
		struct BasePointCounter_eventAddPoints_Parms
		{
			int32 Team;
			int32 Amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventAddPoints_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventAddPoints_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Adds points to the team's point counter. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Adds points to the team's point counter. In FFA, the player number is the team number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "AddPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::BasePointCounter_eventAddPoints_Parms), Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics
	{
		struct BasePointCounter_eventGetPoints_Parms
		{
			int32 Team;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventGetPoints_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Returns the current number of points of a team. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Returns the current number of points of a team. In FFA, the player number is the team number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::BasePointCounter_eventGetPoints_Parms), Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics
	{
		struct BasePointCounter_eventGetPointsByPlayer_Parms
		{
			int32 Player;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Player;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventGetPointsByPlayer_Parms, Player), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventGetPointsByPlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Returns the current number of points of a player. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Returns the current number of points of a player. In FFA, the player number is the team number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPointsByPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::BasePointCounter_eventGetPointsByPlayer_Parms), Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics
	{
		struct BasePointCounter_eventSetPoints_Parms
		{
			int32 Team;
			int32 Amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventSetPoints_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventSetPoints_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Sets a team's point counter to the amount. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Sets a team's point counter to the amount. In FFA, the player number is the team number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "SetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::BasePointCounter_eventSetPoints_Parms), Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_SetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePointCounter);
	UClass* Z_Construct_UClass_UBasePointCounter_NoRegister()
	{
		return UBasePointCounter::StaticClass();
	}
	struct Z_Construct_UClass_UBasePointCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePointCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePointCounter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePointCounter_AddPoints, "AddPoints" }, // 1455190223
		{ &Z_Construct_UFunction_UBasePointCounter_GetPoints, "GetPoints" }, // 499963888
		{ &Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer, "GetPointsByPlayer" }, // 3573274113
		{ &Z_Construct_UFunction_UBasePointCounter_SetPoints, "SetPoints" }, // 1878620382
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BasePointCounter.h" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData[] = {
		{ "Category", "Point Counter" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged = { "OnPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePointCounter, OnPointsChanged), Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData)) }; // 2418466265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePointCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePointCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePointCounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePointCounter_Statics::ClassParams = {
		&UBasePointCounter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePointCounter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePointCounter()
	{
		if (!Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton, Z_Construct_UClass_UBasePointCounter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton;
	}
	template<> MINIGAMECORE_API UClass* StaticClass<UBasePointCounter>()
	{
		return UBasePointCounter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePointCounter);
	UBasePointCounter::~UBasePointCounter() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePointCounter, UBasePointCounter::StaticClass, TEXT("UBasePointCounter"), &Z_Registration_Info_UClass_UBasePointCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePointCounter), 3209367288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_156371898(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Minigame_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
