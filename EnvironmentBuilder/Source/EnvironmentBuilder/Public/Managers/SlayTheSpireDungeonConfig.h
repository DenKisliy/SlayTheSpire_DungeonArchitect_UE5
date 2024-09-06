// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/DungeonConfig.h"

#include "../Data/DungeonGenerateManagerStruct.h"
#include "../Actors/DungeonRoom.h"

#include "SlayTheSpireDungeonConfig.generated.h"

/**
 * 
 */
UCLASS()
class ENVIRONMENTBUILDER_API USlayTheSpireDungeonConfig : public UDungeonConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
	int32 CountOfStartPoints = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
	int32 CountOfGrids = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
	FName PathToRoomLevel;
	
	UPROPERTY(VisibleAnywhere, Category = Dungeon)
	int32 CountOfColumns = 7;
	
	UPROPERTY(VisibleAnywhere, Category = Dungeon)
	int32 CountOfRows = 15;
	
	UPROPERTY(BlueprintReadOnly, Category = Dungeon)
	int32 RowFromWhichCanChooseEliteAndRestSite = 5;
	
	UPROPERTY(BlueprintReadOnly, Category = Dungeon)
	int32 RowOnWhichCanNotChooseRestSite = 13;
	
	UPROPERTY(BlueprintReadWrite, Category = Dungeon)
	int32 RowOnWhichCanBeOnlyMonster = 1;
	
	UPROPERTY(BlueprintReadOnly, Category = Dungeon)
	int32 RowOnWhichCanBeOnlyTreasure = 9;
	
	UPROPERTY(BlueprintReadOnly, Category = Dungeon)
	int32 RowOnWhichCanBeOnlyRestSite = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (ClampMin = "1100.0"))
	int32 DistanceBetweenRoomsAlongXAxis = 1100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (ClampMin = "1100.0"))
	int32 DistanceBetweenRoomsAlongYAxis = 1100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
	TMap<ETypeOfDungeonRoom, int32> ProbabilitiesForRooms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
	TSubclassOf<ADungeonRoom> DungeonRoomStatic;
};
