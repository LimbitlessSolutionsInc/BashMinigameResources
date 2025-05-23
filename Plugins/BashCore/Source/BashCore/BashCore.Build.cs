// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BashCore : ModuleRules
{
	public BashCore(ReadOnlyTargetRules Target) : base(Target)
	{
		bUsePrecompiled = true;
				
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "LimbitlessBluetoothPlugin",
				"UMG", "InputCore", "EnhancedInput"
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
	}
}
