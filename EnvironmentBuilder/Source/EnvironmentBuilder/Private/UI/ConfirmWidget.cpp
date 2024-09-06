// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ConfirmWidget.h"

void UConfirmWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UConfirmWidget::SetText(FString Text)
{
	if (!Text.IsEmpty())
	{
		if (TextBlock)
		{
			TextBlock->SetText(FText::FromString(Text));
		}
	}
	else
	{
		TextBlock->SetText(FText::FromString(""));
	}
}
