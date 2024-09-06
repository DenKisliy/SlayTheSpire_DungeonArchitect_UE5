// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Meshing/Geometry/DungeonProceduralMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDAProcMeshVertex;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonProceduralMesh_generated_h
#error "DungeonProceduralMesh.generated.h already included, missing '#pragma once' in DungeonProceduralMesh.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonProceduralMesh_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshTangent>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshVertex>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshSection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshSection>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshLODData>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDAProcMeshComponent, NO_API)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUDAProcMeshComponent(); \
	friend struct Z_Construct_UClass_UDAProcMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDAProcMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDAProcMeshComponent) \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDAProcMeshComponent*>(this); }


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAProcMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAProcMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAProcMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAProcMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDAProcMeshComponent(UDAProcMeshComponent&&); \
	UDAProcMeshComponent(const UDAProcMeshComponent&); \
public: \
	NO_API virtual ~UDAProcMeshComponent();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_185_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_RPC_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDAProcMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
