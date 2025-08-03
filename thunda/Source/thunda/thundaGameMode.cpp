// Copyright Epic Games, Inc. All Rights Reserved.

#include "thundaGameMode.h"
#include "thundaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthundaGameMode::AthundaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
