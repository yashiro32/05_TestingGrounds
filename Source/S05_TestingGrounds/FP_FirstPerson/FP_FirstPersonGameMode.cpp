// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGrounds.h"
#include "FP_FirstPersonGameMode.h"
#include "FP_FirstPersonHUD.h"
#include "Player/FirstPersonCharacter.h"

AFP_FirstPersonGameMode::AFP_FirstPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Static/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFP_FirstPersonHUD::StaticClass();
}
