// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/CircularWipeWidget.h"

void UCircularWipeWidget::StartWipe(FCircleWipeParams params)
{
	StartWipeVisuals(params);
}

void UCircularWipeWidget::FadeFromBlack(FCircleWipeParams params)
{
	EndWipeVisuals(params);
}

void UCircularWipeWidget::PlayFullWipe(FCircleWipeParams params)
{
	PlayFullWipeVisuals(params);
}

void UCircularWipeWidget::CallDelegate(FOnWipeFilledSignature delegate)
{
	delegate.ExecuteIfBound();
}
