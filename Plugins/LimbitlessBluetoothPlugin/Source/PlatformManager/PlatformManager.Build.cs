using UnrealBuildTool;

public class PlatformManager : ModuleRules
{
    public PlatformManager(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrecompileForTargets = PrecompileTargetsType.Any;
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "LimbitlessBluetoothPlugin"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PrivateDependencyModuleNames.Add("LimbitlessBTWindows");  
            PrivateDependencyModuleNames.Add("LimbitlessBTAndroid");
        }

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.Add("LimbitlessBTAndroid");
        }
    }
}