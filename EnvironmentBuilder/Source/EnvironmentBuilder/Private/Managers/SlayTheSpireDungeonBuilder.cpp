// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/SlayTheSpireDungeonBuilder.h"

DEFINE_LOG_CATEGORY(SlayTheSpireDungeonBuilderLog);

void USlayTheSpireDungeonBuilder::BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<class FDungeonSceneProvider> SceneProvider)
{
    SlayTheSpireModel = Cast<USlayTheSpireDungeonModel>(DungeonModel);
    SlayTheSpireConfig = Cast<USlayTheSpireDungeonConfig>(DungeonConfig);

    if (!SlayTheSpireModel) {
        UE_LOG(SlayTheSpireDungeonBuilderLog, Error, TEXT("Invalid dungeon model provided to the grid builder"));
        return;
    }

    if (!SlayTheSpireConfig) {
        UE_LOG(SlayTheSpireDungeonBuilderLog, Error, TEXT("Invalid dungeon gridConfig provided to the grid builder"));
        return;
    }

    FString saveName = "SlayTheSpire";
    if (UDungeonSaveGame* saveGameObject = Cast<UDungeonSaveGame>(UGameplayStatics::LoadGameFromSlot(saveName, 0)))
    {
        if (!saveGameObject->bRebuild)
        {
            SpawnRoomFromSave(saveGameObject);
        }
        else
        {
            BuildGrids();
        }
    }
    else
    {
        BuildGrids();
    }

    WorldMarkers.Reset();
}

void USlayTheSpireDungeonBuilder::DestroyNonThemedDungeonImpl(UWorld* World)
{
    SlayTheSpireModel = Cast<USlayTheSpireDungeonModel>(DungeonModel);
    SlayTheSpireConfig = Cast<USlayTheSpireDungeonConfig>(DungeonConfig);

    SlayTheSpireModel->Reset();

    StartPoints.Empty();

    GridsArray.Empty();
    
    FString saveName = "SlayTheSpire";
    if (UDungeonSaveGame* saveGameObject = Cast<UDungeonSaveGame>(UGameplayStatics::LoadGameFromSlot(saveName, 0)))
    {
        saveGameObject->bRebuild = true;
        UGameplayStatics::SaveGameToSlot(saveGameObject, saveName, 0);
    }

    WorldMarkers.Reset();
}

TSubclassOf<UDungeonModel> USlayTheSpireDungeonBuilder::GetModelClass()
{
    return USlayTheSpireDungeonModel::StaticClass();
}

TSubclassOf<UDungeonConfig> USlayTheSpireDungeonBuilder::GetConfigClass()
{
    return USlayTheSpireDungeonConfig::StaticClass();
}

TSubclassOf<UDungeonToolData> USlayTheSpireDungeonBuilder::GetToolDataClass()
{
    return USlayTheSpireDungeonToolData::StaticClass();
}

TSubclassOf<UDungeonQuery> USlayTheSpireDungeonBuilder::GetQueryClass()
{
    return USlayTheSpireDungeonQuery::StaticClass();
}

void USlayTheSpireDungeonBuilder::BuildGrids()
{
    GenerateStartPoint();

    do
    {
        GridsArray.Add(GenerateGrid());
    } while (GridsArray.Num() != SlayTheSpireConfig->CountOfGrids);

   AddingAdditionalInformationForPointsToDefineType();

    SetTypeForRooms();

    SpawnRoomsAfterGenerate();
}

void USlayTheSpireDungeonBuilder::GenerateStartPoint()
{
    do
    {
        int32 newStartPoint = FMath::RandRange(0, SlayTheSpireConfig->CountOfColumns - 1);
        if (StartPoints.Find(newStartPoint) == INDEX_NONE)
        {
            StartPoints.Add(newStartPoint);
        }
    } while (StartPoints.Num() != SlayTheSpireConfig->CountOfStartPoints);
}

