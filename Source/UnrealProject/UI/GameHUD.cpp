// Fill out your copyright notice in the Description page of Project Settings.

#include "GameHUD.h"
#include "UObject/ConstructorHelpers.h"
#include "UI/Entry/EntryUserWidget.h"

AGameHUD::AGameHUD(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UUserWidget> EntryUserWidgetBP(TEXT("/Game/UI/Entry/BP_EntryUserWidget")); // �ҵ���ͼ��
	if (EntryUserWidgetBP.Succeeded())
	{
		EntryWidgetClass = EntryUserWidgetBP.Class; // �õ�class
	}
}

void AGameHUD::BeginPlay()
{
	if (EntryWidgetClass != nullptr)
	{
		UEntryUserWidget* Widget = CreateWidget<UEntryUserWidget>(GetWorld()->GetGameInstance(), EntryWidgetClass);
		if (Widget != nullptr)
		{
			Widget->AddToViewport();
		}
	}
}


