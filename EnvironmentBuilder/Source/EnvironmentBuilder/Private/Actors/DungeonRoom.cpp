// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/DungeonRoom.h"

// Sets default values
ADungeonRoom::ADungeonRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	CollisionComponent->InitBoxExtent(FVector(500, 500, 200));
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	CollisionComponent->CanCharacterStepUpOn = ECB_No;
	CollisionComponent->SetShouldUpdatePhysicsVolume(true);
	CollisionComponent->SetCanEverAffectNavigation(false);
	CollisionComponent->bDynamicObstacle = true;
	RootComponent = CollisionComponent;

	FloorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMeshComponent"));
	FloorMeshComponent->SetupAttachment(CollisionComponent);

	RightWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightWallMeshComponent"));
	RightWallMeshComponent->SetupAttachment(CollisionComponent);

	LeftWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftWallMeshComponent"));
	LeftWallMeshComponent->SetupAttachment(CollisionComponent);

	FrontRightPartWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRightPartWallMeshComponent"));
	FrontRightPartWallMeshComponent->SetupAttachment(CollisionComponent);

	FrontLeftPartWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLeftPartWallMeshComponent"));
	FrontLeftPartWallMeshComponent->SetupAttachment(CollisionComponent);

	BackRightPartWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackRightPartWallMeshComponent"));
	BackRightPartWallMeshComponent->SetupAttachment(CollisionComponent);

	BackLeftPartWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackLeftPartWallMeshComponent"));
	BackLeftPartWallMeshComponent->SetupAttachment(CollisionComponent);

	FrontPlatformMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontPlatformMeshComponent"));
	FrontPlatformMeshComponent->SetupAttachment(CollisionComponent);

	BackPlatformMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackPlatformMeshComponent"));
	BackPlatformMeshComponent->SetupAttachment(CollisionComponent);

	TextRoomNameComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRoomNameComponent"));
	TextRoomNameComponent->SetupAttachment(CollisionComponent);
}

void ADungeonRoom::BeginPlay()
{
	Super::BeginPlay();
	SetBaseValuesForBuildsWay();

	if (AEnvironmentBuilderCharacter* player = Cast<AEnvironmentBuilderCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
	{
		player->SetLookFromLookUp(FVector(0, 0, 2500), FRotator(-90, 0, 0));
	}

	FString saveName = "SlayTheSpire";
	if (UDungeonSaveGame* saveGameObject = Cast<UDungeonSaveGame>(UGameplayStatics::LoadGameFromSlot(saveName, 0)))
	{
		if (!Rooms.IsEmpty())
		{
			if (AEnvironmentBuilderCharacter* player = Cast<AEnvironmentBuilderCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
			{
				if (!saveGameObject->bRebuild && saveGameObject->CountOfRooms > 0)
				{
					player->SetActorTransform(saveGameObject->PlayerTransform);
					LoadDataFromSave(saveGameObject);
				}
			}
		}
	}
}

void ADungeonRoom::OnUpdatedComponentOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Type != ETypeOfRoom::StartRoom && !bCheck)
	{
		if (!Player && Other)
		{
			Player = Cast<AEnvironmentBuilderCharacter>(Other);
			if (Player)
			{
				Player->ConfirmOfChoseRoomDelegate.AddDynamic(this, &ADungeonRoom::PlayerConfirmOfChoseRoom);

				FString text = "To confirm room " + GetRoomNameFromType() + " press button E";

				SetTextForConfirmWidget(text);
			}
		}
	}
}

void ADungeonRoom::OnUpdatedComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Type != ETypeOfRoom::StartRoom)
	{
		if (Other && Player)
		{
			if (Player == Cast<AEnvironmentBuilderCharacter>(Other))
			{
				Player->ConfirmOfChoseRoomDelegate.Clear();
				FString text = "";
				SetTextForConfirmWidget(text);
				Player = nullptr;
			}
		}
	}
}

void ADungeonRoom::SetTextForConfirmWidget(FString Text)
{
	if (APlayerController* playerController = Cast<APlayerController>(Player->GetController()))
	{
		if (ADungeonHUD* hud = Cast<ADungeonHUD>(playerController->GetHUD()))
		{
			hud->SetTextForConfirmWidget(Text);
		}
	}
}

