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
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"CustomizableObject"
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
