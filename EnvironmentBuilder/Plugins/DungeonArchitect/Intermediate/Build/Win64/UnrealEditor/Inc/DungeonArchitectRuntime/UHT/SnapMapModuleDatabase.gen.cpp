// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/PointOfInterest.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapModuleDatabase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapMapModuleDatabaseConnectionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo;
class UScriptStruct* FSnapMapModuleDatabaseConnectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapMapModuleDatabaseConnectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapMapModuleDatabaseConnectionInfo>()
{
	return FSnapMapModuleDatabaseConnectionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraint_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapMapModuleDatabaseConnectionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionId_MetaData), NewProp_ConnectionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInfo_MetaData), NewProp_ConnectionInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint = { "ConnectionConstraint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionConstraint_MetaData), NewProp_ConnectionConstraint_MetaData) }; // 646942352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapMapModuleDatabaseConnectionInfo",
	Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers),
	sizeof(FSnapMapModuleDatabaseConnectionInfo),
	alignof(FSnapMapModuleDatabaseConnectionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton;
}
// End ScriptStruct FSnapMapModuleDatabaseConnectionInfo

// Begin ScriptStruct FSnapMapModuleDatabaseItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem;
class UScriptStruct* FSnapMapModuleDatabaseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapMapModuleDatabaseItem"));
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapMapModuleDatabaseItem>()
{
	return FSnapMapModuleDatabaseItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRotation_MetaData[] = {
		{ "Category", "Module" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n       Can the rooms / modules be rotated while stitching them together. E.g. disable this for isometric / platformer games \n       where the rooms are designed to be viewed at a certain angle \n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can the rooms / modules be rotated while stitching them together. E.g. disable this for isometric / platformer games\nwhere the rooms are designed to be viewed at a certain angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemedLevels_MetaData[] = {
		{ "Category", "Module" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Alternate theme level file that should have the same structure as the master level file.\n     * Use this to make different themed dungeons using the same generated layout.\n     * Great for minimaps,  or creating an alternate world (e.g. player time travels and switches between the modern and ancient versions of the dungeon)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alternate theme level file that should have the same structure as the master level file.\nUse this to make different themed dungeons using the same generated layout.\nGreat for minimaps,  or creating an alternate world (e.g. player time travels and switches between the modern and ancient versions of the dungeon)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBoundShapes_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasRoomShapeTextures_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static void NewProp_bAllowRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThemedLevels_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThemedLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThemedLevels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBoundShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasRoomShapeTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapMapModuleDatabaseItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
{
	((FSnapMapModuleDatabaseItem*)Obj)->bAllowRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSnapMapModuleDatabaseItem), &Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRotation_MetaData), NewProp_bAllowRotation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels_ValueProp = { "ThemedLevels", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels_Key_KeyProp = { "ThemedLevels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels = { "ThemedLevels", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, ThemedLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemedLevels_MetaData), NewProp_ThemedLevels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBounds_MetaData), NewProp_ModuleBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBoundShapes = { "ModuleBoundShapes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, ModuleBoundShapes), Z_Construct_UScriptStruct_FDABoundsShapeList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBoundShapes_MetaData), NewProp_ModuleBoundShapes_MetaData) }; // 4252500473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_CanvasRoomShapeTextures = { "CanvasRoomShapeTextures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, CanvasRoomShapeTextures), Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasRoomShapeTextures_MetaData), NewProp_CanvasRoomShapeTextures_MetaData) }; // 1407042147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonPointOfInterest, METADATA_PARAMS(0, nullptr) }; // 586671446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 586671446
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo, METADATA_PARAMS(0, nullptr) }; // 1327363731
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 1327363731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_bAllowRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ThemedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBoundShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_CanvasRoomShapeTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_PointsOfInterest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_PointsOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapMapModuleDatabaseItem",
	Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers),
	sizeof(FSnapMapModuleDatabaseItem),
	alignof(FSnapMapModuleDatabaseItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton;
}
// End ScriptStruct FSnapMapModuleDatabaseItem

// Begin Class USnapMapModuleDatabase
void USnapMapModuleDatabase::StaticRegisterNativesUSnapMapModuleDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapModuleDatabase);
UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister()
{
	return USnapMapModuleDatabase::StaticClass();
}
struct Z_Construct_UClass_USnapMapModuleDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintFloorHeight_MetaData[] = {
		{ "Category", "Module" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the floor height of your assets, if you to support floor rendering in the dungeon canvas */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the floor height of your assets, if you to support floor rendering in the dungeon canvas" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintFloorCaptureHeight_MetaData[] = {
		{ "Category", "Module" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of floor to capture for the canvas minimap. This should not account for the ceiling height, as it might overlap with the floor above */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of floor to capture for the canvas minimap. This should not account for the ceiling height, as it might overlap with the floor above" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintGroundThickness_MetaData[] = {
		{ "Category", "Module" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the floor height of your assets, if you to support floor rendering in the dungeon canvas */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the floor height of your assets, if you to support floor rendering in the dungeon canvas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HintFloorHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HintFloorCaptureHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HintGroundThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapModuleDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem, METADATA_PARAMS(0, nullptr) }; // 652286173
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapModuleDatabase, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) }; // 652286173
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintFloorHeight = { "HintFloorHeight", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapModuleDatabase, HintFloorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintFloorHeight_MetaData), NewProp_HintFloorHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintFloorCaptureHeight = { "HintFloorCaptureHeight", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapModuleDatabase, HintFloorCaptureHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintFloorCaptureHeight_MetaData), NewProp_HintFloorCaptureHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintGroundThickness = { "HintGroundThickness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapModuleDatabase, HintGroundThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintGroundThickness_MetaData), NewProp_HintGroundThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintFloorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintFloorCaptureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_HintGroundThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapModuleDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::ClassParams = {
	&USnapMapModuleDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapModuleDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapModuleDatabase()
{
	if (!Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton, Z_Construct_UClass_USnapMapModuleDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapModuleDatabase>()
{
	return USnapMapModuleDatabase::StaticClass();
}
USnapMapModuleDatabase::USnapMapModuleDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapModuleDatabase);
USnapMapModuleDatabase::~USnapMapModuleDatabase() {}
// End Class USnapMapModuleDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapMapModuleDatabaseConnectionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewStructOps, TEXT("SnapMapModuleDatabaseConnectionInfo"), &Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapMapModuleDatabaseConnectionInfo), 1327363731U) },
		{ FSnapMapModuleDatabaseItem::StaticStruct, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewStructOps, TEXT("SnapMapModuleDatabaseItem"), &Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapMapModuleDatabaseItem), 652286173U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapModuleDatabase, USnapMapModuleDatabase::StaticClass, TEXT("USnapMapModuleDatabase"), &Z_Registration_Info_UClass_USnapMapModuleDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapModuleDatabase), 69202433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_3070662682(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