void ADungeonRoom::InitializeData(ETypeOfRoom NewType, ETypeOfDungeonRoom NewTypeOfDungeonRoom, int32 RowValue, int32 ColumnValue, TArray<FVector> NewNextRoomPositionArray)
{
	Type = NewType;
	TypeOfDungeonRoom = NewType == ETypeOfRoom::DungeonRoom ? NewTypeOfDungeonRoom : ETypeOfDungeonRoom::None;
	Row = RowValue;
	Column = ColumnValue;
	NextRoomPositionArray = NewNextRoomPositionArray;
	Position = GetActorLocation();
	
	switch (Type)
	{
	case ETypeOfRoom::BossRoom:
		FrontRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		FrontPlatformMeshComponent->SetStaticMesh(nullptr);
		break;
	case ETypeOfRoom::StartRoom:
		BackRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		BackPlatformMeshComponent->SetStaticMesh(nullptr);
		break;
	case ETypeOfRoom::DungeonRoom:
		FrontRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		break;
	}

	TextRoomNameComponent->SetText(FText::FromString(GetRoomNameFromType()));
}

void ADungeonRoom::InitializeData(ETypeOfRoom NewType, ETypeOfDungeonRoom NewTypeOfDungeonRoom, int32 RowValue, int32 ColumnValue, TArray<FVector> NewNextRoomPositionArray, 
	TArray<FVector> NewPreviousRoomPositionArray, bool bRoomCheck)
{
	Type = NewType;
	TypeOfDungeonRoom = NewType == ETypeOfRoom::DungeonRoom ? NewTypeOfDungeonRoom : ETypeOfDungeonRoom::None;
	Row = RowValue;
	Column = ColumnValue;
	NextRoomPositionArray = NewNextRoomPositionArray;
	PreviousRoomPositionArray = NewPreviousRoomPositionArray;
	bCheck = bRoomCheck;
	Position = GetActorLocation();

	switch (Type)
	{
	case ETypeOfRoom::BossRoom:
		FrontRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		FrontPlatformMeshComponent->SetStaticMesh(nullptr);
		break;
	case ETypeOfRoom::StartRoom:
		BackRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		BackPlatformMeshComponent->SetStaticMesh(nullptr);
		break;
	case ETypeOfRoom::DungeonRoom:
		FrontRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));
		break;
	}

	TextRoomNameComponent->SetText(FText::FromString(GetRoomNameFromType()));
}

void ADungeonRoom::AddPointsInNextRoomPositionArray(TArray<FVector> NewNextRoomPositionArray)
{
	for (const FVector& point : NewNextRoomPositionArray)
	{
		if (NextRoomPositionArray.Find(point) == INDEX_NONE)
		{
			NextRoomPositionArray.Add(point);
		}
	}
}

void ADungeonRoom::AddPointInPreviousRoomPositionArray(FVector NewPreviousRoomPosition)
{
	if (PreviousRoomPositionArray.Find(NewPreviousRoomPosition) == INDEX_NONE)
	{
		PreviousRoomPositionArray.Add(NewPreviousRoomPosition);
	}
}

bool ADungeonRoom::IsPreviousRoomPositionArrayContainsPoint(FVector CheckPoint)
{
	return PreviousRoomPositionArray.Find(CheckPoint) != INDEX_NONE;
}

bool ADungeonRoom::IsNextRoomPositionArrayContainsPoint(FVector CheckPoint)
{
	return NextRoomPositionArray.Find(CheckPoint) != INDEX_NONE;
}

void ADungeonRoom::GenerateWaysMeshs()
{
	SortsNextAndPreviousRoomArrays();

	SetBaseValuesForBuildsWay();

	if (Row != CountOfRow - 1)
	{
		CreateWays();
	}
	
	CreateWallsForPlatforms();

	if (!bCheck)
	{
		CollisionComponent->OnComponentBeginOverlap.Clear();
		CollisionComponent->OnComponentEndOverlap.Clear();
		CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ADungeonRoom::OnUpdatedComponentOverlapBegin);
		CollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ADungeonRoom::OnUpdatedComponentOverlapEnd);
	}
	else
	{
		if (Type != ETypeOfRoom::BossRoom)
		{
			FTransform transform;
			transform.SetLocation(FVector(CollisionSize, -CollisionSize, FloorZPosition + WayMeshSize));
			transform.SetRotation(RotatorForWallWithPassage.Quaternion());
			transform.SetScale3D(ScaleForWallWithPassage);
			FrontRightPartWallMeshComponent->ResetRelativeTransform();
			FrontRightPartWallMeshComponent->SetRelativeTransform(transform);
		}

		BackRightPartWallMeshComponent->SetRelativeScale3D(FVector(LeftWallMeshComponent->GetComponentScale().Y, LeftWallMeshComponent->GetComponentScale().X, LeftWallMeshComponent->GetComponentScale().Z));

	}
}

