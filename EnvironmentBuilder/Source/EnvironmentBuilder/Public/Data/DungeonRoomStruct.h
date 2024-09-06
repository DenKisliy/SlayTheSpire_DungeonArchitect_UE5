#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "DungeonRoomStruct.generated.h"

UENUM(BlueprintType)
enum class ETypeOfRoom : uint8
{
	None = 0,
	DungeonRoom,
	StartRoom,
	BossRoom
};

USTRUCT(BlueprintType)
struct FDungeonRoomData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ETypeOfRoom Type;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Row;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Column;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Position;

	FDungeonRoomData()
	{
		Type = ETypeOfRoom::None;
		Row = -1;
		Column = -1;
		Position = FVector(0);
	}

	FDungeonRoomData(ETypeOfRoom NewType, int32 NewRow, int32 NewColumn, FVector NewPosition)
	{
		Type = NewType;
		Row = NewRow - 1;
		Column = NewColumn - 1;
		Position = NewPosition;
	}
};
