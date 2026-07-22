// Fill out your copyright notice in the Description page of Project Settings.


#include "BashGamemode.h"

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/CircularWipeWidget.h"

class UBionicGameInstance;

void ABashGamemode::TransitionToLevel(FLoadLevelParams loadLevelParams)
{
	LevelToLoadParams = loadLevelParams;
	if (CircularWipeWidget)
	{
		FCircleWipeParams circleWipeParams;
		circleWipeParams.onWipeFilled.BindUFunction(this, FName("OpenLevel"));
		CircularWipeWidget->StartWipe(circleWipeParams);
	}else
	{
		OpenLevel();
	}
}

void ABashGamemode::BeginPlay()
{
	Super::BeginPlay();

	if (CircularWipeClass)
	{
		CircularWipeWidget = CreateWidget<UCircularWipeWidget>(GetWorld(), CircularWipeClass);
		if (CircularWipeWidget)
		{
			CircularWipeWidget->AddToViewport(9999);

			FCircleWipeParams params;
			params.onWipeComplete.BindUFunction(this, FName("OnEnterTransitionFinish"));
			CircularWipeWidget->FadeFromBlack(params);

		}
	}
}

void ABashGamemode::OnEnterTransitionFinish()
{
}

void ABashGamemode::PlayTransitionEffects()
{
	CircularWipeWidget->PlayFullWipe({});
}

void ABashGamemode::OpenLevel()
{
	if (!LevelToLoadParams.LevelToOpen.IsNull())
	{
		UGameplayStatics::OpenLevelBySoftObjectPtr(this, LevelToLoadParams.LevelToOpen, true);
	}else
	if (LevelToLoadParams.LevelToOpenName != "")
	{
		UGameplayStatics::OpenLevel(this, LevelToLoadParams.LevelToOpenName, true);
	}
}
