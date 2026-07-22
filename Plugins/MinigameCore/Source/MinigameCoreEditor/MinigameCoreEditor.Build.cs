using UnrealBuildTool;

public class MinigameCoreEditor : ModuleRules
{
    public MinigameCoreEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", 
                "MinigameCore", 
                "UnrealEd",
                "CustomizableObject", 
                "Slate",
                "SlateCore", 
                "InputCore", 
                "PropertyEditor"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );
    }
}