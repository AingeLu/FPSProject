// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EntryGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AEntryGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()
	
	
public:

	// Begin AGameModeBase interface
	/** skip it, menu doesn't require player start or pawn */
	virtual void RestartPlayer(class AController* NewPlayer) override;
	// End AGameModeBase interface
	
};
