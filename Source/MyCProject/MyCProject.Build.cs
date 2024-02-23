// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyCProject : ModuleRules
{
	public MyCProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
