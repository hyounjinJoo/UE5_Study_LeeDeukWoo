// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study_LeeDeukWooGameMode.h"
#include "Study_LeeDeukWooCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudy_LeeDeukWooGameMode::AStudy_LeeDeukWooGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
