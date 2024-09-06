// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/DungeonBuilder.h"

#include "SlayTheSpireDungeonConfig.h"
#include "SlayTheSpireDungeonModel.h"
#include "SlayTheSpireDungeonQuery.h"
#include "SlayTheSpireDungeonToolData.h"

#include "SlayTheSpireDungeonBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SlayTheSpireDungeonBuilderLog, Log, All);

/**
 * 
 */
UCLASS(Experimental, Meta = (DisplayName = "Slay The Spire"))
class ENVIRONMENTBUILDER_API USlayTheSpireDungeonBuilder : public UDungeonBuilder
{
	GENERATED_BODY()

public:
	virtual void BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<class FDungeonSceneProvider> SceneProvider) override;
	virtual void DestroyNonThemedDungeonImpl(UWorld* World) override;

	virtual TSubclassOf<UDungeonModel> GetModelClass() override;
	virtual TSubclassOf<UDungeonConfig> GetConfigClass() override;
	virtual TSubclassOf<UDungeonToolData> GetToolDataClass() override;
	virtual TSubclassOf<UDungeonQuery> GetQueryClass() override;

	virtual bool SupportsTheming() const { return false; }

private:
	USlayTheSpireDungeonModel* SlayTheSpireModel;

	USlayTheSpireDungeonConfig* SlayTheSpireConfig;

	TArray<int32> StartPoints;

	TArray<FGridArray*> GridsArray;

private:
	void BuildGrids();

	void GenerateStartPoint();

	FGridArray* GenerateGrid();

	bool IsNewColumnCrossWithAnotherGrids(int32 NewColumn, int32 PreviousColumn, int32 Row);

	int32 GetNextColumn(int32 lastColumn);

	TArray<int32> GetPermissiblePointsArray(int32 lastColumn);

	void AddCheckPointInGrid(FGridArray* Grid, int32 Row, int32 Column, TArray<int32> PermissiblePointsArray);

	int32 GetMinValueOfChooseColumn(int32 lastColumn);

	int32 GetMaxValueOfChooseColumn(int32 lastColumn);

	bool IsGridsCross(int32 y1, int32 y2,
		int32 y3, int32 y4);

	int32 FindAnotherPoint(TArray<int32>& CheckPointsArray);

	void AddingAdditionalInformationForPointsToDefineType();

	void SetTypeForRooms();

	ETypeOfDungeonRoom GetRandomType();

	void SpawnRoomsAfterGenerate();

	FVector GetRoomPosition(int32 Row, int32 Column);

	int32 GetRoomSpawnBeforeIndex(int32 Row, int32 Column);

	ADungeonRoom* SpawnRoom(ETypeOfRoom Type, ETypeOfDungeonRoom TypeOfDungeonRoom, int32 Row, int32 Column, TArray<FVector> NextRoomPositionArray);

	void SpawnRoomFromSave(UDungeonSaveGame* SaveGameObject);

	ADungeonRoom* SpawnRoom(ETypeOfRoom Type, ETypeOfDungeonRoom TypeOfDungeonRoom, int32 Row, int32 Column, TArray<FVector> NextRoomPositionArray, 
		TArray<FVector> PreviousRoomPositionArray, bool bCheck);

	void SaveGrids();
};
