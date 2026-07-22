// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/MinigameCustomizablePlayerComponent.h"
#include "MinigameBase.h"
#include "Player/MinigamePlayer.h"
#include "Player/BashLocalPlayer.h"

UMinigameCustomizablePlayerComponent::UMinigameCustomizablePlayerComponent()
{
	static ConstructorHelpers::FObjectFinder<UCustomizableObject> TmpCO(TEXT("/Script/CustomizableObject.CustomizableObject'/BashCore/Customization/CO_ModularCharacter.CO_ModularCharacter'"));
	CustomizableObject = TmpCO.Object;
}

void UMinigameCustomizablePlayerComponent::LoadCustomizableInstance(UPlayerData* PlayerData)
{
	Super::LoadCustomizableInstance(PlayerData);

	if (CustomizableObjectInstance == nullptr || CustomizationOverrides.Num() == 0)
	{
		return;
	}

	AMinigamePlayer* Player = Cast<AMinigamePlayer>(GetOwner());
	if (!Player) { return; }

	AMinigameBase* Minigame = Player->Minigame;
	if (!Minigame) { return; }

	// Re-use cached override if one is present
	// The overrides should not change after a minigame reset, so this saves on regenerating meshes
	if (UCustomizableObjectInstance* CachedOverride = Minigame->GetCachedOverride(Player->PlayerNumber))
	{
		CustomizableObjectInstance = CachedOverride;
		return;
	}

	// COI is currently pointed to the one in PC, which we don't want to change permanently
	// Make clone so changes only persist in the minigame
	CustomizableObjectInstance = CustomizableObjectInstance->Clone();
	Minigame->CacheOverride(CustomizableObjectInstance, Player->PlayerNumber);

	for (const auto& Override : CustomizationOverrides)
	{
		CustomizableObjectInstance->SetIntParameterSelectedOption(Override.ParameterName, Override.ParameterValue);
	}

	CustomizableObjectInstance->UpdateSkeletalMeshAsync();
}
