// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/SlayTheSpireDungeonModel.h"

void USlayTheSpireDungeonModel::Reset()
{
	if (Rooms.Num() > 0)
	{
		for (ADungeonRoom* room : Rooms)
		{
			room->Destroy();
		}

		Rooms.Empty();
	}
}

void USlayTheSpireDungeonModel::AddNewRoom(ADungeonRoom* NewRoom)
{
	Rooms.Add(NewRoom);
}
