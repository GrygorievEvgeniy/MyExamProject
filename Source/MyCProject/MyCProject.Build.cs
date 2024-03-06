// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;


public class MyCProject : ModuleRules
{
	public MyCProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
		// Add GAS plugin to project
		// ReSharper disable once RedundantExplicitArrayCreation
		PrivateDependencyModuleNames.AddRange(new string[] {
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks"
		});
	}
}