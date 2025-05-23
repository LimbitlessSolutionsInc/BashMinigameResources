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
			}
		);
		
	}
}
