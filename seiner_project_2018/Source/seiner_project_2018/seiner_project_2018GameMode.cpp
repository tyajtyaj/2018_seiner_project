// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "seiner_project_2018GameMode.h"
#include "seiner_project_2018Character.h"
#include "UObject/ConstructorHelpers.h"

Aseiner_project_2018GameMode::Aseiner_project_2018GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
