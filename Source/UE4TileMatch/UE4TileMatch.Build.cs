// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4TileMatch : ModuleRules
{
	public UE4TileMatch(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
