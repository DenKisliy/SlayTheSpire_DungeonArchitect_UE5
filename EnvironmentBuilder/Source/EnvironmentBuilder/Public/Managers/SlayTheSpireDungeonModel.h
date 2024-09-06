// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/DungeonModel.h"

#include "../Actors/DungeonRoom.h"
#include "Kismet/GameplayStatics.h"

#include "SlayTheSpireDungeonModel.generated.h"

/**
 * 
 */
UCLASS()
class ENVIRONMENTBUILDER_API USlayTheSpireDungeonModel : public UDungeonModel
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    TArray<ADungeonRoom*> Rooms;

public:
    virtual void Reset() override;

    void AddNewRoom(ADungeonRoom* NewRoom);
};
