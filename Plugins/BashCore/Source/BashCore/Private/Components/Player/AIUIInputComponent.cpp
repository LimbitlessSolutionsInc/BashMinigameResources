// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Player/AIUIInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "Player/BashController.h"
#include "Kismet/GameplayStatics.h"
#include "Framework/Application/SlateApplication.h"

UAIUIInputComponent::UAIUIInputComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UAIUIInputComponent::NavigateUp()
{
	OnUpButtonPressed.Broadcast(OwningPlayer);
	NavigateDirection(ENavigationDirection::END_Up);
}

void UAIUIInputComponent::NavigateDown()
{
	OnDownButtonPressed.Broadcast(OwningPlayer);
	NavigateDirection(ENavigationDirection::END_Down);
}

void UAIUIInputComponent::NavigateLeft()
{
	OnLeftButtonPressed.Broadcast(OwningPlayer);
	NavigateDirection(ENavigationDirection::END_Left);
}

void UAIUIInputComponent::NavigateRight()
{
	OnRightButtonPressed.Broadcast(OwningPlayer);
	NavigateDirection(ENavigationDirection::END_Right);
}

void UAIUIInputComponent::InternalSetFocus(UUserWidget* widget)
{
	widget->SetUserFocus(FakePlayerController);
}

void UAIUIInputComponent::ClearWidgetFocus()
{
	if (ULocalPlayer* localPlayer = FakePlayerController->GetLocalPlayer())
	{
		int id = FSlateApplication::Get().GetUserIndexForController(localPlayer->GetControllerId());
		FSlateApplication::Get().SetUserFocusToGameViewport(id);
		FocusedWidget = nullptr;
	}
}

void UAIUIInputComponent::BeginPlay()
{
	Super::BeginPlay();

	OwningPlayer = TScriptInterface<IBashController>(GetOwner());
	FakePlayerController = UGameplayStatics::CreatePlayer(this, -1, true);
	FakePlayerController->Tags.Add("Fake");

	UE_LOG(LogTemp, Warning, TEXT("AI UI Component %s: Creating player %s and controller %s"), *GetName(), *FakePlayerController->GetLocalPlayer()->GetName(), *FakePlayerController->GetName());
}

void UAIUIInputComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Remove the local player if it still exists
	// There are some editor situations where the local player may be destroyed before EndPlay is called

	UGameInstance* GameInstance = GetWorld()->GetGameInstance();
	ULocalPlayer* LocalPlayer = FakePlayerController->GetLocalPlayer();
	
	if (IsValid(LocalPlayer) && GameInstance->GetLocalPlayers().Contains(LocalPlayer))
	{
		UGameplayStatics::RemovePlayer(FakePlayerController, false);
	}
	
	Super::EndPlay(EndPlayReason);
}



