// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Study_LeeDeukWoo : ModuleRules
{
	public Study_LeeDeukWoo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
