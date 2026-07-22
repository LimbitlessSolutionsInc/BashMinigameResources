// Fill out your copyright notice in the Description page of Project Settings.


#include "Customizer/CustomizerPortraitCapture.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "MuCO/CustomizableSkeletalComponent.h"
#include "Player/BashLocalPlayer.h"

ACustomizerPortraitCapture::ACustomizerPortraitCapture()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Root);

	CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>("CaptureComponent");
	CaptureComponent->bCaptureEveryFrame = false;
	CaptureComponent->SetupAttachment(Root);

	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>("PlayerMesh");
	PlayerMesh->SetupAttachment(Root);

	CustomizableSkeletal = CreateDefaultSubobject<UCustomizableSkeletalComponent>("CustomizableSkeletal");
	CustomizableSkeletal->SetupAttachment(PlayerMesh);
}

void ACustomizerPortraitCapture::CapturePortrait(UPlayerData* InPlayerData)
{
	PlayerData = InPlayerData;
	UCustomizableObjectInstance* COI = PlayerData->GetCustomizableInstance();
	if (!IsValid(COI)) { return; }

	CustomizableSkeletal->SetCustomizableObjectInstance(COI);

	FInstanceUpdateDelegate Delegate{};
	Delegate.BindDynamic(this, &ACustomizerPortraitCapture::FinishPortraitCapture);
	CustomizableSkeletal->UpdateSkeletalMeshAsyncResult(Delegate);
}

void ACustomizerPortraitCapture::FinishPortraitCapture(const FUpdateContext& Context)
{
	FStreamingManagerCollection& SMC = FStreamingManagerCollection::Get();
	SMC.BlockTillAllRequestsFinished(0.f, true); // 0.f means infinite time limit


	CaptureComponent->TextureTarget = PlayerData->GetPortraitTexture();
	CaptureComponent->CaptureScene();
}

