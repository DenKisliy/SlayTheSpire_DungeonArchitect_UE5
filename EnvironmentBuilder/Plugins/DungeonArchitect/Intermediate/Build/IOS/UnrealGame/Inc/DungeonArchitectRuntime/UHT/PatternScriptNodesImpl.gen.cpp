// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptNodesImpl() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_Result();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UMGPatternScriptNode_EmitMarker
void UMGPatternScriptNode_EmitMarker::StaticRegisterNativesUMGPatternScriptNode_EmitMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_EmitMarker);
UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_NoRegister()
{
	return UMGPatternScriptNode_EmitMarker::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// NOTE: This is an auto-generated file.  Do not modify,  update the definitions.py file instead\n" },
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "NOTE: This is an auto-generated file.  Do not modify,  update the definitions.py file instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Emit Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyRotationFromMarkers_MetaData[] = {
		{ "Category", "Copy Transform" },
		{ "Comment", "/** Copy the rotation from one of the markers found in this list */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "Copy the rotation from one of the markers found in this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyHeightFromMarkers_MetaData[] = {
		{ "Category", "Copy Transform" },
		{ "Comment", "/** Copy the height from one of the markers found in this list */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "Copy the height from one of the markers found in this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateMarkerRemoveRule_MetaData[] = {
		{ "Category", "Duplicate Removal" },
		{ "Comment", "/** Markers emitted into the scene will be removed if they are found to be duplicates.\n\x09 * Specify the type of duplication check you'd like to perform\n\x09 * CheckLocationOnly - Only one marker of the same name is allowed at a certain location (e.g. can't have multiple rotated markers of the same name at the same location)\n\x09 * CheckLocationAndRotation - Only one marker of a certain location and rotation is allowed.   This allows you to have multiple markers at the same place with different rotations\n\x09 * CheckFullTransform - Scale is also considered\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "Markers emitted into the scene will be removed if they are found to be duplicates.\nSpecify the type of duplication check you'd like to perform\nCheckLocationOnly - Only one marker of the same name is allowed at a certain location (e.g. can't have multiple rotated markers of the same name at the same location)\nCheckLocationAndRotation - Only one marker of a certain location and rotation is allowed.   This allows you to have multiple markers at the same place with different rotations\nCheckFullTransform - Scale is also considered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyRotationFromMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyRotationFromMarkers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyHeightFromMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyHeightFromMarkers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DuplicateMarkerRemoveRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicateMarkerRemoveRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_EmitMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_Inner = { "CopyRotationFromMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers = { "CopyRotationFromMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, CopyRotationFromMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyRotationFromMarkers_MetaData), NewProp_CopyRotationFromMarkers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_Inner = { "CopyHeightFromMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers = { "CopyHeightFromMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, CopyHeightFromMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyHeightFromMarkers_MetaData), NewProp_CopyHeightFromMarkers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_DuplicateMarkerRemoveRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_DuplicateMarkerRemoveRule = { "DuplicateMarkerRemoveRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, DuplicateMarkerRemoveRule), Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicateMarkerRemoveRule_MetaData), NewProp_DuplicateMarkerRemoveRule_MetaData) }; // 1331217795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_DuplicateMarkerRemoveRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_DuplicateMarkerRemoveRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::ClassParams = {
	&UMGPatternScriptNode_EmitMarker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_EmitMarker>()
{
	return UMGPatternScriptNode_EmitMarker::StaticClass();
}
UMGPatternScriptNode_EmitMarker::UMGPatternScriptNode_EmitMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_EmitMarker);
UMGPatternScriptNode_EmitMarker::~UMGPatternScriptNode_EmitMarker() {}
// End Class UMGPatternScriptNode_EmitMarker

// Begin Class UMGPatternScriptNode_RemoveMarker
void UMGPatternScriptNode_RemoveMarker::StaticRegisterNativesUMGPatternScriptNode_RemoveMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_RemoveMarker);
UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_NoRegister()
{
	return UMGPatternScriptNode_RemoveMarker::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Remove Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_RemoveMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_RemoveMarker, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::ClassParams = {
	&UMGPatternScriptNode_RemoveMarker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_RemoveMarker>()
{
	return UMGPatternScriptNode_RemoveMarker::StaticClass();
}
UMGPatternScriptNode_RemoveMarker::UMGPatternScriptNode_RemoveMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_RemoveMarker);
UMGPatternScriptNode_RemoveMarker::~UMGPatternScriptNode_RemoveMarker() {}
// End Class UMGPatternScriptNode_RemoveMarker

// Begin Class UMGPatternScriptNode_LogicalAnd
void UMGPatternScriptNode_LogicalAnd::StaticRegisterNativesUMGPatternScriptNode_LogicalAnd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalAnd);
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_NoRegister()
{
	return UMGPatternScriptNode_LogicalAnd::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalAnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::ClassParams = {
	&UMGPatternScriptNode_LogicalAnd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalAnd>()
{
	return UMGPatternScriptNode_LogicalAnd::StaticClass();
}
UMGPatternScriptNode_LogicalAnd::UMGPatternScriptNode_LogicalAnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalAnd);
UMGPatternScriptNode_LogicalAnd::~UMGPatternScriptNode_LogicalAnd() {}
// End Class UMGPatternScriptNode_LogicalAnd

// Begin Class UMGPatternScriptNode_LogicalNot
void UMGPatternScriptNode_LogicalNot::StaticRegisterNativesUMGPatternScriptNode_LogicalNot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalNot);
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_NoRegister()
{
	return UMGPatternScriptNode_LogicalNot::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalNot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::ClassParams = {
	&UMGPatternScriptNode_LogicalNot::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalNot>()
{
	return UMGPatternScriptNode_LogicalNot::StaticClass();
}
UMGPatternScriptNode_LogicalNot::UMGPatternScriptNode_LogicalNot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalNot);
UMGPatternScriptNode_LogicalNot::~UMGPatternScriptNode_LogicalNot() {}
// End Class UMGPatternScriptNode_LogicalNot

// Begin Class UMGPatternScriptNode_LogicalOr
void UMGPatternScriptNode_LogicalOr::StaticRegisterNativesUMGPatternScriptNode_LogicalOr()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalOr);
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_NoRegister()
{
	return UMGPatternScriptNode_LogicalOr::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalOr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::ClassParams = {
	&UMGPatternScriptNode_LogicalOr::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalOr>()
{
	return UMGPatternScriptNode_LogicalOr::StaticClass();
}
UMGPatternScriptNode_LogicalOr::UMGPatternScriptNode_LogicalOr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalOr);
UMGPatternScriptNode_LogicalOr::~UMGPatternScriptNode_LogicalOr() {}
// End Class UMGPatternScriptNode_LogicalOr

// Begin Class UMGPatternScriptNode_MarkerExists
void UMGPatternScriptNode_MarkerExists::StaticRegisterNativesUMGPatternScriptNode_MarkerExists()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_MarkerExists);
UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_NoRegister()
{
	return UMGPatternScriptNode_MarkerExists::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Markers" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_MarkerExists>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_MarkerExists, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::ClassParams = {
	&UMGPatternScriptNode_MarkerExists::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_MarkerExists>()
{
	return UMGPatternScriptNode_MarkerExists::StaticClass();
}
UMGPatternScriptNode_MarkerExists::UMGPatternScriptNode_MarkerExists(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_MarkerExists);
UMGPatternScriptNode_MarkerExists::~UMGPatternScriptNode_MarkerExists() {}
// End Class UMGPatternScriptNode_MarkerExists

// Begin Class UMGPatternScriptNode_MarkerListExists
void UMGPatternScriptNode_MarkerListExists::StaticRegisterNativesUMGPatternScriptNode_MarkerListExists()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_MarkerListExists);
UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_NoRegister()
{
	return UMGPatternScriptNode_MarkerListExists::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerNames_MetaData[] = {
		{ "Category", "Markers" },
		{ "Comment", "/** List of marker names to check for */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "List of marker names to check for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_MarkerListExists>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::NewProp_MarkerNames_Inner = { "MarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::NewProp_MarkerNames = { "MarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode_MarkerListExists, MarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerNames_MetaData), NewProp_MarkerNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::NewProp_MarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::NewProp_MarkerNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::ClassParams = {
	&UMGPatternScriptNode_MarkerListExists::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerListExists.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerListExists.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerListExists.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_MarkerListExists>()
{
	return UMGPatternScriptNode_MarkerListExists::StaticClass();
}
UMGPatternScriptNode_MarkerListExists::UMGPatternScriptNode_MarkerListExists(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_MarkerListExists);
UMGPatternScriptNode_MarkerListExists::~UMGPatternScriptNode_MarkerListExists() {}
// End Class UMGPatternScriptNode_MarkerListExists

// Begin Class UMGPatternScriptNode_OnPass
void UMGPatternScriptNode_OnPass::StaticRegisterNativesUMGPatternScriptNode_OnPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_OnPass);
UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister()
{
	return UMGPatternScriptNode_OnPass::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_OnPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::ClassParams = {
	&UMGPatternScriptNode_OnPass::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_OnPass>()
{
	return UMGPatternScriptNode_OnPass::StaticClass();
}
UMGPatternScriptNode_OnPass::UMGPatternScriptNode_OnPass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_OnPass);
UMGPatternScriptNode_OnPass::~UMGPatternScriptNode_OnPass() {}
// End Class UMGPatternScriptNode_OnPass

// Begin Class UMGPatternScriptNode_Result
void UMGPatternScriptNode_Result::StaticRegisterNativesUMGPatternScriptNode_Result()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_Result);
UClass* Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister()
{
	return UMGPatternScriptNode_Result::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_Result_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_Result>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::ClassParams = {
	&UMGPatternScriptNode_Result::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode_Result()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_Result>()
{
	return UMGPatternScriptNode_Result::StaticClass();
}
UMGPatternScriptNode_Result::UMGPatternScriptNode_Result(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_Result);
UMGPatternScriptNode_Result::~UMGPatternScriptNode_Result() {}
// End Class UMGPatternScriptNode_Result

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScriptNode_EmitMarker, UMGPatternScriptNode_EmitMarker::StaticClass, TEXT("UMGPatternScriptNode_EmitMarker"), &Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_EmitMarker), 3894153094U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker, UMGPatternScriptNode_RemoveMarker::StaticClass, TEXT("UMGPatternScriptNode_RemoveMarker"), &Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_RemoveMarker), 3254608776U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd, UMGPatternScriptNode_LogicalAnd::StaticClass, TEXT("UMGPatternScriptNode_LogicalAnd"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalAnd), 1589465017U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalNot, UMGPatternScriptNode_LogicalNot::StaticClass, TEXT("UMGPatternScriptNode_LogicalNot"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalNot), 3343508572U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalOr, UMGPatternScriptNode_LogicalOr::StaticClass, TEXT("UMGPatternScriptNode_LogicalOr"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalOr), 3444231851U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_MarkerExists, UMGPatternScriptNode_MarkerExists::StaticClass, TEXT("UMGPatternScriptNode_MarkerExists"), &Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_MarkerExists), 3427959142U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_MarkerListExists, UMGPatternScriptNode_MarkerListExists::StaticClass, TEXT("UMGPatternScriptNode_MarkerListExists"), &Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerListExists, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_MarkerListExists), 2301244403U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_OnPass, UMGPatternScriptNode_OnPass::StaticClass, TEXT("UMGPatternScriptNode_OnPass"), &Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_OnPass), 525956363U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_Result, UMGPatternScriptNode_Result::StaticClass, TEXT("UMGPatternScriptNode_Result"), &Z_Registration_Info_UClass_UMGPatternScriptNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_Result), 4082309844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_1962572359(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
