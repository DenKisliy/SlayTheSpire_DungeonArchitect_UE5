// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnvironmentBuilderGameMode.h"
#include "EnvironmentBuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnvironmentBuilderGameMode::AEnvironmentBuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
