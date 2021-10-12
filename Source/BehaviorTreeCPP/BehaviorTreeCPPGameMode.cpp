// Copyright Epic Games, Inc. All Rights Reserved.

#include "BehaviorTreeCPPGameMode.h"
#include "BehaviorTreeCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABehaviorTreeCPPGameMode::ABehaviorTreeCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
