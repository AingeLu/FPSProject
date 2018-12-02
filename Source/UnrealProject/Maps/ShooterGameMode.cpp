// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Player/ShooterPlayerController.h"

AShooterGameMode::AShooterGameMode(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	PlayerControllerClass = AShooterPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnOb(TEXT("/Game/Blueprints/Pawns/PlayerPawn"));
	DefaultPawnClass = PlayerPawnOb.Class;
}

