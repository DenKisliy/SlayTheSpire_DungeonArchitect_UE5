#pragma once

#include "CoreMinimal.h"

#include "DungeonRoomStruct.h"

#include "DungeonGenerateManagerStruct.generated.h"

UENUM(BlueprintType)
enum class ETypeOfDungeonRoom : uint8
{
	None = 0,
	Monster,
	Event,
	Elite,
	RestSite,
	Merchant,
	Treasure
};

USTRUCT(BlueprintType)
struct FGridPointData
{
	GENERATED_USTRUCT_BODY();

	int32 Row;

	int32 Column;

	FVector Position;

	TArray<int32> PermissiblePointsArray;

	TArray<FGridPointData*> PreviousPointsArray;

	ETypeOfDungeonRoom Type;

	TArray<int32> RepeatPointInGridArray;

	TArray<int32> SameChildPointWithGridArray;

	TArray<int32>& GetPermissiblePointsArray()
	{
		return PermissiblePointsArray;
	}

	void SetType(ETypeOfDungeonRoom NewType)
	{
		Type = NewType;
	}

	void AddPreviousPoint(FGridPointData* NewPoint)
	{
		if (PreviousPointsArray.Find(NewPoint) == INDEX_NONE)
		{
			PreviousPointsArray.Add(NewPoint);
		}
	}

	void AddRepeatPointInGrid(int32 GridNumber)
	{
		if (RepeatPointInGridArray.Find(GridNumber) == INDEX_NONE)
		{
			RepeatPointInGridArray.Add(GridNumber);
		}
	}

	void AddSameChildPointWithGrid(TArray<int32> GridsNumberArray)
	{
		for (int32 grid : GridsNumberArray)
		{
			if (SameChildPointWithGridArray.Find(grid) == INDEX_NONE)
			{
				SameChildPointWithGridArray.Add(grid);
			}
		}
	}

	FGridPointData()
	{
		Row = -1;
		Column = -1;
		Position = FVector(0);
		Type = ETypeOfDungeonRoom::None;
	}

	FGridPointData(int32 NewRow, int32 NewColumn, FVector NewPosition, TArray<int32> NewPermissiblePointsArray)
	{
		Row = NewRow;
		Column = NewColumn;
		Position = NewPosition;
		PermissiblePointsArray = NewPermissiblePointsArray;
		Type = ETypeOfDungeonRoom::None;
	}
};

USTRUCT(BlueprintType)
struct FGridArray {
	GENERATED_BODY()
public:

	TArray<FGridPointData*> Ar;

	FGridPointData* operator[] (int32 i)
	{
		return Ar[i];
	}

	void Add(FGridPointData* Grid)
	{
		Ar.Add(Grid);
	}

	int32 Num()
	{
		return Ar.Num();
	}

	int32 GetRowColumn(int32 Row)
	{
		return Ar[Row]->Column;
	}

	FVector GetRowPosition(int32 Row)
	{
		return Ar[Row]->Position;
	}

	ETypeOfDungeonRoom GetRowypeOfDungeonRoom(int32 Row)
	{
		return Ar[Row]->Type;
	}

	void SetTypeForRoomOnRow(int32 Row, ETypeOfDungeonRoom TypeOfRoom)
	{
		Ar[Row]->SetType(TypeOfRoom);
	}

	FGridArray()
	{
		Ar.Empty();
	}

	FGridArray(TArray<FGridPointData*> GridPoint)
	{
		Ar = GridPoint;
	}
};