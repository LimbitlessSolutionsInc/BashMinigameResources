// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIInputComponent.generated.h"


class UWidget;
class UMenu;
class ABashPlayerController;
class UInputMappingContext;
class UInputAction;
class UInputAction;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIInputSignature, ABashPlayerController*, FromPlayer);


/* Used to retain a stack of open menus. Allows the closing and opening of menus and returning to the previous location.
 * Menu is the actual menu widget. SelectedWidget is the last selected widget before exiting that menu.
*/
UCLASS()
class UMenuStackContext : public UObject
{
	GENERATED_BODY()

public:
	void SetMenu(UMenu* menu);

	UMenu* GetMenu() const;
	void SetSelectedWidget(UUserWidget* widget);
	UUserWidget* GetSelectedWidget() const;


protected:
	TWeakObjectPtr<UMenu> Menu;
	TWeakObjectPtr<UUserWidget> SelectedWidget;
	
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BASHCORE_API UUIInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:	


	/* Call to open a menu with this player as the controller.
	 * @param menu - The menu to open
	 * @param clearMenuStack - if true clears all menus from the menu stack. Used if previous menus will not be accesible.
	 */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void OpenMenu(UMenu* menu, bool clearMenuStack);
	void ClearWidgetFocus();

	/* Call to close a menu. Will close all menus on top of it.
	 * @param menu - The menu to close
	 * 
	 */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void CloseMenu(UMenu* menu, bool closeAll = false);

	UFUNCTION(BlueprintCallable, Category = "Events")
	void CloseAllMenus();

	// Sets default values for this component's properties
	UUIInputComponent();
	//setups up input mapping context and bindings.
	void SetupInput(ABashPlayerController* owner);
	//Has User focus specific widget.
	UFUNCTION(BlueprintCallable, Category = "Events")
	void FocusWidget(UUserWidget* widget);

	UFUNCTION(BlueprintCallable, Category = "Events")
	UWidget* GetFocusWidget() const { return FocusedWidget; }
	
	//Input Delegates
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnSelectButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnBackButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnStartButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnUpButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnDownButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnLeftButtonPressed;
	UPROPERTY(BlueprintAssignable, Category = "Input")
	FUIInputSignature OnRightButtonPressed;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Attempts to cast focused object to ISelectableWidget and then UButton to see if its possible to trigger an event.
	void SelectOption();


protected:
	//Input:
	//Input Actions:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> SelectAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> BackAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> StartAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> DownNavigateAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> UpNavigateAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> LeftNavigateAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> RightNavigateAction;
	//Input Mapping context:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> MenuMappingContext;


	//runtime fields
	UPROPERTY()
	TObjectPtr<UWidget> FocusedWidget;
	UPROPERTY()
	TObjectPtr<ABashPlayerController> OwningPlayer;
private:
	UFUNCTION()
	void NavigateUp();
	UFUNCTION()
	void NavigateDown();
	UFUNCTION()
	void NavigateLeft();
	UFUNCTION()
	void NavigateRight();
	UFUNCTION()
	void StartButtonPressed();
	UFUNCTION()
	void BackButtonPressed();
	enum class ENavigationDirection
	{
		END_Up,
		END_Down,
		END_Left,
		END_Right
	};
	void NavigateDirection(ENavigationDirection direction);
private:


	UPROPERTY()
	TArray<UMenuStackContext*> MenuStack;
};
