// ShootTheOthers Game, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ShootTheOthersEditorTarget : TargetRules
{
	public ShootTheOthersEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ShootTheOthers" } );
	}
}