void ADungeonRoom::RegenerateWaysMeshs(FVector NextRoomPosition)
{ 
	for (UStaticMeshComponent* mesh : WaysAndWallsMesh)
	{
		mesh->DestroyComponent();
	}

	for (UStaticMeshComponent* mesh : WallsForPlatforms)
	{
		mesh->DestroyComponent();
	}

	for (UStaticMeshComponent* mesh : WaysToNextRoom)
	{
		mesh->DestroyComponent();
	}

	WaysAndWallsMesh.Empty();
	WallsForPlatforms.Empty();
	WaysToNextRoom.Empty();
	NextRoomPositionArray.Empty();
	
	if (NextRoomPosition != FVector(-1) && Type !=ETypeOfRoom::BossRoom)
	{
		NextRoomPositionArray.Add(NextRoomPosition);
	}

	if (NextRoomPosition != FVector(-1) && Type == ETypeOfRoom::BossRoom)
	{
		PreviousRoomPositionArray.Empty();
		PreviousRoomPositionArray.Add(NextRoomPosition);
	}

	if (Row != CountOfRow - 1)
	{
		CreateWays();
	}

	CreateWallsForPlatforms();
}

void ADungeonRoom::RegenerateBackPlatformMeshs(FVector PreviousRoomPosition)
{
	for (UStaticMeshComponent* mesh : WallsForPlatforms)
	{
		mesh->DestroyComponent();
	}

	WallsForPlatforms.Empty();

	PreviousRoomPositionArray.Empty();
	if (PreviousRoomPosition != FVector(-1))
	{
		PreviousRoomPositionArray.Add(PreviousRoomPosition);
	}

	CreateWallsForPlatforms();
}

void ADungeonRoom::SetRoomsArray(TArray<ADungeonRoom*> RoomsArray)
{
	Rooms = RoomsArray;
}

void ADungeonRoom::CreateWays()
{
	for (int32 i = 0; i < (Type == ETypeOfRoom::BossRoom ? PreviousRoomPositionArray.Num() : NextRoomPositionArray.Num()); i++)
	{
		WaysToNextRoom.Add(CreateStaticMeshComponent("WayMeshComponent" + FString::FromInt(i + 1), FTransform()));
	}

	int32 numberOfRoomWhereYSame = 0;
	int32 numberOfRoomsWhereYLess = 0;
	int32 numberOfRoomsWhereYBigger = 0;

	FindNumberOfRoomsThatAreRelativeToRoom(numberOfRoomsWhereYLess, numberOfRoomWhereYSame, numberOfRoomsWhereYBigger, Type == ETypeOfRoom::BossRoom);

	int32 countOfAddedWayWhereYLess = 0;

	int32 countOfAddedWayWhereYBigger = 0;

	for (int32 i = 0; i < WaysToNextRoom.Num(); i++)
	{
		double scaleByX = 0;

		FVector positionOfRoom = Type == ETypeOfRoom::BossRoom ? PreviousRoomPositionArray[i] : NextRoomPositionArray[i];

		FTransform transform = positionOfRoom.Y == Position.Y ? transform = TransformForWayWhereYSame(scaleByX) :
			Position.Y > positionOfRoom.Y ? TransformForWayWhereYLess(scaleByX, numberOfRoomsWhereYLess, countOfAddedWayWhereYLess, positionOfRoom)
			: TransformForWayWhereYBigger(scaleByX, numberOfRoomsWhereYBigger, countOfAddedWayWhereYBigger, positionOfRoom);

		WaysToNextRoom[i]->ResetRelativeTransform();
		WaysToNextRoom[i]->SetRelativeTransform(transform);
		WaysAndWallsMesh.Add(WaysToNextRoom[i]);
		CreateWallsForWay(transform, WaysToNextRoom[i]->GetName(), scaleByX);
	}
}

