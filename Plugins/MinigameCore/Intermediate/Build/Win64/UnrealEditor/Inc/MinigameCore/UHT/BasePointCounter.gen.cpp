// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCore/Public/BasePointCounter.h"
#include "MinigameCore/Public/MinigameStanding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePointCounter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister();
	MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature();
	MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
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
	DEFINE_FUNCTION(UBasePointCounter::execInitializePointCounter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumTeams);
		P_GET_TARRAY_REF(int32,Z_Param_Out_TeamAssignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePointCounter_Implementation(Z_Param_NumTeams,Z_Param_Out_TeamAssignment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execGetStandings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMinigameStanding>*)Z_Param__Result=P_THIS->GetStandings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execGetPointsByPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPointsByPlayer_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execGetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoints_Implementation(Z_Param_Team);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execSetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoints_Implementation(Z_Param_Team,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePointCounter::execAddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Team);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints_Implementation(Z_Param_Team,Z_Param_Amount);
		P_NATIVE_END;
	}
	struct BasePointCounter_eventAddPoints_Parms
	{
		int32 Team;
		int32 Amount;
	};
	struct BasePointCounter_eventGetPoints_Parms
	{
		int32 Team;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		BasePointCounter_eventGetPoints_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct BasePointCounter_eventGetPointsByPlayer_Parms
	{
		int32 Player;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		BasePointCounter_eventGetPointsByPlayer_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct BasePointCounter_eventGetStandings_Parms
	{
		TArray<FMinigameStanding> ReturnValue;
	};
	struct BasePointCounter_eventInitializePointCounter_Parms
	{
		int32 NumTeams;
		TArray<int32> TeamAssignment;
	};
	struct BasePointCounter_eventSetPoints_Parms
	{
		int32 Team;
		int32 Amount;
	};
	static FName NAME_UBasePointCounter_AddPoints = FName(TEXT("AddPoints"));
	void UBasePointCounter::AddPoints(int32 Team, int32 Amount)
	{
		BasePointCounter_eventAddPoints_Parms Parms;
		Parms.Team=Team;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_AddPoints),&Parms);
	}
	static FName NAME_UBasePointCounter_GetPoints = FName(TEXT("GetPoints"));
	int32 UBasePointCounter::GetPoints(int32 Team) const
	{
		BasePointCounter_eventGetPoints_Parms Parms;
		Parms.Team=Team;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_GetPoints),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBasePointCounter_GetPointsByPlayer = FName(TEXT("GetPointsByPlayer"));
	int32 UBasePointCounter::GetPointsByPlayer(int32 Player) const
	{
		BasePointCounter_eventGetPointsByPlayer_Parms Parms;
		Parms.Player=Player;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_GetPointsByPlayer),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBasePointCounter_GetStandings = FName(TEXT("GetStandings"));
	TArray<FMinigameStanding> UBasePointCounter::GetStandings() const
	{
		BasePointCounter_eventGetStandings_Parms Parms;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_GetStandings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBasePointCounter_InitializePointCounter = FName(TEXT("InitializePointCounter"));
	void UBasePointCounter::InitializePointCounter(int32 NumTeams, TArray<int32> const& TeamAssignment)
	{
		BasePointCounter_eventInitializePointCounter_Parms Parms;
		Parms.NumTeams=NumTeams;
		Parms.TeamAssignment=TeamAssignment;
		ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_InitializePointCounter),&Parms);
	}
	static FName NAME_UBasePointCounter_SetPoints = FName(TEXT("SetPoints"));
	void UBasePointCounter::SetPoints(int32 Team, int32 Amount)
	{
		BasePointCounter_eventSetPoints_Parms Parms;
		Parms.Team=Team;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UBasePointCounter_SetPoints),&Parms);
	}
	void UBasePointCounter::StaticRegisterNativesUBasePointCounter()
	{
		UClass* Class = UBasePointCounter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &UBasePointCounter::execAddPoints },
			{ "GetPoints", &UBasePointCounter::execGetPoints },
			{ "GetPointsByPlayer", &UBasePointCounter::execGetPointsByPlayer },
			{ "GetStandings", &UBasePointCounter::execGetStandings },
			{ "InitializePointCounter", &UBasePointCounter::execInitializePointCounter },
			{ "SetPoints", &UBasePointCounter::execSetPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics
	{
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "AddPoints", nullptr, nullptr, sizeof(BasePointCounter_eventAddPoints_Parms), Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPoints", nullptr, nullptr, sizeof(BasePointCounter_eventGetPoints_Parms), Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPointsByPlayer", nullptr, nullptr, sizeof(BasePointCounter_eventGetPointsByPlayer_Parms), Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMinigameStanding, METADATA_PARAMS(nullptr, 0) }; // 41450610
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventGetStandings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 41450610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Gets the results of the minigame based on the current score\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Gets the results of the minigame based on the current score" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetStandings", nullptr, nullptr, sizeof(BasePointCounter_eventGetStandings_Parms), Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_GetStandings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumTeams;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamAssignment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamAssignment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamAssignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventInitializePointCounter_Parms, NumTeams), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_Inner = { "TeamAssignment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment = { "TeamAssignment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BasePointCounter_eventInitializePointCounter_Parms, TeamAssignment), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_NumTeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Initializes point counter with team information\n" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
		{ "ToolTip", "Initializes point counter with team information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "InitializePointCounter", nullptr, nullptr, sizeof(BasePointCounter_eventInitializePointCounter_Parms), Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePointCounter_InitializePointCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics
	{
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "SetPoints", nullptr, nullptr, sizeof(BasePointCounter_eventSetPoints_Parms), Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UBasePointCounter_AddPoints, "AddPoints" }, // 939006292
		{ &Z_Construct_UFunction_UBasePointCounter_GetPoints, "GetPoints" }, // 2251848943
		{ &Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer, "GetPointsByPlayer" }, // 3012583098
		{ &Z_Construct_UFunction_UBasePointCounter_GetStandings, "GetStandings" }, // 1393332558
		{ &Z_Construct_UFunction_UBasePointCounter_InitializePointCounter, "InitializePointCounter" }, // 1415760965
		{ &Z_Construct_UFunction_UBasePointCounter_SetPoints, "SetPoints" }, // 2106233628
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BasePointCounter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData[] = {
		{ "Category", "Point Counter" },
		{ "ModuleRelativePath", "Public/BasePointCounter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged = { "OnPointsChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasePointCounter, OnPointsChanged), Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged_MetaData)) }; // 2418466265
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
	struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePointCounter, UBasePointCounter::StaticClass, TEXT("UBasePointCounter"), &Z_Registration_Info_UClass_UBasePointCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePointCounter), 3193843074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_4265933838(TEXT("/Script/MinigameCore"),
		Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_BasePointCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
