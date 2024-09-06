// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/SimpleCity/SimpleCityModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_SimpleCityModel_generated_h
#error "SimpleCityModel.generated.h already included, missing '#pragma once' in SimpleCityModel.h"
#endif
#define DUNGEONARCHITECTRUNTIME_SimpleCityModel_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleCityCell_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FSimpleCityCell>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCityBlockDimension_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FCityBlockDimension>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCityModel(); \
	friend struct Z_Construct_UClass_USimpleCityModel_Statics; \
public: \
	DECLARE_CLASS(USimpleCityModel, UDungeonModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USimpleCityModel)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleCityModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleCityModel(USimpleCityModel&&); \
	USimpleCityModel(const USimpleCityModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleCityModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCityModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCityModel) \
	NO_API virtual ~USimpleCityModel();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_66_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_68_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USimpleCityModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h


#define FOREACH_ENUM_ESIMPLECITYCELLTYPE(op) \
	op(ESimpleCityCellType::Road) \
	op(ESimpleCityCellType::House) \
	op(ESimpleCityCellType::Park) \
	op(ESimpleCityCellType::UserDefined) \
	op(ESimpleCityCellType::Empty) 

enum class ESimpleCityCellType : uint8;
template<> struct TIsUEnumClass<ESimpleCityCellType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESimpleCityCellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
