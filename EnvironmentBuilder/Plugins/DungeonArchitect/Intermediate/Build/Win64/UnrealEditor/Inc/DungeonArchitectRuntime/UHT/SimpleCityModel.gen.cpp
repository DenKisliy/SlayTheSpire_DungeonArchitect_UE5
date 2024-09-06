// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityModel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCityCell();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum ESimpleCityCellType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleCityCellType;
static UEnum* ESimpleCityCellType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESimpleCityCellType"));
	}
	return Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESimpleCityCellType>()
{
	return ESimpleCityCellType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "ESimpleCityCellType::Empty" },
		{ "House.DisplayName", "House" },
		{ "House.Name", "ESimpleCityCellType::House" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
		{ "Park.DisplayName", "Park" },
		{ "Park.Name", "ESimpleCityCellType::Park" },
		{ "Road.DisplayName", "Road" },
		{ "Road.Name", "ESimpleCityCellType::Road" },
		{ "UserDefined.DisplayName", "UserDefined" },
		{ "UserDefined.Name", "ESimpleCityCellType::UserDefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleCityCellType::Road", (int64)ESimpleCityCellType::Road },
		{ "ESimpleCityCellType::House", (int64)ESimpleCityCellType::House },
		{ "ESimpleCityCellType::Park", (int64)ESimpleCityCellType::Park },
		{ "ESimpleCityCellType::UserDefined", (int64)ESimpleCityCellType::UserDefined },
		{ "ESimpleCityCellType::Empty", (int64)ESimpleCityCellType::Empty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"ESimpleCityCellType",
	"ESimpleCityCellType",
	Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType()
{
	if (!Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton;
}
// End Enum ESimpleCityCellType

// Begin ScriptStruct FSimpleCityCell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCityCell;
class UScriptStruct* FSimpleCityCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCityCell, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SimpleCityCell"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSimpleCityCell>()
{
	return FSimpleCityCell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleCityCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerNameOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCityCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCityCell, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCityCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 3062369243
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCityCell, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCityCell, BlockSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockSize_MetaData), NewProp_BlockSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride = { "MarkerNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCityCell, MarkerNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerNameOverride_MetaData), NewProp_MarkerNameOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SimpleCityCell",
	Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers),
	sizeof(FSimpleCityCell),
	alignof(FSimpleCityCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleCityCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleCityCell()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCityCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton;
}
// End ScriptStruct FSimpleCityCell

// Begin ScriptStruct FCityBlockDimension
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CityBlockDimension;
class UScriptStruct* FCityBlockDimension::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityBlockDimension, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CityBlockDimension"));
	}
	return Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCityBlockDimension>()
{
	return FCityBlockDimension::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCityBlockDimension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityBlockDimension>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBlockDimension, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBlockDimension, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBlockDimension, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBlockDimension, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CityBlockDimension",
	Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers),
	sizeof(FCityBlockDimension),
	alignof(FCityBlockDimension),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCityBlockDimension_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension()
{
	if (!Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton, Z_Construct_UScriptStruct_FCityBlockDimension_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton;
}
// End ScriptStruct FCityBlockDimension

// Begin Class USimpleCityModel
void USimpleCityModel::StaticRegisterNativesUSimpleCityModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityModel);
UClass* Z_Construct_UClass_USimpleCityModel_NoRegister()
{
	return USimpleCityModel::StaticClass();
}
struct Z_Construct_UClass_USimpleCityModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CityWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CityLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth = { "CityWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityModel, CityWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityWidth_MetaData), NewProp_CityWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength = { "CityLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityModel, CityLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityLength_MetaData), NewProp_CityLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleCityCell, METADATA_PARAMS(0, nullptr) }; // 1620155202
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityModel, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 1620155202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleCityModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityModel_Statics::ClassParams = {
	&USimpleCityModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleCityModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCityModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCityModel()
{
	if (!Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton, Z_Construct_UClass_USimpleCityModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityModel>()
{
	return USimpleCityModel::StaticClass();
}
USimpleCityModel::USimpleCityModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityModel);
USimpleCityModel::~USimpleCityModel() {}
// End Class USimpleCityModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimpleCityCellType_StaticEnum, TEXT("ESimpleCityCellType"), &Z_Registration_Info_UEnum_ESimpleCityCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3062369243U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleCityCell::StaticStruct, Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewStructOps, TEXT("SimpleCityCell"), &Z_Registration_Info_UScriptStruct_SimpleCityCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCityCell), 1620155202U) },
		{ FCityBlockDimension::StaticStruct, Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewStructOps, TEXT("CityBlockDimension"), &Z_Registration_Info_UScriptStruct_CityBlockDimension, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityBlockDimension), 3890583430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityModel, USimpleCityModel::StaticClass, TEXT("USimpleCityModel"), &Z_Registration_Info_UClass_USimpleCityModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityModel), 3420124807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_1177150692(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
