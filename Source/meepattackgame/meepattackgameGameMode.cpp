// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "meepattackgameGameMode.h"
#include "meepattackgameHUD.h"
#include "meepattackgameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmeepattackgameGameMode::AmeepattackgameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AmeepattackgameHUD::StaticClass();
}