void ADungeonRoom::SetValuesFromConfig(int32 NewLengthBetweenAdjacentRooms, int32 CountOfRows, int32 CountOfColumns, FName NewLevelPath)
{
	LengthBetweenAdjacentRooms = NewLengthBetweenAdjacentRooms;
	CountOfRow = CountOfRows + 1;
	RoomLevelPath = NewLevelPath;
	CountOfColumn = CountOfColumns;
}

FString ADungeonRoom::GetRoomNameFromType()
{
	FString stringType;
	if (Type == ETypeOfRoom::DungeonRoom)
	{
		stringType = UEnum::GetValueAsString(TypeOfDungeonRoom);

		FString type = typeid(ETypeOfDungeonRoom).name();
		type = type + "::";
		type.RemoveFromStart("enum ");
		stringType.RemoveFromStart(type);
	}
	else
	{
		stringType = UEnum::GetValueAsString(Type);

		FString type = typeid(ETypeOfRoom).name();
		type = type + "::";
		type.RemoveFromStart("enum ");
		stringType.RemoveFromStart(type);
		stringType.RemoveFromEnd("Room");
	}

	return stringType;
}

void ADungeonRoom::CreateWallsForWay(FTransform Transform, FString WayName, double ScaleByX)
{
	for (int i = 0; i < 2; i++)
	{
		FTransform transform;
		transform.SetScale3D(FVector(ScaleByX, 0.01, 3));
		transform.SetRotation(Transform.GetRotation());
		FVector location = Transform.GetLocation();

		if (Type != ETypeOfRoom::BossRoom)
		{
			if (Transform.GetRotation() == FRotator(0).Quaternion())
			{
				location.Y = i == 0 ? location.Y : location.Y + 2 * WayMeshSize;
			}
			else
			{
				if (location.Y < 0)
				{
					location.X = i == 0 ? location.X : location.X + WayMeshSize;
				}
				else
				{
					location.X = i == 0 ? location.X : location.X - WayMeshSize;
				}
			}
		}
		else
		{
			if (Transform.GetRotation() == FRotator(0, 180, 0).Quaternion())
			{
				location.Y = i == 0 ? location.Y : location.Y - 2 * WayMeshSize;
			}
			else
			{
				if (location.Y < 0)
				{
					location.X = i == 0 ? location.X : location.X + WayMeshSize;
				}
				else
				{
					location.X = i == 0 ? location.X : location.X - WayMeshSize;
				}
			}
		}

		transform.SetLocation(location);
		
		WaysAndWallsMesh.Add(CreateStaticMeshComponent(WayName + "Wall" + FString::FromInt(i + 1), transform));
	}
}

