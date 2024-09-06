// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapConnectionComponent
void USnapConnectionComponent::StaticRegisterNativesUSnapConnectionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionComponent);
UClass* Z_Construct_UClass_USnapConnectionComponent_NoRegister()
{
	return USnapConnectionComponent::StaticClass();
}
struct Z_Construct_UClass_USnapConnectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionState_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraint_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPrefix_MetaData[] = {
		{ "Comment", "/** The prefix to apply on the marker name, e.g. if the value is \"Minimap\", then the \"Door\" marker would become \"MinimapDoor\" */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionComponent.h" },
		{ "ToolTip", "The prefix to apply on the marker name, e.g. if the value is \"Minimap\", then the \"Door\" marker would become \"MinimapDoor\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionConstraint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerPrefix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInfo_MetaData), NewProp_ConnectionInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, ConnectionState), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionState_MetaData), NewProp_ConnectionState_MetaData) }; // 2470439919
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, DoorType), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) }; // 2455123322
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, SpawnOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOffset_MetaData), NewProp_SpawnOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionConstraint = { "ConnectionConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, ConnectionConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionConstraint_MetaData), NewProp_ConnectionConstraint_MetaData) }; // 646942352
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_MarkerPrefix = { "MarkerPrefix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionComponent, MarkerPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPrefix_MetaData), NewProp_MarkerPrefix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapConnectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_DoorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_SpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_ConnectionConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionComponent_Statics::NewProp_MarkerPrefix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapConnectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionComponent_Statics::ClassParams = {
	&USnapConnectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapConnectionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapConnectionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapConnectionComponent()
{
	if (!Z_Registration_Info_UClass_USnapConnectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionComponent.OuterSingleton, Z_Construct_UClass_USnapConnectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapConnectionComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapConnectionComponent>()
{
	return USnapConnectionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionComponent);
USnapConnectionComponent::~USnapConnectionComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USnapConnectionComponent)
// End Class USnapConnectionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionComponent, USnapConnectionComponent::StaticClass, TEXT("USnapConnectionComponent"), &Z_Registration_Info_UClass_USnapConnectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionComponent), 3748419519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionComponent_h_1677133918(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
