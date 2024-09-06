// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UMGPatternScriptNode
void UMGPatternScriptNode::StaticRegisterNativesUMGPatternScriptNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode);
UClass* Z_Construct_UClass_UMGPatternScriptNode_NoRegister()
{
	return UMGPatternScriptNode::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputPins_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputPins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputPins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputPins_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputPins;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins_ValueProp = { "InputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins_Key_KeyProp = { "InputPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode, InputPins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPins_MetaData), NewProp_InputPins_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins_ValueProp = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins_Key_KeyProp = { "OutputPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode, OutputPins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPins_MetaData), NewProp_OutputPins_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNode, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_NodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_InputPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_OutputPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_Statics::ClassParams = {
	&UMGPatternScriptNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNode()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode>()
{
	return UMGPatternScriptNode::StaticClass();
}
UMGPatternScriptNode::UMGPatternScriptNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode);
UMGPatternScriptNode::~UMGPatternScriptNode() {}
// End Class UMGPatternScriptNode

// Begin Class UMGPatternConditionalScriptNodeBase
void UMGPatternConditionalScriptNodeBase::StaticRegisterNativesUMGPatternConditionalScriptNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternConditionalScriptNodeBase);
UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_NoRegister()
{
	return UMGPatternConditionalScriptNodeBase::StaticClass();
}
struct Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternConditionalScriptNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::ClassParams = {
	&UMGPatternConditionalScriptNodeBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase()
{
	if (!Z_Registration_Info_UClass_UMGPatternConditionalScriptNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternConditionalScriptNodeBase.OuterSingleton, Z_Construct_UClass_UMGPatternConditionalScriptNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternConditionalScriptNodeBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternConditionalScriptNodeBase>()
{
	return UMGPatternConditionalScriptNodeBase::StaticClass();
}
UMGPatternConditionalScriptNodeBase::UMGPatternConditionalScriptNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternConditionalScriptNodeBase);
UMGPatternConditionalScriptNodeBase::~UMGPatternConditionalScriptNodeBase() {}
// End Class UMGPatternConditionalScriptNodeBase

// Begin Class UMGPatternActionScriptNodeBase
void UMGPatternActionScriptNodeBase::StaticRegisterNativesUMGPatternActionScriptNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternActionScriptNodeBase);
UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase_NoRegister()
{
	return UMGPatternActionScriptNodeBase::StaticClass();
}
struct Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternActionScriptNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::ClassParams = {
	&UMGPatternActionScriptNodeBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase()
{
	if (!Z_Registration_Info_UClass_UMGPatternActionScriptNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternActionScriptNodeBase.OuterSingleton, Z_Construct_UClass_UMGPatternActionScriptNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternActionScriptNodeBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternActionScriptNodeBase>()
{
	return UMGPatternActionScriptNodeBase::StaticClass();
}
UMGPatternActionScriptNodeBase::UMGPatternActionScriptNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternActionScriptNodeBase);
UMGPatternActionScriptNodeBase::~UMGPatternActionScriptNodeBase() {}
// End Class UMGPatternActionScriptNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScriptNode, UMGPatternScriptNode::StaticClass, TEXT("UMGPatternScriptNode"), &Z_Registration_Info_UClass_UMGPatternScriptNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode), 1277922730U) },
		{ Z_Construct_UClass_UMGPatternConditionalScriptNodeBase, UMGPatternConditionalScriptNodeBase::StaticClass, TEXT("UMGPatternConditionalScriptNodeBase"), &Z_Registration_Info_UClass_UMGPatternConditionalScriptNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternConditionalScriptNodeBase), 2803475439U) },
		{ Z_Construct_UClass_UMGPatternActionScriptNodeBase, UMGPatternActionScriptNodeBase::StaticClass, TEXT("UMGPatternActionScriptNodeBase"), &Z_Registration_Info_UClass_UMGPatternActionScriptNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternActionScriptNodeBase), 1792243375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNode_h_1391614206(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
