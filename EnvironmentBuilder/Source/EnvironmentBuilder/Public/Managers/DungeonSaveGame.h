// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "../Data/DungeonGenerateManagerStruct.h"

#include "DungeonSaveGame.generated.h"

UCLASS()
class ENVIRONMENTBUILDER_API UDungeonSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere)
	FTransform PlayerTransform;

	UPROPERTY(VisibleAnywhere)
	int32 CountOfRooms;

	UPROPERTY(VisibleAnywhere)
	bool bRebuild;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> RowsArray;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> ColumnsArray;

	UPROPERTY(VisibleAnywhere)
	TArray<FVector> PositionArray;

	UPROPERTY(VisibleAnywhere)
	TArray<ETypeOfRoom> TypeArray;

	UPROPERTY(VisibleAnywhere)
	TArray<ETypeOfDungeonRoom> TypeOfDungeonRoomArray;

	UPROPERTY(VisibleAnywhere)
	TArray<bool> bCheckArray;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> NextPointsCountArray;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> PreviousPointsCountArray;

	UPROPERTY(VisibleAnywhere)
	TArray<FVector> NextPoints;

	UPROPERTY(VisibleAnywhere)
	TArray<FVector> PreviousPoints;

public:
	UDungeonSaveGame();
};
