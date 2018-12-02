// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EntryUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UEntryUserWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()

	virtual bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* StartButton;
	
public:
	UFUNCTION()
	void OnClickStartButton();
};
