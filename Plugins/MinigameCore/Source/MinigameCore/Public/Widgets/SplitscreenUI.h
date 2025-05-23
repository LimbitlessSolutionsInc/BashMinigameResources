// Copyright Limbitless Solutions, Inc. All Rights Reserved

#pragma once

//#include <Components/CanvasPanel.h>

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Math/MathFwd.h"
#include "SplitscreenUI.generated.h"

/**
 * 
 */
UCLASS()
class MINIGAMECORE_API USplitscreenUI : public UUserWidget
{
	GENERATED_BODY()

public:
	int GetNumSplits() const;
	class UOverlay* GetSplitPanel(int Num) const;

	void NativeOnInitialized() override;

private:

	UPROPERTY(BlueprintReadWrite, Category = "Splits", meta = (AllowPrivateAccess = true))
	TArray<TObjectPtr<UOverlay>> Splits{};

	UPROPERTY(EditDefaultsOnly, Category = "Splits")
	TArray<TObjectPtr<class UCanvasRenderTarget2D>> RenderTargets{};

	UPROPERTY(EditDefaultsOnly, Category = "Splits")
	FVector2D TargetSize{};
};