FGridArray* USlayTheSpireDungeonBuilder::GenerateGrid()
{
    FGridArray* grid = new FGridArray();

    do
    {
        int32 row = grid->Ar.IsEmpty() ? 1 : grid->Ar.Last()->Row;
        int32 column = grid->Ar.IsEmpty() ? -1 : grid->Ar.Last()->Column - 1;
        int32 newColumn = GetNextColumn(column);
        TArray<int32> permissiblePointsArray = grid->Ar.IsEmpty() ? StartPoints : GetPermissiblePointsArray(column);
        permissiblePointsArray.Remove(newColumn);

        if (!grid->Ar.IsEmpty())
        {
            bool bCheck = IsNewColumnCrossWithAnotherGrids(column, newColumn, row);
            
            do
            {
                if (bCheck && permissiblePointsArray.Num() > 0)
                {
                    newColumn = FindAnotherPoint(permissiblePointsArray);
                    permissiblePointsArray.Remove(newColumn);
                    bCheck = IsNewColumnCrossWithAnotherGrids(column, newColumn, row);

                }
            } while (bCheck);

            row = row + 1;
        }

        AddCheckPointInGrid(grid, row, newColumn, permissiblePointsArray);

    } while (grid->Ar.Num() < SlayTheSpireConfig->CountOfRows);

    return grid;
}

bool USlayTheSpireDungeonBuilder::IsNewColumnCrossWithAnotherGrids(int32 NewColumn, int32 PreviousColumn, int32 Row)
{
    for (FGridArray* checkGrid : GridsArray)
    {
        if (IsGridsCross(NewColumn, PreviousColumn, checkGrid->GetRowColumn(Row - 1) - 1, checkGrid->GetRowColumn(Row) - 1))
        {
            return true;
        }
    }

    return false;
}

int32 USlayTheSpireDungeonBuilder::GetNextColumn(int32 lastColumn)
{
    int32 nextColumn;

    int32 minColumn = GetMinValueOfChooseColumn(lastColumn);
    int32 maxColumn = GetMaxValueOfChooseColumn(lastColumn);

    if (minColumn == 0 && maxColumn == SlayTheSpireConfig->CountOfColumns - 1)
    {
        int32 index = GridsArray.IsEmpty() ? 0 : (GridsArray.Num() >= SlayTheSpireConfig->CountOfStartPoints ? 
            FMath::RandRange(0, SlayTheSpireConfig->CountOfStartPoints - 1) : GridsArray.Num());
        nextColumn = StartPoints[index];
    }
    else
    {
        nextColumn = FMath::RandRange(minColumn, maxColumn);
    }

    return nextColumn;
}

TArray<int32> USlayTheSpireDungeonBuilder::GetPermissiblePointsArray(int32 lastColumn)
{
    TArray<int32> resultArray;

    int32 min = GetMinValueOfChooseColumn(lastColumn);
    int32 max = GetMaxValueOfChooseColumn(lastColumn);

    for (int i = min; i < max + 1; i++)
    {
        resultArray.Add(i);
    }
    return resultArray;
}

void USlayTheSpireDungeonBuilder::AddCheckPointInGrid(FGridArray* Grid, int32 Row, int32 Column, TArray<int32> PermissiblePointsArray)
{
    if (FGridPointData* newPoint = new FGridPointData(Row, Column + 1, GetRoomPosition(Row, Column + 1), PermissiblePointsArray))
    {
        if (Row > 1)
        {
            newPoint->AddPreviousPoint(Grid->Ar.Last());
        }
        Grid->Ar.Add(newPoint);
    }
}

int32 USlayTheSpireDungeonBuilder::GetMinValueOfChooseColumn(int32 lastColumn)
{
    return lastColumn == -1 ? 0 : (lastColumn - 1 < 0 ? 0 : lastColumn - 1);
}

int32 USlayTheSpireDungeonBuilder::GetMaxValueOfChooseColumn(int32 lastColumn)
{
    return lastColumn == -1 ? SlayTheSpireConfig->CountOfColumns - 1 : (lastColumn + 1 > SlayTheSpireConfig->CountOfColumns - 1 ? SlayTheSpireConfig->CountOfColumns - 1 : lastColumn + 1);
}

