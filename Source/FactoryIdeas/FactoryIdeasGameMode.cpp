// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "FactoryIdeas.h"
#include "FactoryIdeasGameMode.h"
#include "FactoryIdeasHUD.h"
#include "FactoryIdeasCharacter.h"

AFactoryIdeasGameMode::AFactoryIdeasGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFactoryIdeasHUD::StaticClass();
}
