// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemap() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeTilemapDomainData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeTilemapDomainData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapUserData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapUserData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowTilemap
void UGridFlowTilemap::StaticRegisterNativesUGridFlowTilemap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemap);
UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister()
{
	return UGridFlowTilemap::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////// Grid Flow Implementation Structs ///////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Flow Implementation Structs" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowTilemap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemap,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemap_Statics::ClassParams = {
	&UGridFlowTilemap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemap()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton, Z_Construct_UClass_UGridFlowTilemap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemap>()
{
	return UGridFlowTilemap::StaticClass();
}
UGridFlowTilemap::UGridFlowTilemap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemap);
UGridFlowTilemap::~UGridFlowTilemap() {}
// End Class UGridFlowTilemap

// Begin Class UGridFlowTilemapUserData
void UGridFlowTilemapUserData::StaticRegisterNativesUGridFlowTilemapUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapUserData);
UClass* Z_Construct_UClass_UGridFlowTilemapUserData_NoRegister()
{
	return UGridFlowTilemapUserData::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWallsAsEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilemapSizePerNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWallsAsEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallsAsEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapSizePerNode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayoutPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_SetBit(void* Obj)
{
	((UGridFlowTilemapUserData*)Obj)->bWallsAsEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges = { "bWallsAsEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowTilemapUserData), &Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWallsAsEdges_MetaData), NewProp_bWallsAsEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_TilemapSizePerNode = { "TilemapSizePerNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapUserData, TilemapSizePerNode), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilemapSizePerNode_MetaData), NewProp_TilemapSizePerNode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_LayoutPadding = { "LayoutPadding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowTilemapUserData, LayoutPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutPadding_MetaData), NewProp_LayoutPadding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_TilemapSizePerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_LayoutPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowTilemapUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::ClassParams = {
	&UGridFlowTilemapUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapUserData()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapUserData>()
{
	return UGridFlowTilemapUserData::StaticClass();
}
UGridFlowTilemapUserData::UGridFlowTilemapUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapUserData);
UGridFlowTilemapUserData::~UGridFlowTilemapUserData() {}
// End Class UGridFlowTilemapUserData

// Begin Enum EGridFlowAbstractNodeRoomType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType;
static UEnum* EGridFlowAbstractNodeRoomType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridFlowAbstractNodeRoomType"));
	}
	return Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowAbstractNodeRoomType>()
{
	return EGridFlowAbstractNodeRoomType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cave.Name", "EGridFlowAbstractNodeRoomType::Cave" },
		{ "Corridor.Name", "EGridFlowAbstractNodeRoomType::Corridor" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "Room.Name", "EGridFlowAbstractNodeRoomType::Room" },
		{ "Unknown.Name", "EGridFlowAbstractNodeRoomType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridFlowAbstractNodeRoomType::Unknown", (int64)EGridFlowAbstractNodeRoomType::Unknown },
		{ "EGridFlowAbstractNodeRoomType::Room", (int64)EGridFlowAbstractNodeRoomType::Room },
		{ "EGridFlowAbstractNodeRoomType::Corridor", (int64)EGridFlowAbstractNodeRoomType::Corridor },
		{ "EGridFlowAbstractNodeRoomType::Cave", (int64)EGridFlowAbstractNodeRoomType::Cave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridFlowAbstractNodeRoomType",
	"EGridFlowAbstractNodeRoomType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType()
{
	if (!Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton;
}
// End Enum EGridFlowAbstractNodeRoomType

// Begin ScriptStruct FGridFlowAbstractNodeTilemapMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata;
class UScriptStruct* FGridFlowAbstractNodeTilemapMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridFlowAbstractNodeTilemapMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridFlowAbstractNodeTilemapMetadata>()
{
	return FGridFlowAbstractNodeTilemapMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordStart_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The coordinate in the tilemap where the chunk representing this layout node starts */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The coordinate in the tilemap where the chunk representing this layout node starts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordEnd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The coordinate in the tilemap where the chunk representing this layout node end */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The coordinate in the tilemap where the chunk representing this layout node end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowAbstractNodeTilemapMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart = { "TileCoordStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, TileCoordStart), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCoordStart_MetaData), NewProp_TileCoordStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd = { "TileCoordEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, TileCoordEnd), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCoordEnd_MetaData), NewProp_TileCoordEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridFlowAbstractNodeTilemapMetadata",
	Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers),
	sizeof(FGridFlowAbstractNodeTilemapMetadata),
	alignof(FGridFlowAbstractNodeTilemapMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton;
}
// End ScriptStruct FGridFlowAbstractNodeTilemapMetadata

// Begin Class UFANodeTilemapDomainData
void UFANodeTilemapDomainData::StaticRegisterNativesUFANodeTilemapDomainData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFANodeTilemapDomainData);
UClass* Z_Construct_UClass_UFANodeTilemapDomainData_NoRegister()
{
	return UFANodeTilemapDomainData::StaticClass();
}
struct Z_Construct_UClass_UFANodeTilemapDomainData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Tilemap domain specific data that is attached to the abstract graph nodes\n*/" },
#endif
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tilemap domain specific data that is attached to the abstract graph nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilemapMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePerturb_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapMetadata;
	static void NewProp_bDisablePerturb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePerturb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFANodeTilemapDomainData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata = { "TilemapMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFANodeTilemapDomainData, TilemapMetadata), Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilemapMetadata_MetaData), NewProp_TilemapMetadata_MetaData) }; // 3654375262
void Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_SetBit(void* Obj)
{
	((UFANodeTilemapDomainData*)Obj)->bDisablePerturb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb = { "bDisablePerturb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFANodeTilemapDomainData), &Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePerturb_MetaData), NewProp_bDisablePerturb_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFANodeTilemapDomainData, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) }; // 3401301938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFANodeTilemapDomainData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::ClassParams = {
	&UFANodeTilemapDomainData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFANodeTilemapDomainData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFANodeTilemapDomainData()
{
	if (!Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton, Z_Construct_UClass_UFANodeTilemapDomainData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFANodeTilemapDomainData>()
{
	return UFANodeTilemapDomainData::StaticClass();
}
UFANodeTilemapDomainData::UFANodeTilemapDomainData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFANodeTilemapDomainData);
UFANodeTilemapDomainData::~UFANodeTilemapDomainData() {}
// End Class UFANodeTilemapDomainData

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridFlowAbstractNodeRoomType_StaticEnum, TEXT("EGridFlowAbstractNodeRoomType"), &Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3401301938U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridFlowAbstractNodeTilemapMetadata::StaticStruct, Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewStructOps, TEXT("GridFlowAbstractNodeTilemapMetadata"), &Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowAbstractNodeTilemapMetadata), 3654375262U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemap, UGridFlowTilemap::StaticClass, TEXT("UGridFlowTilemap"), &Z_Registration_Info_UClass_UGridFlowTilemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemap), 2542247562U) },
		{ Z_Construct_UClass_UGridFlowTilemapUserData, UGridFlowTilemapUserData::StaticClass, TEXT("UGridFlowTilemapUserData"), &Z_Registration_Info_UClass_UGridFlowTilemapUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapUserData), 1883186614U) },
		{ Z_Construct_UClass_UFANodeTilemapDomainData, UFANodeTilemapDomainData::StaticClass, TEXT("UFANodeTilemapDomainData"), &Z_Registration_Info_UClass_UFANodeTilemapDomainData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFANodeTilemapDomainData), 2580874833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_774704386(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
