// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatformeGameMode.h"
#include "PuzzlePlatformeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatformeGameMode::APuzzlePlatformeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
