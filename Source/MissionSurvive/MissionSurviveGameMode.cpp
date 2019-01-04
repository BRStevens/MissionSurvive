// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MissionSurviveGameMode.h"
#include "MissionSurviveHUD.h"
#include "MissionSurviveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMissionSurviveGameMode::AMissionSurviveGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMissionSurviveHUD::StaticClass();
}