bool USlayTheSpireDungeonBuilder::IsGridsCross(int32 y1, int32 y2, int32 y3, int32 y4)
{
    return FMath::Abs(y1 - y3) && y1 == y4 && y2 == y3;
}

int32 USlayTheSpireDungeonBuilder::FindAnotherPoint(TArray<int32>& CheckPointsArray)
{
    if (CheckPointsArray.Num() > 1)
    {
        return CheckPointsArray[FMath::RandRange(1, CheckPointsArray.Num()) - 1];
    }
    else if (CheckPointsArray.Num() == 1)
    {
        return CheckPointsArray[0];
    }
    else
    {
        return -1;
    }
}

void USlayTheSpireDungeonBuilder::AddingAdditionalInformationForPointsToDefineType()
{
    for (int i = 0; i < GridsArray.Num(); i++)
    {
        for (int j = 1; j < SlayTheSpireConfig->CountOfRows; j++)
        {
            for (int k = 0; k < GridsArray.Num(); k++)
            {
                // for the case when the previous point coincides with another grid (\/)
                if (GridsArray[i]->GetRowColumn(j - 1) == GridsArray[k]->GetRowColumn(j - 1))
                {
                    GridsArray[i]->Ar[j - 1]->AddRepeatPointInGrid(k);
                    GridsArray[i]->Ar[j]->AddPreviousPoint(GridsArray[k]->Ar[j - 1]);
                }
            }
        }
    }

    for (int i = 0; i < GridsArray.Num(); i++)
    {
        for (int j = 1; j < SlayTheSpireConfig->CountOfRows; j++)
        {
            for (int k = 0; k < GridsArray.Num(); k++)
            {
                // for the case when the previous point coincides with another grid (/\)
                if (GridsArray[i]->GetRowColumn(j) == GridsArray[k]->GetRowColumn(j))
                {
                    GridsArray[i]->Ar[j]->AddSameChildPointWithGrid(GridsArray[k]->Ar[j - 1]->RepeatPointInGridArray);
                }
            }
        }
    }
}

