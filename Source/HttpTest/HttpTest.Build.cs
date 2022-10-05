// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HttpTest : ModuleRules
{
	public HttpTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "HTTP", "Json" });
	}
}
