// ShootTheOthers Game, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ShootTheOthersTarget : TargetRules
{
	public ShootTheOthersTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ShootTheOthers" } );
	}
}
