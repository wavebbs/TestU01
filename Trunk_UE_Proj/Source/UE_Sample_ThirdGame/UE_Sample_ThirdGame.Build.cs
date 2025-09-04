// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Sample_ThirdGame : ModuleRules
{
	public UE_Sample_ThirdGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"GameplayTags",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE_Sample_ThirdGame",
			"UE_Sample_ThirdGame/Variant_Platforming",
			"UE_Sample_ThirdGame/Variant_Combat",
			"UE_Sample_ThirdGame/Variant_Combat/AI",
			"UE_Sample_ThirdGame/Variant_SideScrolling",
			"UE_Sample_ThirdGame/Variant_SideScrolling/Gameplay",
			"UE_Sample_ThirdGame/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
