// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonProceduralMesh() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshLODData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshSection();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshTangent();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshVertex();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDAProcMeshTangent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshTangent;
class UScriptStruct* FDAProcMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshTangent, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshTangent>()
{
	return FDAProcMeshTangent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of X tangent for this vertex */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of X tangent for this vertex" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
	static void NewProp_bFlipTangentY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshTangent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentX_MetaData), NewProp_TangentX_MetaData) };
void Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
{
	((FDAProcMeshTangent*)Obj)->bFlipTangentY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDAProcMeshTangent), &Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipTangentY_MetaData), NewProp_bFlipTangentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAProcMeshTangent",
	Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers),
	sizeof(FDAProcMeshTangent),
	alignof(FDAProcMeshTangent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshTangent()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton;
}
// End ScriptStruct FDAProcMeshTangent

// Begin ScriptStruct FDAProcMeshVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshVertex;
class UScriptStruct* FDAProcMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshVertex, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshVertex>()
{
	return FDAProcMeshVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex position */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex normal */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex normal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex tangent */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex tangent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex color */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex texture co-ordinate */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex texture co-ordinate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "Category", "Vertex" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, Tangent), Z_Construct_UScriptStruct_FDAProcMeshTangent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 536334444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAProcMeshVertex",
	Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers),
	sizeof(FDAProcMeshVertex),
	alignof(FDAProcMeshVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshVertex()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton;
}
// End ScriptStruct FDAProcMeshVertex

// Begin ScriptStruct FDAProcMeshSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshSection;
class UScriptStruct* FDAProcMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshSection, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshSection>()
{
	return FDAProcMeshSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAProcMeshSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One section of the procedural mesh. Each material has its own section. */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One section of the procedural mesh. Each material has its own section." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcVertexBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex buffer for this section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex buffer for this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index buffer for this section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index buffer for this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local bounding box of section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local bounding box of section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we build collision data for triangles in this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we display this section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we display this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcVertexBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcVertexBuffer;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcIndexBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static void NewProp_bSectionVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshVertex, METADATA_PARAMS(0, nullptr) }; // 2843397647
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshSection, ProcVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcVertexBuffer_MetaData), NewProp_ProcVertexBuffer_MetaData) }; // 2843397647
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcIndexBuffer_MetaData), NewProp_ProcIndexBuffer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionLocalBox_MetaData), NewProp_SectionLocalBox_MetaData) };
void Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((FDAProcMeshSection*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDAProcMeshSection), &Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
void Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
{
	((FDAProcMeshSection*)Obj)->bSectionVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDAProcMeshSection), &Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSectionVisible_MetaData), NewProp_bSectionVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshSection, PrimitiveType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveType_MetaData), NewProp_PrimitiveType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAProcMeshSection",
	Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers),
	sizeof(FDAProcMeshSection),
	alignof(FDAProcMeshSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshSection()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton;
}
// End ScriptStruct FDAProcMeshSection

