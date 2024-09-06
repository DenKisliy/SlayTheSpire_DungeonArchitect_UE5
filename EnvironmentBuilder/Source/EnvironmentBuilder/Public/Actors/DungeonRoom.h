// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "../Data/DungeonGenerateManagerStruct.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "../../EnvironmentBuilderCharacter.h"
#include "../GameFramework/DungeonHUD.h"
#include "../Managers/DungeonSaveGame.h"

#include "DungeonRoom.generated.h"

UCLASS()
class ENVIRONMENTBUILDER_API ADungeonRoom : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CollisionComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FloorMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* RightWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* LeftWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FrontRightPartWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FrontLeftPartWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BackRightPartWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BackLeftPartWallMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FrontPlatformMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BackPlatformMeshComponent;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTextRenderComponent* TextRoomNameComponent;
	
	UPROPERTY(Category = Data, EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMesh* WayMesh;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 Row;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 Column;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<FVector> PreviousRoomPositionArray;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<FVector> NextRoomPositionArray;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ETypeOfRoom Type;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ETypeOfDungeonRoom TypeOfDungeonRoom;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 LengthBetweenAdjacentRooms;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> WaysToNextRoom;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector Position;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 WayMeshSize = 0;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 CollisionSize = 0;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 FloorZPosition = 0;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> WaysAndWallsMesh; 
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> WallsForPlatforms;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<ADungeonRoom*> Rooms;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FName RoomLevelPath; 
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 CountOfRow = 0;

	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int32 CountOfColumn = 0;
	
	UPROPERTY(Category = Data, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bCheck = false;

private:

	const FRotator RotationForNextRoomWayWhereYSame = FRotator(0);

	const FRotator RotationForPreviousRoomWayWhereYSame = FRotator(0, 180, 0);

	const int32 ScaleForYForForwardWay = 2;

	const FVector ScaleForWallWithPassage = FVector(4, 0.1, 3);

	const FRotator RotatorForWallWithPassage = FRotator(0, 90, 0);

	AEnvironmentBuilderCharacter* Player;

public:	
	// Sets default values for this actor's properties
	ADungeonRoom();

	virtual void BeginPlay() override;

	void InitializeData(ETypeOfRoom NewType, ETypeOfDungeonRoom NewTypeOfDungeonRoom, int32 RowValue, int32 ColumnValue, TArray<FVector> NewNextRoomPositionArray);
	
	void InitializeData(ETypeOfRoom NewType, ETypeOfDungeonRoom NewTypeOfDungeonRoom, int32 RowValue, int32 ColumnValue, 
		TArray<FVector> NewNextRoomPositionArray, TArray<FVector> NewPreviousRoomPositionArray, bool bRoomCheck);

	void AddPointsInNextRoomPositionArray(TArray<FVector> NewNextRoomPositionArray);

	void AddPointInPreviousRoomPositionArray(FVector NewPreviousRoomPosition);

	bool IsPreviousRoomPositionArrayContainsPoint(FVector CheckPoint);

	bool IsNextRoomPositionArrayContainsPoint(FVector CheckPoint);

public:
	void GenerateWaysMeshs();

	void RegenerateWaysMeshs(FVector NextRoomPosition);

	void RegenerateBackPlatformMeshs(FVector PreviousRoomPosition);

	void SetRoomsArray(TArray<ADungeonRoom*> RoomsArray);

	void SetValuesFromConfig(int32 LengthBetweenAdjacentRooms, int32 CountOfRows, int32 CountOfColumns, FName NewLevelPath);

private:
	void CreateWays();

	FString GetRoomNameFromType();

	void CreateWallsForWay(FTransform Transform, FString WayName, double ScaleByX);

	void CreateWallsForPlatforms();

	UStaticMeshComponent* CreateStaticMeshComponent(FString ComponentName, FTransform Transform);

	void SortsNextAndPreviousRoomArrays();

	void FindNumberOfRoomsThatAreRelativeToRoom(int32& NumberOfRoomsWhereYLess, int32& NumberOfRoomWhereYSame, int32& NumberOfRoomsWhereYBigger, bool bCheckPrevious);

	void SetBaseValuesForBuildsWay();

	FTransform TransformForWayWhereYSame(double& ScaleByX);

	FTransform TransformForWayWhereYLess(double& ScaleByX, int32 CountOfRooms, int32& Counter, FVector Point);

	FTransform TransformForWayWhereYBigger(double& ScaleByX, int32 CountOfRooms, int32& Counter, FVector Point);

	UFUNCTION()
	void PlayerConfirmOfChoseRoom();

	UFUNCTION()
	void OnUpdatedComponentOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnUpdatedComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SetTextForConfirmWidget(FString Text);

	void ChooseRoom(FVector NextRoomPosition);

	void SaveGame();

	void LoadDataFromSave(UDungeonSaveGame* SaveGameObject);

	void ClearData();
};