void USlayTheSpireDungeonBuilder::SetTypeForRooms()
{
    for (FGridArray* grid : GridsArray)
    {
        grid->SetTypeForRoomOnRow(SlayTheSpireConfig->RowOnWhichCanBeOnlyMonster - 1, ETypeOfDungeonRoom::Monster);

        grid->SetTypeForRoomOnRow(SlayTheSpireConfig->RowOnWhichCanBeOnlyTreasure - 1, ETypeOfDungeonRoom::Treasure);

        grid->SetTypeForRoomOnRow(SlayTheSpireConfig->RowOnWhichCanBeOnlyRestSite - 1, ETypeOfDungeonRoom::RestSite);
    }

    for (int i = 1; i < SlayTheSpireConfig->CountOfRows; i++)
    {
        for (int j = 0; j < GridsArray.Num(); j++)
        {
            ETypeOfDungeonRoom checkType = GetRandomType();

            bool bCheck = false;
            FGridPointData* point = GridsArray[j]->Ar[i];
            TArray<ETypeOfDungeonRoom> previousTypeArray;

            auto addFunctionWithCheck = [](ETypeOfDungeonRoom Type, TArray<ETypeOfDungeonRoom>& Array) {
                if (Array.Find(Type) == INDEX_NONE)
                {
                    Array.Add(Type);
                };
                };

            if (i < SlayTheSpireConfig->RowFromWhichCanChooseEliteAndRestSite)
            {
                addFunctionWithCheck(ETypeOfDungeonRoom::Elite, previousTypeArray);
                addFunctionWithCheck(ETypeOfDungeonRoom::RestSite, previousTypeArray);
            }

            if (i == SlayTheSpireConfig->RowOnWhichCanNotChooseRestSite)
            {
                addFunctionWithCheck(ETypeOfDungeonRoom::RestSite, previousTypeArray);
            }

            for (FGridPointData* pointData : point->PreviousPointsArray)
            {
                switch (pointData->Type)
                {
                case ETypeOfDungeonRoom::Elite:
                    addFunctionWithCheck(ETypeOfDungeonRoom::Elite, previousTypeArray);
                    break;
                case ETypeOfDungeonRoom::Merchant:
                    addFunctionWithCheck(ETypeOfDungeonRoom::Merchant, previousTypeArray);
                    break;
                case ETypeOfDungeonRoom::RestSite:
                    addFunctionWithCheck(ETypeOfDungeonRoom::RestSite, previousTypeArray);
                    break;
                }
            }

            for (int index : GridsArray[j]->Ar[i]->SameChildPointWithGridArray)
            {
                if (GridsArray[index]->GetRowypeOfDungeonRoom(i) != ETypeOfDungeonRoom::None)
                {
                    addFunctionWithCheck(GridsArray[index]->GetRowypeOfDungeonRoom(i), previousTypeArray);
                }
            }

            if (SlayTheSpireConfig->ProbabilitiesForRooms.Num() == previousTypeArray.Num() - 1)
            {
                TArray<ETypeOfDungeonRoom> allTypeArray;

                for (const auto& pair : SlayTheSpireConfig->ProbabilitiesForRooms)
                {
                    allTypeArray.Add(pair.Key);
                }

                for (ETypeOfDungeonRoom type : allTypeArray)
                {
                    if (previousTypeArray.Find(type) == INDEX_NONE)
                    {
                        checkType = type;
                    }
                }
            }

            if (point->Type == ETypeOfDungeonRoom::None)
            {
                do
                {
                    if (previousTypeArray.Find(checkType) == INDEX_NONE)
                    {
                        point->SetType(checkType);
                        for (int grid : point->RepeatPointInGridArray)
                        {
                            GridsArray[grid]->Ar[i]->SetType(checkType);
                        }

                        bCheck = true;
                    }
                    else
                    {
                        checkType = GetRandomType();
                    }
                } while (!bCheck);
            }
        }
    }
}

ETypeOfDungeonRoom USlayTheSpireDungeonBuilder::GetRandomType()
{
    ETypeOfDungeonRoom checkType = ETypeOfDungeonRoom::None;

    TMap<ETypeOfDungeonRoom, int> probabilityArray;

    if (SlayTheSpireConfig->ProbabilitiesForRooms.Num() > 1)
    {
        int randomValue = rand() % 100 + 1;
        int lastProbality = 0;
        for (auto info : SlayTheSpireConfig->ProbabilitiesForRooms)
        {
            if (info.Value != 0)
            {
                lastProbality = probabilityArray.Num() > 0 ? (lastProbality + info.Value) : info.Value;
                probabilityArray.Add(info.Key, lastProbality);
            }
        }

        for (auto info : probabilityArray)
        {
            if (randomValue < info.Value + 1)
            {
                checkType = info.Key;
                break;
            }
        }
    }

    return checkType;
}

