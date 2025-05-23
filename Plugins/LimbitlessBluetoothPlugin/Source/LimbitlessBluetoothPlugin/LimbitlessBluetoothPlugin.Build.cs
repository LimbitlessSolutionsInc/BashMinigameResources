// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LimbitlessBluetoothPlugin : ModuleRules
{
	public LimbitlessBluetoothPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		bUsePrecompiled = true;
		
				
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"EnhancedInput",
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG",
			}
		);		
	}
}
