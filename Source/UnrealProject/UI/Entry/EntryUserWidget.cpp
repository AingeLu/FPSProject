// Fill out your copyright notice in the Description page of Project Settings.

#include "EntryUserWidget.h"
#include "Components/Button.h"

UEntryUserWidget::UEntryUserWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UEntryUserWidget::Initialize()
{
	Super::Initialize();

	if (StartButton != nullptr)
	{
		StartButton->OnClicked.AddDynamic(this, &UEntryUserWidget::OnClickStartButton);
	}

	return true;
}

void UEntryUserWidget::OnClickStartButton()
{

}