void USlayTheSpireDungeonBuilder::SpawnRoomsAfterGenerate()
{
    if (SlayTheSpireConfig->DungeonRoomStatic && GridsArray.Num() > 0)
    {
        AsyncTask(ENamedThreads::GameThread, [this]()
            {
                TArray<FVector> nextPointArray;

                auto addFunctionWithCheck = [](FVector Position, TArray<FVector>& Array) {
                    if (Array.Find(Position) == INDEX_NONE)
                    {
                        Array.Add(Position);
                    };
                    };
                
                // Start room
                for (FGridArray* grid : GridsArray)
                {
                    addFunctionWithCheck(grid->GetRowPosition(0), nextPointArray);
                }

                ADungeonRoom* newroom = SpawnRoom(ETypeOfRoom::StartRoom, ETypeOfDungeonRoom::None, 0, 4, nextPointArray);

                if (IsValid(newroom))
                {
                    SlayTheSpireModel->AddNewRoom(newroom);
                }

                // Dungeon room
                for (int i = 0; i < GridsArray.Num(); i++)
                {
                    for (int j = 0; j < SlayTheSpireConfig->CountOfRows; j++)
                    {
                        int32 findIndex = GetRoomSpawnBeforeIndex(j + 1, GridsArray[i]->GetRowColumn(j));
                        nextPointArray.Empty();

                        if (j < SlayTheSpireConfig->CountOfRows - 1)
                        {
                            addFunctionWithCheck(GridsArray[i]->GetRowPosition(j + 1), nextPointArray);

                        }
                        else if (j < SlayTheSpireConfig->CountOfRows)
                        {
                            addFunctionWithCheck(GetRoomPosition(SlayTheSpireConfig->CountOfRows + 1, 4), nextPointArray);
                        }

                        if (findIndex == -1)
                        {
                            newroom = SpawnRoom(ETypeOfRoom::DungeonRoom, GridsArray[i]->GetRowypeOfDungeonRoom(j), j + 1, GridsArray[i]->GetRowColumn(j), nextPointArray);

                            if (IsValid(newroom))
                            {
                                for (FGridPointData* previousGrid : GridsArray[i]->Ar[j]->PreviousPointsArray)
                                {
                                    newroom->AddPointInPreviousRoomPositionArray(previousGrid->Position);
                                }

                                if (j + 1 == 1)
                                {
                                    newroom->AddPointInPreviousRoomPositionArray(GetRoomPosition(0, 4));
                                }

                                SlayTheSpireModel->AddNewRoom(newroom);
                            }
                        }
                        else
                        {
                            newroom = SlayTheSpireModel->Rooms[findIndex];
                            newroom->AddPointsInNextRoomPositionArray(nextPointArray);
                            for (FGridPointData* previousGrid : GridsArray[i]->Ar[j]->PreviousPointsArray)
                            {
                                newroom->AddPointInPreviousRoomPositionArray(previousGrid->Position);
                            }
                            if (j + 1 == 1)
                            {
                                newroom->AddPointInPreviousRoomPositionArray(GetRoomPosition(0, 4));
                            }

                        }
                    }
                }

                // Boss room
                nextPointArray.Empty();

                newroom = SpawnRoom(ETypeOfRoom::BossRoom, ETypeOfDungeonRoom::None, SlayTheSpireConfig->CountOfRows + 1, 4, nextPointArray);

                if (IsValid(newroom))
                {
                    for (FGridArray* previousGrid : GridsArray)
                    {
                        newroom->AddPointInPreviousRoomPositionArray(previousGrid->GetRowPosition(SlayTheSpireConfig->CountOfRows - 1));
                    }

                    SlayTheSpireModel->AddNewRoom(newroom);
                }

                for (ADungeonRoom* room : SlayTheSpireModel->Rooms)
                {
                    room->SetValuesFromConfig(SlayTheSpireConfig->DistanceBetweenRoomsAlongYAxis, SlayTheSpireConfig->CountOfRows, SlayTheSpireConfig->CountOfColumns, SlayTheSpireConfig->PathToRoomLevel);
                    room->GenerateWaysMeshs();
                    room->SetRoomsArray(SlayTheSpireModel->Rooms);
                }

                SaveGrids();
            });
    }
}

FVector USlayTheSpireDungeonBuilder::GetRoomPosition(int32 Row, int32 Column)
{
    FVector position = FVector(0);
    position.X = Row * SlayTheSpireConfig->DistanceBetweenRoomsAlongXAxis;
    int32 centralColumn = (SlayTheSpireConfig->CountOfColumns / 2) + 1;

    position.Y = Column == centralColumn ? 0 : (centralColumn - Column) * SlayTheSpireConfig->DistanceBetweenRoomsAlongYAxis;

    return position;
}

int32 USlayTheSpireDungeonBuilder::GetRoomSpawnBeforeIndex(int32 Row, int32 Column)
{
    int32 index = -1;

    for (int i = 0; i < SlayTheSpireModel->Rooms.Num(); i++)
    {
        if (SlayTheSpireModel->Rooms[i]->Row == Row && SlayTheSpireModel->Rooms[i]->Column == Column)
        {
            index = i;
            break;
        }
    }

    return index;
}

