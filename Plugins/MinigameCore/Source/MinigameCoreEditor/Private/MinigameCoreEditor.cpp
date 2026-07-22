#include "MinigameCoreEditor.h"

#include "Components/MinigameCustomizablePlayerComponent.h"
#include "MinigameParameterOverrideCustomization.h"

#define LOCTEXT_NAMESPACE "FMinigameCoreEditorModule"

void FMinigameCoreEditorModule::StartupModule()
{
	FPropertyEditorModule& PropertyEditor = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyEditor.RegisterCustomPropertyTypeLayout(
		"CustomizationOverride",
		FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FMinigameParameterOverrideCustomization::MakeInstance)
	);
}

void FMinigameCoreEditorModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FMinigameCoreEditorModule, MinigameCoreEditor)