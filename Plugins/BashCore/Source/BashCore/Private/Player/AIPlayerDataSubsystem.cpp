// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/AIPlayerDataSubsystem.h"
#include "MuCO/CustomizableObject.h"
#include "UObject/ConstructorHelpers.h"

UAIPlayerDataSubsystem::UAIPlayerDataSubsystem()
{
	static ConstructorHelpers::FObjectFinder<UCustomizableObject> TmpCO(TEXT("/Script/CustomizableObject.CustomizableObject'/BashCore/Customization/CO_ModularCharacter.CO_ModularCharacter'"));
	CustomizableObject = TmpCO.Object;

	PlayerData.Init(nullptr, 4);
}

UPlayerData* UAIPlayerDataSubsystem::GetAIPlayerData(int32 Index)
{
	if (Index >= 0 && PlayerData.Num() > Index && PlayerData[Index] != nullptr)
	{
		return PlayerData[Index];
	}
	else
	{
		UPlayerData* NewPlayerData = NewObject<UPlayerData>(this, FName("AIPlayerData" + FString::FromInt(Index)));
		NewPlayerData->Initialize(CustomizableObject, true);
		NewPlayerData->SetPlayerNum(Index);
		PlayerData[Index] = NewPlayerData;

		return NewPlayerData;
	}
}

