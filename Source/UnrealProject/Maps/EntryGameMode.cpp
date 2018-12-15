// Fill out your copyright notice in the Description page of Project Settings.

#include "EntryGameMode.h"
#include "Player/EntryPlayerController.h"
#include "UI/GameHUD.h"

AEntryGameMode::AEntryGameMode(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	//HUDClass = AGameHUD::StaticClass();
	PlayerControllerClass = AEntryPlayerController::StaticClass();
}

void AEntryGameMode::RestartPlayer(class AController* NewPlayer)
{
	// don't restart
}

