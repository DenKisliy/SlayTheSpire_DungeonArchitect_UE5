// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapStreaming() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingActorData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowStreamingChunk();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowStreamingChunk_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapStreamingChunk();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapStreamingChunk_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunkBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunkBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapStreamingChunkBase
void USnapStreamingChunkBase::StaticRegisterNativesUSnapStreamingChunkBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapStreamingChunkBase);
UClass* Z_Construct_UClass_USnapStreamingChunkBase_NoRegister()
{
	return USnapStreamingChunkBase::StaticClass();
}
struct Z_Construct_UClass_USnapStreamingChunkBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SerializedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapStreamingChunkBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapStreamingChunkBase_Statics::NewProp_ModuleTransform = { "ModuleTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapStreamingChunkBase, ModuleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleTransform_MetaData), NewProp_ModuleTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapStreamingChunkBase_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapStreamingChunkBase, SerializedData), Z_Construct_UClass_UDungeonStreamingActorData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedData_MetaData), NewProp_SerializedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapStreamingChunkBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunkBase_Statics::NewProp_ModuleTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunkBase_Statics::NewProp_SerializedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapStreamingChunkBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonStreamingChunk,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapStreamingChunkBase_Statics::ClassParams = {
	&USnapStreamingChunkBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapStreamingChunkBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapStreamingChunkBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapStreamingChunkBase()
{
	if (!Z_Registration_Info_UClass_USnapStreamingChunkBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapStreamingChunkBase.OuterSingleton, Z_Construct_UClass_USnapStreamingChunkBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapStreamingChunkBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapStreamingChunkBase>()
{
	return USnapStreamingChunkBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapStreamingChunkBase);
USnapStreamingChunkBase::~USnapStreamingChunkBase() {}
// End Class USnapStreamingChunkBase

// Begin Class USnapMapStreamingChunk
void USnapMapStreamingChunk::StaticRegisterNativesUSnapMapStreamingChunk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapStreamingChunk);
UClass* Z_Construct_UClass_USnapMapStreamingChunk_NoRegister()
{
	return USnapMapStreamingChunk::StaticClass();
}
struct Z_Construct_UClass_USnapMapStreamingChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapStreamingChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapStreamingChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USnapStreamingChunkBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapStreamingChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapStreamingChunk_Statics::ClassParams = {
	&USnapMapStreamingChunk::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapStreamingChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapStreamingChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapStreamingChunk()
{
	if (!Z_Registration_Info_UClass_USnapMapStreamingChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapStreamingChunk.OuterSingleton, Z_Construct_UClass_USnapMapStreamingChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapStreamingChunk.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapStreamingChunk>()
{
	return USnapMapStreamingChunk::StaticClass();
}
USnapMapStreamingChunk::USnapMapStreamingChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapStreamingChunk);
USnapMapStreamingChunk::~USnapMapStreamingChunk() {}
// End Class USnapMapStreamingChunk

// Begin Class USnapGridFlowStreamingChunk
void USnapGridFlowStreamingChunk::StaticRegisterNativesUSnapGridFlowStreamingChunk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowStreamingChunk);
UClass* Z_Construct_UClass_USnapGridFlowStreamingChunk_NoRegister()
{
	return USnapGridFlowStreamingChunk::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceableMarkersSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlaceableMarkersSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceableMarkersSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowStreamingChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::NewProp_bPlaceableMarkersSpawned_SetBit(void* Obj)
{
	((USnapGridFlowStreamingChunk*)Obj)->bPlaceableMarkersSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::NewProp_bPlaceableMarkersSpawned = { "bPlaceableMarkersSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapGridFlowStreamingChunk), &Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::NewProp_bPlaceableMarkersSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaceableMarkersSpawned_MetaData), NewProp_bPlaceableMarkersSpawned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::NewProp_bPlaceableMarkersSpawned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USnapStreamingChunkBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::ClassParams = {
	&USnapGridFlowStreamingChunk::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowStreamingChunk()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowStreamingChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowStreamingChunk.OuterSingleton, Z_Construct_UClass_USnapGridFlowStreamingChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowStreamingChunk.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowStreamingChunk>()
{
	return USnapGridFlowStreamingChunk::StaticClass();
}
USnapGridFlowStreamingChunk::USnapGridFlowStreamingChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowStreamingChunk);
USnapGridFlowStreamingChunk::~USnapGridFlowStreamingChunk() {}
// End Class USnapGridFlowStreamingChunk

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapStreamingChunkBase, USnapStreamingChunkBase::StaticClass, TEXT("USnapStreamingChunkBase"), &Z_Registration_Info_UClass_USnapStreamingChunkBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapStreamingChunkBase), 229884607U) },
		{ Z_Construct_UClass_USnapMapStreamingChunk, USnapMapStreamingChunk::StaticClass, TEXT("USnapMapStreamingChunk"), &Z_Registration_Info_UClass_USnapMapStreamingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapStreamingChunk), 3235412355U) },
		{ Z_Construct_UClass_USnapGridFlowStreamingChunk, USnapGridFlowStreamingChunk::StaticClass, TEXT("USnapGridFlowStreamingChunk"), &Z_Registration_Info_UClass_USnapGridFlowStreamingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowStreamingChunk), 1150240507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_91988626(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
