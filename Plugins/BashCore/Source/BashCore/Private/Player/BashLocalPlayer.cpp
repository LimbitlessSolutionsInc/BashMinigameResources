// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/BashLocalPlayer.h"

#include "Engine/CanvasRenderTarget2D.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "UObject/ConstructorHelpers.h"
#include "MuCO/CustomizableObject.h"

void UPlayerData::InitializeCustomizableInstance(UCustomizableObject* CO)
{
	CustomizableObjectInstance = CO->CreateInstance();
	CustomizableObjectInstance->SetRandomValues();
}

void UPlayerData::AddBoardItem(UObject* Item)
{
	BoardItems.Add(Item);
}

void UPlayerData::RemoveBoardItem(UObject* Item)
{
	BoardItems.Remove(Item);
}

const TArray<UObject*>& UPlayerData::GetBoardItems() const
{
	return BoardItems;
}

void UPlayerData::Initialize(UCustomizableObject* CO, bool bInIsAI)
{
	bIsAI = bInIsAI;
	InitializeCustomizableInstance(CO);
	InitializePortraitTexture();
}

UPlayerData::UPlayerData()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> BaseMaterial(TEXT("/BashCore/Customization/Portraits/M_CharacterCustomizerPortrait.M_CharacterCustomizerPortrait"));
	PortraitMaterial = UMaterialInstanceDynamic::Create(BaseMaterial.Object, this);
}

int UPlayerData::GetCoins() const
{
	return Coins;
}

void UPlayerData::SetCoins(int newCoins)
{
	Coins = newCoins;
}

UBashLocalPlayer::UBashLocalPlayer()
{
	static ConstructorHelpers::FObjectFinder<UCustomizableObject> TmpCO(TEXT("/Script/CustomizableObject.CustomizableObject'/BashCore/Customization/CO_ModularCharacter.CO_ModularCharacter'"));
	
	CustomizableObject = TmpCO.Object;
}

void UBashLocalPlayer::PlayerAdded(UGameViewportClient* InViewportClient, FPlatformUserId InUserId)
{
	Super::PlayerAdded(InViewportClient, InUserId);

	PlayerData = NewObject<UPlayerData>(this);
	PlayerData->Initialize(CustomizableObject);
}

void UBashLocalPlayer::PlayerAdded(UGameViewportClient* InViewportClient, int32 InControllerID)
{
	Super::PlayerAdded(InViewportClient, InControllerID);

	PlayerData = NewObject<UPlayerData>(this);
	PlayerData->Initialize(CustomizableObject);
}

void UPlayerData::InitializePortraitTexture()
{
	PortraitTexture = UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(this, UCanvasRenderTarget2D::StaticClass());

	if (PortraitMaterial)
	{
		PortraitMaterial->SetTextureParameterValue("Texture", PortraitTexture);
	}
}