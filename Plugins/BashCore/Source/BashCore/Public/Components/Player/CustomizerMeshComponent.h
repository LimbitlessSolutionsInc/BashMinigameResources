// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Player/PlayerMeshData.h"
#include "CustomizerMeshComponent.generated.h"

class UBashLocalPlayer;
/**
 *  Class that uses leader pose component to quickly swap pieces of the mesh out for customization
 *  When done with customization, can also be used to bake a merged skeletal mesh for use in gameplay
 */
UCLASS(Blueprintable, ClassGroup=(Rendering, Common), hidecategories=(Object, "Mesh", "Materials"), editinlinenew, meta=(BlueprintSpawnableComponent))
class BASHCORE_API UCustomizerMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UCustomizerMeshComponent();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Customizer")
	void GenerateMergeMesh();

	UFUNCTION(BlueprintCallable, Category = "Customizer")
	void LoadMeshData(FPlayerMeshData MeshData);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Customizer")
	FPlayerMeshData PreviewMeshData{};
	
	virtual void BeginPlay() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
private:
	void ClearMeshData();
	
	UPROPERTY(VisibleAnywhere, Category = "Customizer")
	TMap<FName, USkeletalMeshComponent*> Parts{};
	
	TArray<TObjectPtr<USkeletalMesh>> MergeMeshes{};

	TObjectPtr<UBashLocalPlayer> BashLocalPlayer{};

	UBashLocalPlayer* GetLocalPlayer();
};