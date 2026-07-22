// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Player/UIInputComponentBase.h"

#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Widgets/Menu.h"
#include "Widgets/SelectableWidget.h"

UUIInputComponentBase::UUIInputComponentBase()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UUIInputComponentBase::OpenMenu(UMenu* menu, bool clearMenuStack)
{
	//create new menu context

	UMenuStackContext* newMenuContext = NewObject<UMenuStackContext>();
	newMenuContext->SetMenu(menu);
	newMenuContext->SetSelectedWidget(menu->GetDefaultSelectedWidget());

	if (!MenuStack.IsEmpty())
	{
		//Exit Previous Menu
		UMenuStackContext* oldMenuContext = MenuStack.Top();
		if (oldMenuContext->GetMenu())
		{
			oldMenuContext->GetMenu()->OnExitMenu(OwningPlayer);
		}
		
		//Close all menus and clear stack
		if (clearMenuStack)
		{
			while (!MenuStack.IsEmpty())
			{
				UMenuStackContext* menuContext = MenuStack.Pop();

				if (menuContext)
				{
					if (menuContext->GetMenu())
						menuContext->GetMenu()->OnCloseMenu();
				}
			}
			
			MenuStack.Empty();
		}
	}
	
	MenuStack.Push(newMenuContext);
	
	menu->OnOpenMenu(OwningPlayer);
	menu->OnEnterMenu(OwningPlayer);
	FocusWidget(newMenuContext->GetSelectedWidget());
}

void UUIInputComponentBase::CloseMenu(UMenu* menu, bool closeAll)
{
	UMenuStackContext* checkContext = NewObject<UMenuStackContext>();
	checkContext->SetMenu(menu);
	
	if (MenuStack.ContainsByPredicate([&](UMenuStackContext* menuContext)
	{
		return (menuContext->GetMenu() == menu);
	}))
	{

		UMenuStackContext* curMenuContext;

		//close each menu from the top until we reach desired menu.
		do
		{
			if (MenuStack.IsEmpty())break;
			
			curMenuContext = MenuStack.Pop();

			if (curMenuContext->GetMenu())
			{
				curMenuContext->GetMenu()->OnExitMenu(OwningPlayer);
				curMenuContext->GetMenu()->OnCloseMenu();
			}
		}while (curMenuContext && (closeAll || curMenuContext->GetMenu() != menu));

		//set new top to active menu.
		if (!MenuStack.IsEmpty())
		{
			curMenuContext = MenuStack.Top();
			if (curMenuContext && curMenuContext->GetSelectedWidget())
			{
				curMenuContext->GetMenu()->OnEnterMenu(OwningPlayer);
				FocusWidget(curMenuContext->GetSelectedWidget());
			}
		}else
		{
			//TODO: if no top, clear widget focus

			ClearWidgetFocus();
		}
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("Menu stack does not contain menu requested to close."));
	}
}

void UUIInputComponentBase::CloseAllMenus()
{
	if (!MenuStack.IsEmpty())
	{
		CloseMenu(MenuStack.Top()->GetMenu(), true);
	}
}

void UUIInputComponentBase::FocusWidget(UUserWidget* widget)
{
	if (widget && widget->IsFocusable())
	{
		FocusedWidget = widget;

		//Update last selected widget on stack.
		if (MenuStack.Top())
		{
			MenuStack.Top()->SetSelectedWidget(widget);
		}

		InternalSetFocus(widget);
	}
}

void UUIInputComponentBase::SelectOption()
{
	bool inputConsumed = false;

	if (FocusedWidget)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Cyan, FString::Printf(TEXT("Selected %s"), *FocusedWidget->GetName()));
		if (FocusedWidget->GetClass()->ImplementsInterface(USelectableWidget::StaticClass()))
		{
			inputConsumed = true;
			ISelectableWidget::Execute_OnSelected(FocusedWidget);
		}
		else
		{
			UButton* Button = Cast<UButton>(FocusedWidget);
			if (Button)
			{
				Button->OnClicked.Broadcast();
				inputConsumed = true;
			}
		}

	}

	//only broadcast event if input is not consumed by activating button/selectable widget.
	if (!inputConsumed)
	{
		OnSelectButtonPressed.Broadcast(OwningPlayer);
	}
}

void UUIInputComponentBase::NavigateDirection(ENavigationDirection direction)
{
	if (FocusedWidget && FocusedWidget->Navigation)
	{
		TWeakObjectPtr<UUserWidget> nextWidget;

		switch (direction)
		{
		case ENavigationDirection::END_Up:
			nextWidget = Cast<UUserWidget>(FocusedWidget->Navigation->Up.Widget);
			break;
		case ENavigationDirection::END_Down:
			nextWidget = Cast<UUserWidget>(FocusedWidget->Navigation->Down.Widget);
			break;
		case ENavigationDirection::END_Left:
			nextWidget = Cast<UUserWidget>(FocusedWidget->Navigation->Left.Widget);
			break;
		case ENavigationDirection::END_Right:
			nextWidget = Cast<UUserWidget>(FocusedWidget->Navigation->Right.Widget);
			break;
		default:
			nextWidget = nullptr;
		}
		
		if (nextWidget.IsValid())
		{
			FocusWidget(&(*nextWidget));
		}
	}
}
