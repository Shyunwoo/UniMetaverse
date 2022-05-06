// Copyright Epic Games, Inc. All Rights Reserved.

#include "DaejinDemoGameMode.h"
#include "DaejinDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADaejinDemoGameMode::ADaejinDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
