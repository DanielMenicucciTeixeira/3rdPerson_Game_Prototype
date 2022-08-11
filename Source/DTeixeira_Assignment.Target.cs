// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class DTeixeira_AssignmentTarget : TargetRules
{
	public DTeixeira_AssignmentTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "DTeixeira_Assignment" } );
	}
}
