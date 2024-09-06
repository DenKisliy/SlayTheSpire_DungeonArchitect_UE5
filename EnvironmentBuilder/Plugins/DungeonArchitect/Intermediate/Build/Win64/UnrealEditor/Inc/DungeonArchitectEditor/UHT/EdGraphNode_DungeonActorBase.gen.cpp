// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonActorBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UProceduralDungeonTransformLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_DungeonActorBase
void UEdGraphNode_DungeonActorBase::StaticRegisterNativesUEdGraphNode_DungeonActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonActorBase);
UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase_NoRegister()
{
	return UEdGraphNode_DungeonActorBase::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n      The probability that this node would be processed.   \n      A value of 1 would always process this node and spawn a mesh.  \n      A probability of 0.5 would spawn this mesh 50% of the time\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probability that this node would be processed.\nA value of 1 would always process this node and spawn a mesh.\nA probability of 0.5 would spawn this mesh 50% of the time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Affinity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deprecated. Use Probability instead */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated. Use Probability instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeOnAttach_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n      You can have multiple mesh nodes attached to the same marker type.\n      Each node is processed in order from left to right until all of them\n      are processed or a node has this flag checked. \n      This lets you attach multiple meshes / actors in the same marker point\n      (with possible varying probabilities)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You can have multiple mesh nodes attached to the same marker type.\nEach node is processed in order from left to right until all of them\nare processed or a node has this flag checked.\nThis lets you attach multiple meshes / actors in the same marker point\n(with possible varying probabilities)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use this to adjust the mesh pivot, rotation and scale of your mesh, when it is attached to the marker */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to adjust the mesh pivot, rotation and scale of your mesh, when it is attached to the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelectionLogic_MetaData[] = {
		{ "Category", "Selection Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use blueprint based selection logic */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use blueprint based selection logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogicOverridesAffinity_MetaData[] = {
		{ "Category", "Selection Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n      Determines if we need to multiply the Affinity with the selection logic's result\n      If true, the selection logic fully controls the outcome of the selection process, i.e either select(1) or deselect(0)  \n      If false, then the Affinity would be multiplied with the selector's result\n      Uncheck this if you also want the Affinity to be used along with your selection logic\n    */" },
#endif
		{ "EditCondition", "bUseSelectionLogic" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if we need to multiply the Affinity with the selection logic's result\nIf true, the selection logic fully controls the outcome of the selection process, i.e either select(1) or deselect(0)\nIf false, then the Affinity would be multiplied with the selector's result\nUncheck this if you also want the Affinity to be used along with your selection logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionLogics_Inner_MetaData[] = {
		{ "Category", "Selection Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    Create a blueprint based selection logic by clicking the plus sign.\n    Override the SelectNode function in the blueprint to decide if\n    this node is inserted into the scene based on your blueprint logic\n    */" },
#endif
		{ "EditCondition", "bUseSelectionLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint based selection logic by clicking the plus sign.\nOverride the SelectNode function in the blueprint to decide if\nthis node is inserted into the scene based on your blueprint logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionLogics_MetaData[] = {
		{ "Category", "Selection Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    Create a blueprint based selection logic by clicking the plus sign.\n    Override the SelectNode function in the blueprint to decide if\n    this node is inserted into the scene based on your blueprint logic\n    */" },
#endif
		{ "EditCondition", "bUseSelectionLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint based selection logic by clicking the plus sign.\nOverride the SelectNode function in the blueprint to decide if\nthis node is inserted into the scene based on your blueprint logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTransformLogic_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use blueprint based transform logic */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use blueprint based transform logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformLogics_Inner_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a blueprint to decide on the transform offset that needs to be applied on this node */" },
#endif
		{ "EditCondition", "bUseTransformLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint to decide on the transform offset that needs to be applied on this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformLogics_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a blueprint to decide on the transform offset that needs to be applied on this node */" },
#endif
		{ "EditCondition", "bUseTransformLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint to decide on the transform offset that needs to be applied on this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseProceduralTransformLogic_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use commonly used procedural transform logic */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use commonly used procedural transform logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralTransformLogics_Inner_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Run commonly used procedural transform logics */" },
#endif
		{ "EditCondition", "bUseProceduralTransformLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run commonly used procedural transform logics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralTransformLogics_MetaData[] = {
		{ "Category", "Transform Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Run commonly used procedural transform logics */" },
#endif
		{ "EditCondition", "bUseProceduralTransformLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run commonly used procedural transform logics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpawnLogic_MetaData[] = {
		{ "Category", "Spawn Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use blueprint based selection logic */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use blueprint based selection logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_Inner_MetaData[] = {
		{ "Category", "Spawn Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a blueprint to decide on the transform offset that needs to be applied on this node */" },
#endif
		{ "EditCondition", "bUseSpawnLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint to decide on the transform offset that needs to be applied on this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_MetaData[] = {
		{ "Category", "Spawn Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a blueprint to decide on the transform offset that needs to be applied on this node */" },
#endif
		{ "EditCondition", "bUseSpawnLogic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a blueprint to decide on the transform offset that needs to be applied on this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialConstraint_MetaData[] = {
		{ "Category", "Spatial Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use spatial constraint based selection logic */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use spatial constraint based selection logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialConstraint_MetaData[] = {
		{ "Category", "Spatial Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply spatial constraint information to selectively execute the node if it satisfies a condition based on the surroundings */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply spatial constraint information to selectively execute the node if it satisfies a condition based on the surroundings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Affinity;
	static void NewProp_ConsumeOnAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsumeOnAttach;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bUseSelectionLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelectionLogic;
	static void NewProp_bLogicOverridesAffinity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogicOverridesAffinity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectionLogics;
	static void NewProp_bUseTransformLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTransformLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformLogics;
	static void NewProp_bUseProceduralTransformLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProceduralTransformLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralTransformLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralTransformLogics;
	static void NewProp_bUseSpawnLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpawnLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLogics;
	static void NewProp_bUseSpatialConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialConstraint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatialConstraint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Affinity = { "Affinity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, Affinity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Affinity_MetaData), NewProp_Affinity_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ConsumeOnAttach_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->ConsumeOnAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ConsumeOnAttach = { "ConsumeOnAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ConsumeOnAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeOnAttach_MetaData), NewProp_ConsumeOnAttach_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSelectionLogic_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bUseSelectionLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSelectionLogic = { "bUseSelectionLogic", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSelectionLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSelectionLogic_MetaData), NewProp_bUseSelectionLogic_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bLogicOverridesAffinity_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bLogicOverridesAffinity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bLogicOverridesAffinity = { "bLogicOverridesAffinity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bLogicOverridesAffinity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogicOverridesAffinity_MetaData), NewProp_bLogicOverridesAffinity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SelectionLogics_Inner = { "SelectionLogics", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonSelectorLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionLogics_Inner_MetaData), NewProp_SelectionLogics_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SelectionLogics = { "SelectionLogics", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, SelectionLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionLogics_MetaData), NewProp_SelectionLogics_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseTransformLogic_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bUseTransformLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseTransformLogic = { "bUseTransformLogic", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseTransformLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTransformLogic_MetaData), NewProp_bUseTransformLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_TransformLogics_Inner = { "TransformLogics", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonTransformLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformLogics_Inner_MetaData), NewProp_TransformLogics_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_TransformLogics = { "TransformLogics", nullptr, (EPropertyFlags)0x001002800001000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, TransformLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformLogics_MetaData), NewProp_TransformLogics_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseProceduralTransformLogic_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bUseProceduralTransformLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseProceduralTransformLogic = { "bUseProceduralTransformLogic", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseProceduralTransformLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseProceduralTransformLogic_MetaData), NewProp_bUseProceduralTransformLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ProceduralTransformLogics_Inner = { "ProceduralTransformLogics", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralDungeonTransformLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralTransformLogics_Inner_MetaData), NewProp_ProceduralTransformLogics_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ProceduralTransformLogics = { "ProceduralTransformLogics", nullptr, (EPropertyFlags)0x001002800001000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, ProceduralTransformLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralTransformLogics_MetaData), NewProp_ProceduralTransformLogics_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpawnLogic_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bUseSpawnLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpawnLogic = { "bUseSpawnLogic", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpawnLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpawnLogic_MetaData), NewProp_bUseSpawnLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpawnLogics_Inner = { "SpawnLogics", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonSpawnLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLogics_Inner_MetaData), NewProp_SpawnLogics_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpawnLogics = { "SpawnLogics", nullptr, (EPropertyFlags)0x001002800001000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, SpawnLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLogics_MetaData), NewProp_SpawnLogics_MetaData) };
void Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpatialConstraint_SetBit(void* Obj)
{
	((UEdGraphNode_DungeonActorBase*)Obj)->bUseSpatialConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpatialConstraint = { "bUseSpatialConstraint", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonActorBase), &Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpatialConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpatialConstraint_MetaData), NewProp_bUseSpatialConstraint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpatialConstraint = { "SpatialConstraint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, SpatialConstraint), Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialConstraint_MetaData), NewProp_SpatialConstraint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorBase, ExecutionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionOrder_MetaData), NewProp_ExecutionOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Affinity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ConsumeOnAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSelectionLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bLogicOverridesAffinity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SelectionLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SelectionLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseTransformLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_TransformLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_TransformLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseProceduralTransformLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ProceduralTransformLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ProceduralTransformLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpawnLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpawnLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpawnLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_bUseSpatialConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_SpatialConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::NewProp_ExecutionOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::ClassParams = {
	&UEdGraphNode_DungeonActorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonActorBase.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DungeonActorBase.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonActorBase>()
{
	return UEdGraphNode_DungeonActorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonActorBase);
UEdGraphNode_DungeonActorBase::~UEdGraphNode_DungeonActorBase() {}
// End Class UEdGraphNode_DungeonActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonActorBase, UEdGraphNode_DungeonActorBase::StaticClass, TEXT("UEdGraphNode_DungeonActorBase"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonActorBase), 2642080742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorBase_h_2851410643(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
