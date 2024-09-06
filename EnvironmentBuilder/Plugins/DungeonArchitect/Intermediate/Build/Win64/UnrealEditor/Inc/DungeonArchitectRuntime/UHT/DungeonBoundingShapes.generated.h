// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/DungeonBoundingShapes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonBoundingShapes_generated_h
#error "DungeonBoundingShapes.generated.h already included, missing '#pragma once' in DungeonBoundingShapes.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonBoundingShapes_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDABoundsShapeCircle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDABoundsShapeCircle>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDABoundsShapeLine_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDABoundsShapeLine>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDABoundsShapeConvexPoly_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDABoundsShapeConvexPoly>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDABoundsShapeList_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDABoundsShapeList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBoundingShapes_h


#define FOREACH_ENUM_EDABOUNDSSHAPETYPE(op) \
	op(EDABoundsShapeType::Polygon) \
	op(EDABoundsShapeType::Box) \
	op(EDABoundsShapeType::Circle) 

enum class EDABoundsShapeType : uint8;
template<> struct TIsUEnumClass<EDABoundsShapeType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDABoundsShapeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