void ADungeonRoom::CreateWallsForPlatforms()
{
	for (int i = 0; i < 2; i++)
	{
		int32 numberOfRoomWhereYSame = 0;
		int32 numberOfRoomsWhereYLess = 0;
		int32 numberOfRoomsWhereYBigger = 0;
		
		FindNumberOfRoomsThatAreRelativeToRoom(numberOfRoomsWhereYLess, numberOfRoomWhereYSame, numberOfRoomsWhereYBigger, i != 0 ? true : Type == ETypeOfRoom::BossRoom);

		FTransform transform;

		if (numberOfRoomWhereYSame == 0)
		{
			transform.SetLocation(FVector(i == 0 ? CollisionSize + WayMeshSize * 3 : - CollisionSize - WayMeshSize * 3, -1 * WayMeshSize, FloorZPosition));
			transform.SetRotation(FRotator(0, 90, 0).Quaternion());
			transform.SetScale3D(FVector(2, 0.01, 3));

			if (FrontPlatformMeshComponent->GetStaticMesh() && i == 0)
			{
				WallsForPlatforms.Add(CreateStaticMeshComponent("FrontPlatformWall", transform));
			}

			if (BackPlatformMeshComponent->GetStaticMesh() && i == 1)
			{
				WallsForPlatforms.Add(CreateStaticMeshComponent("BackPlatformWall", transform));
			}
		}

		transform.SetLocation(FVector(i == 0 ? CollisionSize : -CollisionSize, -WayMeshSize, FloorZPosition));
		transform.SetRotation(i == 0 ? RotationForNextRoomWayWhereYSame.Quaternion() : RotationForPreviousRoomWayWhereYSame.Quaternion());
		transform.SetScale3D(FVector(3 - numberOfRoomsWhereYLess, 0.01, 3));

		if (FrontPlatformMeshComponent->GetStaticMesh() && i == 0)
		{
			WallsForPlatforms.Add(CreateStaticMeshComponent("FrontRightPlatformWall", transform));
		}

		if (BackPlatformMeshComponent->GetStaticMesh() && i == 1)
		{
			WallsForPlatforms.Add(CreateStaticMeshComponent("BackRightPlatformWall", transform));
		}

		transform.SetLocation(FVector(i == 0 ? CollisionSize : -CollisionSize, WayMeshSize, FloorZPosition));
		transform.SetRotation(i == 0 ? RotationForNextRoomWayWhereYSame.Quaternion() : RotationForPreviousRoomWayWhereYSame.Quaternion());
		transform.SetScale3D(FVector(3 - numberOfRoomsWhereYBigger, 0.01, 3));

		if (FrontPlatformMeshComponent->GetStaticMesh() && i == 0)
		{
			WallsForPlatforms.Add(CreateStaticMeshComponent("FrontLeftPlatformWall", transform));
		}

		if (BackPlatformMeshComponent->GetStaticMesh() && i == 1)
		{
			WallsForPlatforms.Add(CreateStaticMeshComponent("BackLeftPlatformWall", transform));
		}
	}
}

UStaticMeshComponent* ADungeonRoom::CreateStaticMeshComponent(FString ComponentName, FTransform Transform)
{
	if (UStaticMeshComponent* wallComponent = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass(), (*ComponentName)))
	{
		wallComponent->RegisterComponent();
		wallComponent->AttachToComponent(CollisionComponent, FAttachmentTransformRules::KeepRelativeTransform);
		wallComponent->CreationMethod = EComponentCreationMethod::Instance;

		if (WayMesh)
		{
			wallComponent->SetStaticMesh(WayMesh);

			wallComponent->ResetRelativeTransform();
			wallComponent->SetRelativeTransform(Transform);

			return wallComponent;
		}
	}

	return nullptr;
}

void ADungeonRoom::SortsNextAndPreviousRoomArrays()
{
	NextRoomPositionArray.Sort([](const FVector& Lhs, const FVector& Rhs) {
		return (Lhs.Y < Rhs.Y);
		});

	PreviousRoomPositionArray.Sort([](const FVector& Lhs, const FVector& Rhs) {
		return (Lhs.Y < Rhs.Y);
		});
}

void ADungeonRoom::FindNumberOfRoomsThatAreRelativeToRoom(int32& NumberOfRoomsWhereYLess, int32& NumberOfRoomWhereYSame, int32& NumberOfRoomsWhereYBigger, bool bCheckPrevious)
{
	for (const FVector& point : bCheckPrevious ? PreviousRoomPositionArray : NextRoomPositionArray)
	{
		if (point.Y < Position.Y)
		{
			NumberOfRoomsWhereYLess = NumberOfRoomsWhereYLess + 1;
		}
		else if (point.Y > Position.Y)
		{
			NumberOfRoomsWhereYBigger = NumberOfRoomsWhereYBigger + 1;
		}
		else
		{
			NumberOfRoomWhereYSame = 1;
		}
	}
}

void ADungeonRoom::SetBaseValuesForBuildsWay()
{
	WayMeshSize = WayMesh->GetBounds().GetBox().GetSize().X;
	CollisionSize = CollisionComponent->GetScaledBoxExtent().X;
	FloorZPosition = FloorMeshComponent->GetComponentLocation().Z;
}

FTransform ADungeonRoom::TransformForWayWhereYSame(double& ScaleByX)
{
	FTransform transform;

	ScaleByX = (LengthBetweenAdjacentRooms - CollisionSize * 2 - WayMeshSize * 6) / WayMeshSize;

	transform.SetScale3D(FVector(ScaleByX, ScaleForYForForwardWay, 1));

	transform.SetRotation(Type == ETypeOfRoom::BossRoom ? RotationForPreviousRoomWayWhereYSame.Quaternion() : RotationForNextRoomWayWhereYSame.Quaternion());

	transform.SetLocation(Type == ETypeOfRoom::BossRoom ? FVector(-CollisionSize - WayMeshSize * 3, WayMeshSize, FloorZPosition) : FVector(CollisionSize + WayMeshSize * 3, -1 * WayMeshSize, FloorZPosition));

	return transform;
}

