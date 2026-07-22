// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Player/UIInputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Player/BashPlayerController.h"
#include "Widgets/Menu.h"
#include "Widgets/SelectableWidget.h"
#include "Framework/Application/SlateApplication.h"

UUIInputComponent::UUIInputComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UUIInputComponent::SetupInput(ABashPlayerController* owner)
{
	OwningPlayer = owner;
	OwningPlayerController = owner;
	
	if (!OwningPlayer) { return; }

	// TODO: Move this kind of functionality to subclass
	ULocalPlayer* localOwningPlayer = OwningPlayerController->GetLocalPlayer();

	if (UEnhancedInputLocalPlayerSubsystem* inputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(localOwningPlayer))
	{
		inputSubsystem->AddMappingContext(MenuMappingContext, 1);

		if (UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(OwningPlayerController->InputComponent))
		{
			enhancedInputComponent->BindAction(UpNavigateAction, ETriggerEvent::Started, this, &UUIInputComponent::NavigateUp);
			enhancedInputComponent->BindAction(DownNavigateAction, ETriggerEvent::Started, this, &UUIInputComponent::NavigateDown);
			enhancedInputComponent->BindAction(LeftNavigateAction, ETriggerEvent::Started, this, &UUIInputComponent::NavigateLeft);
			enhancedInputComponent->BindAction(RightNavigateAction, ETriggerEvent::Started, this, &UUIInputComponent::NavigateRight);

			enhancedInputComponent->BindAction(UpNavigateAction, ETriggerEvent::Triggered, this, &UUIInputComponent::OnUpHeld);
			enhancedInputComponent->BindAction(DownNavigateAction, ETriggerEvent::Triggered, this, &UUIInputComponent::OnDownHeld);
			enhancedInputComponent->BindAction(LeftNavigateAction, ETriggerEvent::Triggered, this, &UUIInputComponent::OnLeftHeld);
			enhancedInputComponent->BindAction(RightNavigateAction, ETriggerEvent::Triggered, this, &UUIInputComponent::OnRightHeld);

			enhancedInputComponent->BindAction(UpNavigateAction, ETriggerEvent::Completed, this, &UUIInputComponent::OnUpCompleted);
			enhancedInputComponent->BindAction(DownNavigateAction, ETriggerEvent::Completed, this, &UUIInputComponent::OnDownCompleted);
			enhancedInputComponent->BindAction(LeftNavigateAction, ETriggerEvent::Completed, this, &UUIInputComponent::OnLeftCompleted);
			enhancedInputComponent->BindAction(RightNavigateAction, ETriggerEvent::Completed, this, &UUIInputComponent::OnRightCompleted);
			
			
			enhancedInputComponent->BindAction(SelectAction, ETriggerEvent::Started, this, &UUIInputComponentBase::SelectOption);
			enhancedInputComponent->BindAction(BackAction, ETriggerEvent::Started, this, &UUIInputComponent::BackButtonPressed);
			enhancedInputComponent->BindAction(StartAction, ETriggerEvent::Started, this, &UUIInputComponent::StartButtonPressed);
		}
	}
}

// Called when the game starts
void UUIInputComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UUIInputComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (HeldNavDirection == ENavigationDirection::END_None
		|| (!MenuStack.IsEmpty() && !MenuStack.Top()->GetMenu()->AllowsHoldNavigation())) { return; }
	
	if (CurrentHeldNavDelay > 0)
	{
		CurrentHeldNavDelay -= DeltaTime;
		return;
	}
	NavigateDirection(HeldNavDirection);
	CurrentHeldNavDelay = RepeatHoldNavigationDelay;
}

void UUIInputComponent::NavigateUp()
{
	OnUpButtonPressed.Broadcast(OwningPlayerController);
	NavigateDirection(ENavigationDirection::END_Up);
	SetHoldDirection(ENavigationDirection::END_Up);
}

void UUIInputComponent::NavigateDown()
{
	OnDownButtonPressed.Broadcast(OwningPlayerController);
	NavigateDirection(ENavigationDirection::END_Down);
	SetHoldDirection(ENavigationDirection::END_Down);
}

void UUIInputComponent::NavigateLeft()
{
	OnLeftButtonPressed.Broadcast(OwningPlayerController);
	NavigateDirection(ENavigationDirection::END_Left);
	SetHoldDirection(ENavigationDirection::END_Left);
}

void UUIInputComponent::NavigateRight()
{
	OnRightButtonPressed.Broadcast(OwningPlayerController);
	NavigateDirection(ENavigationDirection::END_Right);
	SetHoldDirection(ENavigationDirection::END_Right);
}

void UUIInputComponent::OnUpHeld()
{
	OnUpButtonHeld.Broadcast(OwningPlayerController);
}

void UUIInputComponent::OnDownHeld()
{
	OnDownButtonHeld.Broadcast(OwningPlayerController);
}

void UUIInputComponent::OnLeftHeld()
{
	OnLeftButtonHeld.Broadcast(OwningPlayerController);
}

void UUIInputComponent::OnRightHeld()
{
	OnRightButtonHeld.Broadcast(OwningPlayerController);
}

void UUIInputComponent::OnUpCompleted()
{
	OnDirectionReleased(ENavigationDirection::END_Up);
}

void UUIInputComponent::OnDownCompleted()
{
	OnDirectionReleased(ENavigationDirection::END_Down);
}

void UUIInputComponent::OnLeftCompleted()
{
	OnDirectionReleased(ENavigationDirection::END_Left);
}

void UUIInputComponent::OnRightCompleted()
{
	OnDirectionReleased(ENavigationDirection::END_Right);
}

void UUIInputComponent::OnDirectionReleased(ENavigationDirection Direction)
{
	if (HeldNavDirection == Direction)
	{
		HeldNavDirection = ENavigationDirection::END_None;
	}
}

void UUIInputComponent::InternalSetFocus(UUserWidget* widget)
{
	widget->SetUserFocus(OwningPlayerController);
}

void UUIInputComponent::StartButtonPressed()
{
	OnStartButtonPressed.Broadcast(OwningPlayerController);
}

void UUIInputComponent::BackButtonPressed()
{
	OnBackButtonPressed.Broadcast(OwningPlayerController);
}

void UUIInputComponent::SetHoldDirection(ENavigationDirection direction)
{
	HeldNavDirection = direction;
	CurrentHeldNavDelay = InitialHoldNavigationDelay;
}

void UUIInputComponent::ClearWidgetFocus()
{
	if (ULocalPlayer* localPlayer = OwningPlayerController->GetLocalPlayer())
	{
		int id = FSlateApplication::Get().GetUserIndexForController(localPlayer->GetControllerId());
		FSlateApplication::Get().SetUserFocusToGameViewport(id);
		FocusedWidget = nullptr;
	}
}

//UMenuContext Definitions

void UMenuStackContext::SetMenu(UMenu* menu)
{
	Menu = MakeWeakObjectPtr(menu);
}
UMenu* UMenuStackContext::GetMenu() const
{
	return Menu.Get();
}
void UMenuStackContext::SetSelectedWidget(UUserWidget* widget)
{
	SelectedWidget = MakeWeakObjectPtr(widget);
}
UUserWidget* UMenuStackContext::GetSelectedWidget() const
{
	return SelectedWidget.Get();
}

