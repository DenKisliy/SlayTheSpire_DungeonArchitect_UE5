// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonModel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacDoor();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomLayout();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomTile();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EIsaacRoomType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsaacRoomType;
static UEnum* EIsaacRoomType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EIsaacRoomType"));
	}
	return Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomType>()
{
	return EIsaacRoomType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boss.DisplayName", "Boss" },
		{ "Boss.Name", "EIsaacRoomType::Boss" },
		{ "Exit.DisplayName", "Exit" },
		{ "Exit.Name", "EIsaacRoomType::Exit" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EIsaacRoomType::Normal" },
		{ "Spawn.DisplayName", "Spawn" },
		{ "Spawn.Name", "EIsaacRoomType::Spawn" },
		{ "Treasure.DisplayName", "Treasure" },
		{ "Treasure.Name", "EIsaacRoomType::Treasure" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsaacRoomType::Normal", (int64)EIsaacRoomType::Normal },
		{ "EIsaacRoomType::Spawn", (int64)EIsaacRoomType::Spawn },
		{ "EIsaacRoomType::Treasure", (int64)EIsaacRoomType::Treasure },
		{ "EIsaacRoomType::Boss", (int64)EIsaacRoomType::Boss },
		{ "EIsaacRoomType::Exit", (int64)EIsaacRoomType::Exit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EIsaacRoomType",
	"EIsaacRoomType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType()
{
	if (!Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton;
}
// End Enum EIsaacRoomType

// Begin Enum EIsaacRoomTileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsaacRoomTileType;
static UEnum* EIsaacRoomTileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EIsaacRoomTileType"));
	}
	return Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomTileType>()
{
	return EIsaacRoomTileType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.DisplayName", "Door" },
		{ "Door.Name", "EIsaacRoomTileType::Door" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "EIsaacRoomTileType::Empty" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EIsaacRoomTileType::Floor" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsaacRoomTileType::Floor", (int64)EIsaacRoomTileType::Floor },
		{ "EIsaacRoomTileType::Door", (int64)EIsaacRoomTileType::Door },
		{ "EIsaacRoomTileType::Empty", (int64)EIsaacRoomTileType::Empty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EIsaacRoomTileType",
	"EIsaacRoomTileType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType()
{
	if (!Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton;
}
// End Enum EIsaacRoomTileType

// Begin ScriptStruct FIsaacRoomTile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoomTile;
class UScriptStruct* FIsaacRoomTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoomTile, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoomTile"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoomTile>()
{
	return FIsaacRoomTile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIsaacRoomTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tileType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_tileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_tileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoomTile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType = { "tileType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoomTile, tileType), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tileType_MetaData), NewProp_tileType_MetaData) }; // 288581117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"IsaacRoomTile",
	Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers),
	sizeof(FIsaacRoomTile),
	alignof(FIsaacRoomTile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomTile()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton;
}
// End ScriptStruct FIsaacRoomTile

// Begin ScriptStruct FIsaacRoomLayout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoomLayout;
class UScriptStruct* FIsaacRoomLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoomLayout, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoomLayout"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoomLayout>()
{
	return FIsaacRoomLayout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoomLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsaacRoomTile, METADATA_PARAMS(0, nullptr) }; // 894063068
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoomLayout, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) }; // 894063068
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoomLayout, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoomLayout, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"IsaacRoomLayout",
	Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers),
	sizeof(FIsaacRoomLayout),
	alignof(FIsaacRoomLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomLayout()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton;
}
// End ScriptStruct FIsaacRoomLayout

// Begin ScriptStruct FIsaacRoom
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoom;
class UScriptStruct* FIsaacRoom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoom, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoom"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoom>()
{
	return FIsaacRoom::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIsaacRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorPositions_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdjacentRooms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorPositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoom>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) }; // 2398606801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, Layout), Z_Construct_UScriptStruct_FIsaacRoomLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 4072562329
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_Inner = { "AdjacentRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms = { "AdjacentRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, AdjacentRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentRooms_MetaData), NewProp_AdjacentRooms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_Inner = { "DoorPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions = { "DoorPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacRoom, DoorPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorPositions_MetaData), NewProp_DoorPositions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"IsaacRoom",
	Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers),
	sizeof(FIsaacRoom),
	alignof(FIsaacRoom),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsaacRoom_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoom_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton;
}
// End ScriptStruct FIsaacRoom

// Begin ScriptStruct FIsaacDoor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacDoor;
class UScriptStruct* FIsaacDoor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacDoor, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacDoor"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacDoor>()
{
	return FIsaacDoor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIsaacDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roomA_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roomB_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ratio_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_roomA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_roomB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacDoor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA = { "roomA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacDoor, roomA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roomA_MetaData), NewProp_roomA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB = { "roomB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacDoor, roomB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roomB_MetaData), NewProp_roomB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsaacDoor, ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ratio_MetaData), NewProp_ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"IsaacDoor",
	Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers),
	sizeof(FIsaacDoor),
	alignof(FIsaacDoor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsaacDoor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsaacDoor()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton, Z_Construct_UScriptStruct_FIsaacDoor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton;
}
// End ScriptStruct FIsaacDoor

// Begin Class UIsaacDungeonModel Function RemoveStylingFromRoom
struct Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics
{
	struct IsaacDungeonModel_eventRemoveStylingFromRoom_Parms
	{
		int32 RoomId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonModel_eventRemoveStylingFromRoom_Parms, RoomId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::NewProp_RoomId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonModel, nullptr, "RemoveStylingFromRoom", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::IsaacDungeonModel_eventRemoveStylingFromRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::IsaacDungeonModel_eventRemoveStylingFromRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonModel::execRemoveStylingFromRoom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStylingFromRoom(Z_Param_RoomId);
	P_NATIVE_END;
}
// End Class UIsaacDungeonModel Function RemoveStylingFromRoom

// Begin Class UIsaacDungeonModel
void UIsaacDungeonModel::StaticRegisterNativesUIsaacDungeonModel()
{
	UClass* Class = UIsaacDungeonModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveStylingFromRoom", &UIsaacDungeonModel::execRemoveStylingFromRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonModel);
UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister()
{
	return UIsaacDungeonModel::StaticClass();
}
struct Z_Construct_UClass_UIsaacDungeonModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom, "RemoveStylingFromRoom" }, // 2168026640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsaacRoom, METADATA_PARAMS(0, nullptr) }; // 622021622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonModel, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) }; // 622021622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsaacDoor, METADATA_PARAMS(0, nullptr) }; // 3970359590
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonModel, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 3970359590
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsaacDungeonModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonModel_Statics::ClassParams = {
	&UIsaacDungeonModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsaacDungeonModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsaacDungeonModel()
{
	if (!Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton, Z_Construct_UClass_UIsaacDungeonModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonModel>()
{
	return UIsaacDungeonModel::StaticClass();
}
UIsaacDungeonModel::UIsaacDungeonModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonModel);
UIsaacDungeonModel::~UIsaacDungeonModel() {}
// End Class UIsaacDungeonModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsaacRoomType_StaticEnum, TEXT("EIsaacRoomType"), &Z_Registration_Info_UEnum_EIsaacRoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2398606801U) },
		{ EIsaacRoomTileType_StaticEnum, TEXT("EIsaacRoomTileType"), &Z_Registration_Info_UEnum_EIsaacRoomTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 288581117U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsaacRoomTile::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewStructOps, TEXT("IsaacRoomTile"), &Z_Registration_Info_UScriptStruct_IsaacRoomTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoomTile), 894063068U) },
		{ FIsaacRoomLayout::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewStructOps, TEXT("IsaacRoomLayout"), &Z_Registration_Info_UScriptStruct_IsaacRoomLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoomLayout), 4072562329U) },
		{ FIsaacRoom::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewStructOps, TEXT("IsaacRoom"), &Z_Registration_Info_UScriptStruct_IsaacRoom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoom), 622021622U) },
		{ FIsaacDoor::StaticStruct, Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewStructOps, TEXT("IsaacDoor"), &Z_Registration_Info_UScriptStruct_IsaacDoor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacDoor), 3970359590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonModel, UIsaacDungeonModel::StaticClass, TEXT("UIsaacDungeonModel"), &Z_Registration_Info_UClass_UIsaacDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonModel), 1279007115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_4047712212(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