FTransform ADungeonRoom::TransformForWayWhereYLess(double& ScaleByX, int32 CountOfRooms, int32& Counter, FVector Point)
{
	FTransform transform;
	FVector start;
	FVector finish = Type != ETypeOfRoom::BossRoom ? FVector(Point.X - CollisionSize - 3 * WayMeshSize, Point.Y - Position.Y + 0.75 * WayMeshSize, FloorZPosition)
		: FVector(Point.X + CollisionSize + 2 * WayMeshSize, Point.Y + WayMeshSize, FloorZPosition);

	switch (CountOfRooms)
	{
	case 1:
		start = Type != ETypeOfRoom::BossRoom ? FVector(Position.X + CollisionSize + 2 * WayMeshSize, -1 * WayMeshSize, FloorZPosition)
			: FVector(Position.X - CollisionSize - 3 * WayMeshSize, -0.75 * WayMeshSize, FloorZPosition);
		break;
	case 2:
		if (Type != ETypeOfRoom::BossRoom)
		{
			start = Counter == 0 ? FVector(Position.X + CollisionSize + WayMeshSize, -1 * WayMeshSize, FloorZPosition) :
				FVector(Position.X + CollisionSize + 2 * WayMeshSize, -1 * WayMeshSize, FloorZPosition);
		}
		else
		{
			start = Counter == 0 ? FVector(Position.X - CollisionSize - 2 * WayMeshSize, -0.75 * WayMeshSize, FloorZPosition) :
				FVector(Position.X - CollisionSize - 3 * WayMeshSize, -0.75 * WayMeshSize, FloorZPosition);
		}
		Counter = Counter + 1;
		break;
	case 3:
		if (Type != ETypeOfRoom::BossRoom)
		{
			start = Counter == 0 ?
				FVector(Position.X + CollisionSize, -1 * WayMeshSize, FloorZPosition) : Counter == 1 ?
				FVector(Position.X + CollisionSize + WayMeshSize, -1 * WayMeshSize, FloorZPosition) :
				FVector(Position.X + CollisionSize + 2 * WayMeshSize, -1 * WayMeshSize, FloorZPosition);
		}
		else
		{
			start = Counter == 0 ?
				FVector(Position.X - CollisionSize - WayMeshSize, -0.75 * WayMeshSize, FloorZPosition) : Counter == 1 ?
				FVector(Position.X - CollisionSize - 2 * WayMeshSize, -0.75 * WayMeshSize, FloorZPosition) :
				FVector(Position.X - CollisionSize - 3 * WayMeshSize, -0.75 * WayMeshSize, FloorZPosition);
		}
		Counter = Counter + 1;
		break;

	}

	ScaleByX = FVector::DistXY(start, finish) / WayMeshSize;
	transform.SetScale3D(FVector(FVector::DistXY(start, finish) / WayMeshSize, 1, 1));
	transform.SetRotation(UKismetMathLibrary::FindLookAtRotation(start, finish).Quaternion());
	start.X = start.X - Position.X;
	transform.SetLocation(start);

	return transform;
}

