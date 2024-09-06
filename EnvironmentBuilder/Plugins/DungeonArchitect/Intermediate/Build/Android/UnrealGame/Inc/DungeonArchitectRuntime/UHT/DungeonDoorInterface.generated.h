// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Layout/DungeonDoorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonDoorInterface_generated_h
#error "DungeonDoorInterface.generated.h already included, missing '#pragma once' in DungeonDoorInterface.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonDoorInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetDoorBaseRotation_Implementation() const { return 0; }; \
	virtual float GetDoorWidth_Implementation() const { return 0; }; \
	virtual bool IsOneWayPassage_Implementation() const { return false; }; \
	virtual bool SupportsLocking_Implementation() const { return false; }; \
	virtual bool IsPassageOpen_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execGetDoorBaseRotation); \
	DECLARE_FUNCTION(execGetDoorWidth); \
	DECLARE_FUNCTION(execIsOneWayPassage); \
	DECLARE_FUNCTION(execSupportsLocking); \
	DECLARE_FUNCTION(execIsPassageOpen);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DUNGEONARCHITECTRUNTIME_API UDungeonDoorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonDoorInterface(UDungeonDoorInterface&&); \
	UDungeonDoorInterface(const UDungeonDoorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DUNGEONARCHITECTRUNTIME_API, UDungeonDoorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonDoorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonDoorInterface) \
	DUNGEONARCHITECTRUNTIME_API virtual ~UDungeonDoorInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDungeonDoorInterface(); \
	friend struct Z_Construct_UClass_UDungeonDoorInterface_Statics; \
public: \
	DECLARE_CLASS(UDungeonDoorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), DUNGEONARCHITECTRUNTIME_API) \
	DECLARE_SERIALIZER(UDungeonDoorInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDungeonDoorInterface() {} \
public: \
	typedef UDungeonDoorInterface UClassType; \
	typedef IDungeonDoorInterface ThisClass; \
	static float Execute_GetDoorBaseRotation(const UObject* O); \
	static float Execute_GetDoorWidth(const UObject* O); \
	static bool Execute_IsOneWayPassage(const UObject* O); \
	static bool Execute_IsPassageOpen(const UObject* O); \
	static bool Execute_SupportsLocking(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonDoorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_DungeonDoorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
