// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_FlowAbstractLink_generated_h
#error "FlowAbstractLink.generated.h already included, missing '#pragma once' in FlowAbstractLink.h"
#endif
#define DUNGEONARCHITECTRUNTIME_FlowAbstractLink_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowAbstractLink(); \
	friend struct Z_Construct_UClass_UFlowAbstractLink_Statics; \
public: \
	DECLARE_CLASS(UFlowAbstractLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlowAbstractLink)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowAbstractLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlowAbstractLink(UFlowAbstractLink&&); \
	UFlowAbstractLink(const UFlowAbstractLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowAbstractLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowAbstractLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowAbstractLink) \
	NO_API virtual ~UFlowAbstractLink();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UFlowAbstractLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractLink_h


#define FOREACH_ENUM_EFLOWABSTRACTLINKTYPE(op) \
	op(EFlowAbstractLinkType::Unconnected) \
	op(EFlowAbstractLinkType::Connected) \
	op(EFlowAbstractLinkType::OneWay) 

enum class EFlowAbstractLinkType : uint8;
template<> struct TIsUEnumClass<EFlowAbstractLinkType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowAbstractLinkType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