FTransform ADungeonRoom::TransformForWayWhereYBigger(double& ScaleByX, int32 CountOfRooms, int32& Counter, FVector Point)
{
	FTransform transform;
	FVector start;
	FVector finish = Type != ETypeOfRoom::BossRoom ? FVector(Point.X - CollisionSize - 2 * WayMeshSize, Point.Y - Position.Y - WayMeshSize, FloorZPosition)
		: FVector(Point.X + CollisionSize + 3 * WayMeshSize, Point.Y - WayMeshSize, FloorZPosition);

	switch (CountOfRooms)
	{
	case 1:
		start = Type != ETypeOfRoom::BossRoom ? FVector(Position.X + CollisionSize + 3 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition)
			: FVector(Position.X - CollisionSize - 2 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition);
		break;
	case 2:
		if (Type != ETypeOfRoom::BossRoom)
		{
			start = Counter == 0 ? FVector(Position.X + CollisionSize + 3 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
				FVector(Position.X + CollisionSize + 2 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition);
		}
		else
		{
			start = Counter == 0 ? FVector(Position.X - CollisionSize - 2 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
				FVector(Position.X - CollisionSize - WayMeshSize, 0.75 * WayMeshSize, FloorZPosition);
		}
		Counter = Counter + 1;
		break;
	case 3:
		if (Type != ETypeOfRoom::BossRoom)
		{
			start = Counter == 0 ? FVector(Position.X + CollisionSize + 3 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
			Counter == 1 ? FVector(Position.X + CollisionSize + 2 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
			FVector(Position.X + CollisionSize + WayMeshSize, 0.75 * WayMeshSize, FloorZPosition);
		}
		else
		{
			start = Counter == 0 ? FVector(Position.X - CollisionSize - 2 * WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
				Counter == 1 ? FVector(Position.X - CollisionSize - WayMeshSize, 0.75 * WayMeshSize, FloorZPosition) :
				FVector(Position.X - CollisionSize, 0.75 * WayMeshSize, FloorZPosition);
		}
		Counter = Counter + 1;
		break;

	}

	ScaleByX = FVector::DistXY(start, finish) / WayMeshSize;
	transform.SetScale3D(FVector(FVector::DistXY(start, finish) / WayMeshSize, 1, 1));
	transform.SetRotation(UKismetMathLibrary::FindLookAtRotation(start, finish).Quaternion());
	start.X = start.X - Position.X;
	transform.SetLocation(start);

	return transform;
}

void ADungeonRoom::PlayerConfirmOfChoseRoom()
{
	if (!bCheck)
	{
		bCheck = true;
		CollisionComponent->OnComponentBeginOverlap.Clear();
		CollisionComponent->OnComponentEndOverlap.Clear();
		SetTextForConfirmWidget(FString(""));

		FTransform transform;
		transform.SetLocation(FVector(CollisionSize, -CollisionSize, FloorZPosition + WayMeshSize / 2));
		transform.SetRotation(RotatorForWallWithPassage.Quaternion());
		transform.SetScale3D(ScaleForWallWithPassage);
		if (Type != ETypeOfRoom::BossRoom)
		{
			FrontRightPartWallMeshComponent->ResetRelativeTransform();
			FrontRightPartWallMeshComponent->SetRelativeTransform(transform);
		}

		ChooseRoom(Position);
	}
}

void ADungeonRoom::ChooseRoom(FVector NextRoomPosition)
{
	if (Row != CountOfRow)
	{
		for (ADungeonRoom* room : Rooms)
		{
			if (Row == CountOfRow)
			{
				if (room->Row == Row - 1)
				{
					if (room->IsNextRoomPositionArrayContainsPoint(NextRoomPosition))
					{
						room->RegenerateWaysMeshs(NextRoomPosition);
					}
					else
					{
						room->RegenerateWaysMeshs(FVector(-1));
					}
				}

				if (room->Row == Row + 1)
				{
					room->RegenerateWaysMeshs(NextRoomPosition);
				}

				if (room->Row == Row && room->Column != Column)
				{
					room->RegenerateWaysMeshs(FVector(-1));
					room->RegenerateBackPlatformMeshs(FVector(-1));
				}
			}
			else
			{
				if (room->Row == Row - 1)
				{
					if (room->IsNextRoomPositionArrayContainsPoint(NextRoomPosition))
					{
						room->RegenerateWaysMeshs(NextRoomPosition);
					}
					else
					{
						room->RegenerateWaysMeshs(FVector(-1));
					}
				}

				if (room->Row == Row && room->Column != Column)
				{
					room->RegenerateWaysMeshs(FVector(-1));
					room->RegenerateBackPlatformMeshs(FVector(-1));
				}
				if (room->Row == Row + 1)
				{
					if (room->IsPreviousRoomPositionArrayContainsPoint(NextRoomPosition))
					{
						room->RegenerateBackPlatformMeshs(NextRoomPosition);
					}
					else
					{
						room->RegenerateBackPlatformMeshs(FVector(-1));
					}
				}
			}
		}
	}
	
	SaveGame();

	if (!RoomLevelPath.ToString().IsEmpty())
	{
	    UGameplayStatics::OpenLevel(this, RoomLevelPath, true);
	}
}

void ADungeonRoom::SaveGame()
{
	if (Rooms.Num() > 0)
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

		for (ADungeonRoom* room : Rooms)
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

		if (AEnvironmentBuilderCharacter* player = Cast<AEnvironmentBuilderCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
		{
			saveGameObject->PlayerTransform = player->GetTransform();
		}

		saveGameObject->CountOfRooms = Rooms.Num();
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

void ADungeonRoom::LoadDataFromSave(UDungeonSaveGame* SaveGameObject)
{
	ClearData();

	int32 index = -1;

	for (int32 i = 0; i < SaveGameObject->CountOfRooms; i++)
	{
		if (SaveGameObject->ColumnsArray[i] == Column && SaveGameObject->RowsArray[i] == Row)
		{
			index = i;
			break;
		}
	}

	if (index > -1)
	{
		TArray<FVector> nextPointsRoom;
		TArray<FVector> previousPointsRoom;

		switch (SaveGameObject->TypeArray[index])
		{
		case ETypeOfRoom::DungeonRoom:
		{
			int32 startIndexForNextPoints = 0;
			int32 startIndexForPreviousPoints = 0;

			for (int32 j = 0; j < index; j++)
			{
				startIndexForNextPoints = startIndexForNextPoints + SaveGameObject->NextPointsCountArray[j];
				startIndexForPreviousPoints = startIndexForPreviousPoints + SaveGameObject->PreviousPointsCountArray[j];
			}

			auto addPointsFunction = [](int32 StartIndex, TArray<FVector>& ResultArray, int32 DataCount, TArray<FVector> DataArray) {
				int32 count = StartIndex;
				while (ResultArray.Num() != DataCount)
				{
					ResultArray.Add(DataArray[count]);
					count = count + 1;
				};
				};

			if (SaveGameObject->NextPointsCountArray[index] > 0)
			{
				addPointsFunction(startIndexForNextPoints, nextPointsRoom, SaveGameObject->NextPointsCountArray[index], SaveGameObject->NextPoints);
			}

			if (SaveGameObject->PreviousPointsCountArray[index] > 0)
			{
				addPointsFunction(startIndexForPreviousPoints, previousPointsRoom, SaveGameObject->PreviousPointsCountArray[index], SaveGameObject->PreviousPoints);

			}
		}
		break;

		case ETypeOfRoom::BossRoom:
		{
			for (ADungeonRoom* room : Rooms)
			{
				if (SaveGameObject->bCheckArray.Last())
				{
					if (room->Row == CountOfRow - 1 && room->bCheck)
					{
						previousPointsRoom.Add(room->GetActorLocation());
						break;
					}
				}
				else
				{
					if (room->Row == CountOfRow - 1)
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
		case ETypeOfRoom::StartRoom:
		{
			if (SaveGameObject->NextPointsCountArray[0] == 1)
			{
				nextPointsRoom.Add(SaveGameObject->NextPoints[0]);
			}
			else
			{
				for (int32 j = 0 ; j< SaveGameObject->NextPointsCountArray[0]; j++)
				{
					nextPointsRoom.Add(SaveGameObject->NextPoints[j]);
				}
			}
		}
		break;
		}

		InitializeData(SaveGameObject->TypeArray[index], SaveGameObject->TypeOfDungeonRoomArray[index], Row, Column, nextPointsRoom,
			previousPointsRoom, SaveGameObject->bCheckArray[index]);

		GenerateWaysMeshs();
	}
}

void ADungeonRoom::ClearData()
{
	for (UStaticMeshComponent* mesh : WaysAndWallsMesh)
	{
		mesh->DestroyComponent();
	}

	for (UStaticMeshComponent* mesh : WallsForPlatforms)
	{
		mesh->DestroyComponent();
	}

	for (UStaticMeshComponent* mesh : WaysToNextRoom)
	{
		mesh->DestroyComponent();
	}

	PreviousRoomPositionArray.Empty();
	WaysAndWallsMesh.Empty();
	WallsForPlatforms.Empty();
	WaysToNextRoom.Empty();
	NextRoomPositionArray.Empty();

}
