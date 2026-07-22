// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Menu.h"
#include "Player/BashPlayerController.h"

UMenu::UMenu(const FObjectInitializer& ObjectInitializer) : UUserWidget(ObjectInitializer), DefaultSelectedWidget(nullptr)
{
	SetIsFocusable(true);
	DefaultSelectedWidget = this;
}

void UMenu::OnOpenMenu(TScriptInterface<IBashController> owningPlayer)
{
	if (owningPlayer)
	{
		OwningPlayer = owningPlayer;
		if (UUserWidget* defaultWidget = GetDefaultSelectedWidget())
		{

			UUIInputComponentBase* uiInput = owningPlayer->GetUiInputComponent();
			if (uiInput)
			{
				uiInput->FocusWidget(defaultWidget);				
			}else
			{
				//defaultWidget->SetUserFocus(owningPlayer);
				UE_LOG(LogTemp, Error, TEXT("Player controller does not return valid ui input component"));

			}
		}
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("Menu does not have a valid user focus"));
	}

	OnOpenMenuBP();
}

void UMenu::OnCloseMenu()
{
 
	OnCloseMenuBP();
	OwningPlayer= nullptr;
}

void UMenu::OnEnterMenu(TScriptInterface<IBashController> owningPlayer)
{
	OnEnterMenuBP();	
}

void UMenu::OnExitMenu(TScriptInterface<IBashController> owningPlayer)
{
	OnExitMenuBP();
}



