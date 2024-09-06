// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/DungeonHUD.h"

ADungeonHUD::ADungeonHUD(const FObjectInitializer& ObjectInitializer)
{
}

void ADungeonHUD::SetTextForConfirmWidget(FString Text)
{
	if (IsValid(ConfirmWidgetClass) && !ConfirmWidget)
	{
		ConfirmWidget = CreateWidget<UConfirmWidget>(this->GetOwningPlayerController(), ConfirmWidgetClass);
		ConfirmWidget->AddToViewport();
	}

	ConfirmWidget->SetText(Text);
}
