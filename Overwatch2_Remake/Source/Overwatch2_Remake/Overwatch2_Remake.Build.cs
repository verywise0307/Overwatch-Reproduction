// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Overwatch2_Remake : ModuleRules
{
	public Overwatch2_Remake(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
