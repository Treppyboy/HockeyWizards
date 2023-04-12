// Copyright Epic Games, Inc. All Rights Reserved.

#include "HockeyWizardsGameMode.h"
#include "HockeyWizardsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHockeyWizardsGameMode::AHockeyWizardsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