// Begin ScriptStruct FDAProcMeshLODData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshLODData;
class UScriptStruct* FDAProcMeshLODData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshLODData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshLODData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshLODData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshLODData"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshLODData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshLODData>()
{
	return FDAProcMeshLODData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshLODData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_MeshSections_Inner = { "MeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshSection, METADATA_PARAMS(0, nullptr) }; // 3037564252
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_MeshSections = { "MeshSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshLODData, MeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSections_MetaData), NewProp_MeshSections_MetaData) }; // 3037564252
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAProcMeshLODData, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_MeshSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_MeshSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewProp_ScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAProcMeshLODData",
	Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::PropPointers),
	sizeof(FDAProcMeshLODData),
	alignof(FDAProcMeshLODData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshLODData()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshLODData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshLODData.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshLODData.InnerSingleton;
}
// End ScriptStruct FDAProcMeshLODData

// Begin Class UDAProcMeshComponent Function AddCollisionConvexMesh
struct Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics
{
	struct DAProcMeshComponent_eventAddCollisionConvexMesh_Parms
	{
		TArray<FVector> ConvexVerts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add simple collision convex to this component */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add simple collision convex to this component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner = { "ConvexVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts = { "ConvexVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "AddCollisionConvexMesh", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::DAProcMeshComponent_eventAddCollisionConvexMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::DAProcMeshComponent_eventAddCollisionConvexMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execAddCollisionConvexMesh)
{
	P_GET_TARRAY(FVector,Z_Param_ConvexVerts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function AddCollisionConvexMesh

// Begin Class UDAProcMeshComponent Function ClearAllMeshSections
struct Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear all mesh sections and reset to empty state */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all mesh sections and reset to empty state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execClearAllMeshSections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllMeshSections();
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function ClearAllMeshSections

// Begin Class UDAProcMeshComponent Function ClearCollisionConvexMeshes
struct Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add simple collision convex to this component */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add simple collision convex to this component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearCollisionConvexMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execClearCollisionConvexMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCollisionConvexMeshes();
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function ClearCollisionConvexMeshes

// Begin Class UDAProcMeshComponent Function ClearMeshSection
struct Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics
{
	struct DAProcMeshComponent_eventClearMeshSection_Parms
	{
		int32 LODIndex;
		int32 SectionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear a section of the procedural mesh. Other sections do not change index. */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear a section of the procedural mesh. Other sections do not change index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventClearMeshSection_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::DAProcMeshComponent_eventClearMeshSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::DAProcMeshComponent_eventClearMeshSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execClearMeshSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMeshSection(Z_Param_LODIndex,Z_Param_SectionIndex);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function ClearMeshSection

// Begin Class UDAProcMeshComponent Function CreateMeshSection
struct Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics
{
	struct DAProcMeshComponent_eventCreateMeshSection_Parms
	{
		int32 LODIndex;
		int32 SectionIndex;
		TArray<FDAProcMeshVertex> Vertices;
		TArray<int32> Indices;
		int32 PrimitiveType;
		bool bCreateCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09*\x09""Create/replace a section for this procedural mesh component.\n\x09\x09*\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09\x09*/" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Create Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveType;
	static void NewProp_bCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshVertex, METADATA_PARAMS(0, nullptr) }; // 2843397647
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) }; // 2843397647
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, PrimitiveType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
{
	((DAProcMeshComponent_eventCreateMeshSection_Parms*)Obj)->bCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventCreateMeshSection_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_PrimitiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "CreateMeshSection", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::DAProcMeshComponent_eventCreateMeshSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::DAProcMeshComponent_eventCreateMeshSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execCreateMeshSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_TARRAY_REF(FDAProcMeshVertex,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_GET_PROPERTY(FIntProperty,Z_Param_PrimitiveType);
	P_GET_UBOOL(Z_Param_bCreateCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMeshSection(Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Indices,Z_Param_PrimitiveType,Z_Param_bCreateCollision);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function CreateMeshSection

// Begin Class UDAProcMeshComponent Function GetNumSections
struct Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics
{
	struct DAProcMeshComponent_eventGetNumSections_Parms
	{
		int32 LODIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns number of sections currently created for this component */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns number of sections currently created for this component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventGetNumSections_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::DAProcMeshComponent_eventGetNumSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::DAProcMeshComponent_eventGetNumSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execGetNumSections)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function GetNumSections

// Begin Class UDAProcMeshComponent Function IsMeshSectionVisible
struct Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics
{
	struct DAProcMeshComponent_eventIsMeshSectionVisible_Parms
	{
		int32 LODIndex;
		int32 SectionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether a particular section is currently visible */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether a particular section is currently visible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventIsMeshSectionVisible_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAProcMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::DAProcMeshComponent_eventIsMeshSectionVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::DAProcMeshComponent_eventIsMeshSectionVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execIsMeshSectionVisible)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_LODIndex,Z_Param_SectionIndex);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function IsMeshSectionVisible

// Begin Class UDAProcMeshComponent Function SetMeshSectionVisible
struct Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics
{
	struct DAProcMeshComponent_eventSetMeshSectionVisible_Parms
	{
		int32 LODIndex;
		int32 SectionIndex;
		bool bNewVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control visibility of a particular section */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control visibility of a particular section" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static void NewProp_bNewVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventSetMeshSectionVisible_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAProcMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
{
	((DAProcMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::DAProcMeshComponent_eventSetMeshSectionVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::DAProcMeshComponent_eventSetMeshSectionVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDAProcMeshComponent::execSetMeshSectionVisible)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_UBOOL(Z_Param_bNewVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshSectionVisible(Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_bNewVisibility);
	P_NATIVE_END;
}
// End Class UDAProcMeshComponent Function SetMeshSectionVisible

// Begin Class UDAProcMeshComponent
void UDAProcMeshComponent::StaticRegisterNativesUDAProcMeshComponent()
{
	UClass* Class = UDAProcMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCollisionConvexMesh", &UDAProcMeshComponent::execAddCollisionConvexMesh },
		{ "ClearAllMeshSections", &UDAProcMeshComponent::execClearAllMeshSections },
		{ "ClearCollisionConvexMeshes", &UDAProcMeshComponent::execClearCollisionConvexMeshes },
		{ "ClearMeshSection", &UDAProcMeshComponent::execClearMeshSection },
		{ "CreateMeshSection", &UDAProcMeshComponent::execCreateMeshSection },
		{ "GetNumSections", &UDAProcMeshComponent::execGetNumSections },
		{ "IsMeshSectionVisible", &UDAProcMeshComponent::execIsMeshSectionVisible },
		{ "SetMeshSectionVisible", &UDAProcMeshComponent::execSetMeshSectionVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAProcMeshComponent);
UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister()
{
	return UDAProcMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UDAProcMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. \n\x09 *\x09Should be set to false if this component is going to be given simple collision and simulated.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Procedural Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODFactorScale_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBodySetup_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision data */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convex shapes used for simple collision */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convex shapes used for simple collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local space bounds of mesh */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local space bounds of mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queue for async body setups that are being cooked" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
	static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODFactorScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshBodySetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncBodySetupQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 142870517
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 852509264
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 4053103026
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 1652903941
		{ &Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection, "CreateMeshSection" }, // 3871635876
		{ &Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections, "GetNumSections" }, // 955989704
		{ &Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 4230436156
		{ &Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 2151604237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAProcMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
{
	((UDAProcMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAProcMeshComponent), &Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexAsSimpleCollision_MetaData), NewProp_bUseComplexAsSimpleCollision_MetaData) };
void Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
{
	((UDAProcMeshComponent*)Obj)->bUseAsyncCooking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDAProcMeshComponent), &Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncCooking_MetaData), NewProp_bUseAsyncCooking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LODFactorScale = { "LODFactorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAProcMeshComponent, LODFactorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODFactorScale_MetaData), NewProp_LODFactorScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup = { "MeshBodySetup", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAProcMeshComponent, MeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBodySetup_MetaData), NewProp_MeshBodySetup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(0, nullptr) }; // 3161735465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAProcMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionConvexElems_MetaData), NewProp_CollisionConvexElems_MetaData) }; // 3161735465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAProcMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBounds_MetaData), NewProp_LocalBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAProcMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncBodySetupQueue_MetaData), NewProp_AsyncBodySetupQueue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LODFactorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAProcMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDAProcMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UDAProcMeshComponent, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAProcMeshComponent_Statics::ClassParams = {
	&UDAProcMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAProcMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAProcMeshComponent()
{
	if (!Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton, Z_Construct_UClass_UDAProcMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDAProcMeshComponent>()
{
	return UDAProcMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAProcMeshComponent);
UDAProcMeshComponent::~UDAProcMeshComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDAProcMeshComponent)
// End Class UDAProcMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAProcMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewStructOps, TEXT("DAProcMeshTangent"), &Z_Registration_Info_UScriptStruct_DAProcMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshTangent), 536334444U) },
		{ FDAProcMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewStructOps, TEXT("DAProcMeshVertex"), &Z_Registration_Info_UScriptStruct_DAProcMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshVertex), 2843397647U) },
		{ FDAProcMeshSection::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewStructOps, TEXT("DAProcMeshSection"), &Z_Registration_Info_UScriptStruct_DAProcMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshSection), 3037564252U) },
		{ FDAProcMeshLODData::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshLODData_Statics::NewStructOps, TEXT("DAProcMeshLODData"), &Z_Registration_Info_UScriptStruct_DAProcMeshLODData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshLODData), 3771071443U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAProcMeshComponent, UDAProcMeshComponent::StaticClass, TEXT("UDAProcMeshComponent"), &Z_Registration_Info_UClass_UDAProcMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAProcMeshComponent), 734385488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_572582986(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
