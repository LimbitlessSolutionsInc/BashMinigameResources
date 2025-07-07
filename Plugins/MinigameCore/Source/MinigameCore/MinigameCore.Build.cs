// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MinigameCore : ModuleRules
{
	public MinigameCore(ReadOnlyTargetRules Target) : base(Target)
	{
		bUsePrecompiled = true;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "BashCore",
				"LevelSequence", "MovieScene",
				"UMG", "InputCore", "EnhancedInput"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
