// Copyright Epic Games, Inc. All Rights Reserved.

#include "PedestrianSandboxGameMode.h"
#include "PedestrianSandboxPlayerController.h"
#include "PedestrianSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

APedestrianSandboxGameMode::APedestrianSandboxGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APedestrianSandboxPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}