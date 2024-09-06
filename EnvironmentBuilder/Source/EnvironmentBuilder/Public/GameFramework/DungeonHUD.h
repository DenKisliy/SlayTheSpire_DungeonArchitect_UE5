// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "../UI/ConfirmWidget.h"

#include "DungeonHUD.generated.h"

/**
 * 
 */
UCLASS()
class ENVIRONMENTBUILDER_API ADungeonHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Category = "Widget Class", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UConfirmWidget> ConfirmWidgetClass;

private:
	UConfirmWidget* ConfirmWidget;

public:
	ADungeonHUD(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	void SetTextForConfirmWidget(FString Text);
};
