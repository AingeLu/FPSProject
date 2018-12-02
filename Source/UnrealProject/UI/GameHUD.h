// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class AGameHUD : public AHUD
{
	GENERATED_UCLASS_BODY()
	

	virtual void BeginPlay() override;

private:
	TSubclassOf<class UUserWidget> EntryWidgetClass;
	
};
