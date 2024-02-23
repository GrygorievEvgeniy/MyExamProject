// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyCProjectGameMode.h"
#include "MyCProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyCProjectGameMode::AMyCProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
