// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"

#include "ConfirmWidget.generated.h"

/**
 * 
 */
UCLASS()
class ENVIRONMENTBUILDER_API UConfirmWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UCanvasPanel* CanvasPanel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* TextBlock;

public:
	void NativeConstruct();

	void SetText(FString Text);
};
