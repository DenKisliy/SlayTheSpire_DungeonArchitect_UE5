// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractLink_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowAbstractGraphBase
void UFlowAbstractGraphBase::StaticRegisterNativesUFlowAbstractGraphBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAbstractGraphBase);
UClass* Z_Construct_UClass_UFlowAbstractGraphBase_NoRegister()
{
	return UFlowAbstractGraphBase::StaticClass();
}
struct Z_Construct_UClass_UFlowAbstractGraphBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphLinks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAbstractGraphBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_Inner = { "GraphNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes = { "GraphNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractGraphBase, GraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNodes_MetaData), NewProp_GraphNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_Inner = { "GraphLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowAbstractLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks = { "GraphLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractGraphBase, GraphLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphLinks_MetaData), NewProp_GraphLinks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowAbstractGraphBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::ClassParams = {
	&UFlowAbstractGraphBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowAbstractGraphBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowAbstractGraphBase()
{
	if (!Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton, Z_Construct_UClass_UFlowAbstractGraphBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAbstractGraphBase>()
{
	return UFlowAbstractGraphBase::StaticClass();
}
UFlowAbstractGraphBase::UFlowAbstractGraphBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAbstractGraphBase);
UFlowAbstractGraphBase::~UFlowAbstractGraphBase() {}
// End Class UFlowAbstractGraphBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAbstractGraphBase, UFlowAbstractGraphBase::StaticClass, TEXT("UFlowAbstractGraphBase"), &Z_Registration_Info_UClass_UFlowAbstractGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAbstractGraphBase), 3260427704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractGraph_h_3406265049(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
