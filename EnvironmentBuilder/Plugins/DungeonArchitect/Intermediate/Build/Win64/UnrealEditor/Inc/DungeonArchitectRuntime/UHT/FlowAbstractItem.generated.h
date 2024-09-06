// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlowGraphItem;
#ifdef DUNGEONARCHITECTRUNTIME_FlowAbstractItem_generated_h
#error "FlowAbstractItem.generated.h already included, missing '#pragma once' in FlowAbstractItem.h"
#endif
#define DUNGEONARCHITECTRUNTIME_FlowAbstractItem_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FFlowItemCustomInfo>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowGraphItem(); \
	friend struct Z_Construct_UClass_UFlowGraphItem_Statics; \
public: \
	DECLARE_CLASS(UFlowGraphItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlowGraphItem)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlowGraphItem(UFlowGraphItem&&); \
	UFlowGraphItem(const UFlowGraphItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowGraphItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowGraphItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlowGraphItem) \
	NO_API virtual ~UFlowGraphItem();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_47_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_49_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UFlowGraphItem>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_88_DELEGATE \
DUNGEONARCHITECTRUNTIME_API void FDungeonFlowItemMetadataEvent_DelegateWrapper(const FMulticastScriptDelegate& DungeonFlowItemMetadataEvent, const UFlowGraphItem* Item);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonFlowItemMetadataComponent(); \
	friend struct Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics; \
public: \
	DECLARE_CLASS(UDungeonFlowItemMetadataComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonFlowItemMetadataComponent)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonFlowItemMetadataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonFlowItemMetadataComponent(UDungeonFlowItemMetadataComponent&&); \
	UDungeonFlowItemMetadataComponent(const UDungeonFlowItemMetadataComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonFlowItemMetadataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonFlowItemMetadataComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonFlowItemMetadataComponent) \
	NO_API virtual ~UDungeonFlowItemMetadataComponent();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_90_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_92_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonFlowItemMetadataComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractItem_h


#define FOREACH_ENUM_EFLOWGRAPHITEMTYPE(op) \
	op(EFlowGraphItemType::Enemy) \
	op(EFlowGraphItemType::Entrance) \
	op(EFlowGraphItemType::Exit) \
	op(EFlowGraphItemType::Treasure) \
	op(EFlowGraphItemType::Key) \
	op(EFlowGraphItemType::Lock) \
	op(EFlowGraphItemType::Teleporter) \
	op(EFlowGraphItemType::Custom) 

enum class EFlowGraphItemType : uint8;
template<> struct TIsUEnumClass<EFlowGraphItemType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowGraphItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