ADungeonRoom* USlayTheSpireDungeonBuilder::SpawnRoom(ETypeOfRoom Type, ETypeOfDungeonRoom TypeOfDungeonRoom, int32 Row, int32 Column, TArray<FVector> NextRoomPositionArray)
{
    FVector position = GetRoomPosition(Row, Column);

    ADungeonRoom* room = GetWorld()->SpawnActor<ADungeonRoom>(SlayTheSpireConfig->DungeonRoomStatic, position, FRotator(0));

    if (IsValid(room))
    {
        room->InitializeData(Type, TypeOfDungeonRoom, Row, Column, NextRoomPositionArray);
    }

    return room;
}

void USlayTheSpireDungeonBuilder::SpawnRoomFromSave(UDungeonSaveGame* SaveGameObject)
{
    AsyncTask(ENamedThreads::GameThread, [this, SaveGameObject]()
        {
         for (int32 i = 0; i < SaveGameObject->CountOfRooms; i++)
            {
                TArray<FVector> nextPointsRoom;
                TArray<FVector> previousPointsRoom;

                switch (SaveGameObject->TypeArray[i])
                {
                case ETypeOfRoom::StartRoom:
                    nextPointsRoom.Add(SaveGameObject->NextPoints[0]);
                    break;
                case ETypeOfRoom::DungeonRoom:
                { 
                    auto addPointsFunction = [](int32 StartIndex, TArray<FVector>& ResultArray, int32 DataCount, TArray<FVector> DataArray) {
                    int32 count = StartIndex;
                    while (ResultArray.Num() != DataCount)
                    {
                        ResultArray.Add(DataArray[count]);
                        count = count + 1;
                    };
                    };

                    int32 startIndexForNextPoints = 0;
                    int32 startIndexForPreviousPoints = 0;

                    for (int32 j = 0; j < i; j++)
                    {
                        startIndexForNextPoints = startIndexForNextPoints + SaveGameObject->NextPointsCountArray[j];
                        startIndexForPreviousPoints = startIndexForPreviousPoints + SaveGameObject->PreviousPointsCountArray[j];
                    }

                    if (SaveGameObject->NextPointsCountArray[i] > 0)
                    {
                        addPointsFunction(startIndexForNextPoints, nextPointsRoom, SaveGameObject->NextPointsCountArray[i], SaveGameObject->NextPoints);
                    }

                    if (SaveGameObject->PreviousPointsCountArray[i] > 0)
                    {
                        addPointsFunction(startIndexForPreviousPoints, previousPointsRoom, SaveGameObject->PreviousPointsCountArray[i], SaveGameObject->PreviousPoints);
                    }
                }
                break;

                case ETypeOfRoom::BossRoom:
                {

                    for (ADungeonRoom* room : SlayTheSpireModel->Rooms)
                    {
                        if (SaveGameObject->bCheckArray.Last())
                        {
                            if (room->Row == SlayTheSpireConfig->CountOfRows && room->bCheck)
                            {
                                previousPointsRoom.Add(room->GetActorLocation());
                                break;
                            }
                        }
                        else
                        {
                            if (room->Row == SlayTheSpireConfig->CountOfRows)
                            {
                                if (room->bCheck)
                                {
                                    previousPointsRoom.Empty();
                                    previousPointsRoom.Add(room->GetActorLocation());
                                    break;
                                }
                                else
                                {
                                    previousPointsRoom.Add(room->GetActorLocation());
                                }
                            }
                        }
                    }
                }
                break;
                }

                ADungeonRoom* newroom = SpawnRoom(SaveGameObject->TypeArray[i], SaveGameObject->TypeOfDungeonRoomArray[i],
                    SaveGameObject->RowsArray[i], SaveGameObject->ColumnsArray[i], nextPointsRoom, previousPointsRoom, SaveGameObject->bCheckArray[i]);
                SlayTheSpireModel->AddNewRoom(newroom);
            }


            for (ADungeonRoom* room : SlayTheSpireModel->Rooms)
            {
                room->SetValuesFromConfig(SlayTheSpireConfig->DistanceBetweenRoomsAlongYAxis, SlayTheSpireConfig->CountOfRows, SlayTheSpireConfig->CountOfColumns, SlayTheSpireConfig->PathToRoomLevel);
                room->GenerateWaysMeshs();
                room->SetRoomsArray(SlayTheSpireModel->Rooms);
            }
        });
}

