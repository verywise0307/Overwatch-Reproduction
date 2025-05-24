// Copyright Epic Games, Inc. All Rights Reserved.

#include "Overwatch2_RemakeGameMode.h"
#include "Overwatch2_RemakeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOverwatch2_RemakeGameMode::AOverwatch2_RemakeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
