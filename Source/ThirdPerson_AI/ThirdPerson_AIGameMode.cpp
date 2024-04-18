// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson_AIGameMode.h"
#include "ThirdPerson_AICharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson_AIGameMode::AThirdPerson_AIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