ADungeonRoom* USlayTheSpireDungeonBuilder::SpawnRoom(ETypeOfRoom Type, ETypeOfDungeonRoom TypeOfDungeonRoom, int32 Row, int32 Column, TArray<FVector> NextRoomPositionArray, TArray<FVector> PreviousRoomPositionArray, bool bCheck)
{
    FVector position = GetRoomPosition(Row, Column);

    ADungeonRoom* room = GetWorld()->SpawnActor<ADungeonRoom>(SlayTheSpireConfig->DungeonRoomStatic, position, FRotator(0));

    if (IsValid(room))
    {
        room->InitializeData(Type, TypeOfDungeonRoom, Row, Column, NextRoomPositionArray,
            PreviousRoomPositionArray, bCheck);
    }

    return room;
}

void USlayTheSpireDungeonBuilder::SaveGrids()
{
   if (SlayTheSpireModel->Rooms.Num() > 0)
    {
        TArray<int32> rowsArray;

        TArray<int32> columnsArray;

        TArray<FVector> positionArray;

        TArray<ETypeOfRoom> typeArray;

        TArray<ETypeOfDungeonRoom> typeOfDungeonRoomArray;

        TArray<bool> bCheckArray;

        TArray<int32> nextPointsCountArray;

        TArray<int32> previousPointsCountArray;

        TArray<FVector> nextPoints;

        TArray<FVector> previousPoints;

        for (ADungeonRoom* room : SlayTheSpireModel->Rooms)
        {
            rowsArray.Add(room->Row);

            columnsArray.Add(room->Column);

            positionArray.Add(room->Position);

            typeArray.Add(room->Type);

            typeOfDungeonRoomArray.Add(room->TypeOfDungeonRoom);

            bCheckArray.Add(room->bCheck);

            nextPointsCountArray.Add(room->NextRoomPositionArray.Num());

            previousPointsCountArray.Add(room->PreviousRoomPositionArray.Num());

            for (FVector position : room->NextRoomPositionArray)
            {
                nextPoints.Add(position);
            }

            for (FVector position : room->PreviousRoomPositionArray)
            {
                previousPoints.Add(position);
            }
        }

        FString saveName = "SlayTheSpire";
        UDungeonSaveGame* saveGameObject = Cast<UDungeonSaveGame>(UGameplayStatics::LoadGameFromSlot(saveName, 0));

        if (!saveGameObject)
        {
            saveGameObject = Cast<UDungeonSaveGame>(UGameplayStatics::CreateSaveGameObject(UDungeonSaveGame::StaticClass()));
        }
        saveGameObject->PlayerTransform =FTransform(FRotator(0), FVector(0), FVector(1));

        saveGameObject->bRebuild = false;
        saveGameObject->CountOfRooms = SlayTheSpireModel->Rooms.Num();
        saveGameObject->RowsArray = rowsArray;
        saveGameObject->ColumnsArray = columnsArray;
        saveGameObject->PositionArray = positionArray;
        saveGameObject->TypeArray = typeArray;
        saveGameObject->TypeOfDungeonRoomArray = typeOfDungeonRoomArray;
        saveGameObject->bCheckArray = bCheckArray;
        saveGameObject->NextPointsCountArray = nextPointsCountArray;
        saveGameObject->PreviousPointsCountArray = previousPointsCountArray;
        saveGameObject->NextPoints = nextPoints;
        saveGameObject->PreviousPoints = previousPoints;

        UGameplayStatics::SaveGameToSlot(saveGameObject, saveName, 0);
    }
}
