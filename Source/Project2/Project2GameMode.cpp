// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project2GameMode.h"
#include "Project2HUD.h"
#include "Project2Character.h"
#include "UObject/ConstructorHelpers.h"

AProject2GameMode::AProject2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject2HUD::StaticClass();
}
