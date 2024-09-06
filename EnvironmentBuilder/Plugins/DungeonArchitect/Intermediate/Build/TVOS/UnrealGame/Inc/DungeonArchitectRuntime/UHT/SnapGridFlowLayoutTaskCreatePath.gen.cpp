// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskCreatePath() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapGridFlowLayoutTaskCreatePath
void USnapGridFlowLayoutTaskCreatePath::StaticRegisterNativesUSnapGridFlowLayoutTaskCreatePath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskCreatePath);
UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_NoRegister()
{
	return USnapGridFlowLayoutTaskCreatePath::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "MenuPriority", "1200" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "Title", "Create Path" },
		{ "Tooltip", "Create a path on an existing network" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNodeCreationConstraint_MetaData[] = {
		{ "Category", "Node Constraints" },
		{ "Comment", "/**\n        Enable this to control where the nodes are created\n\n        Variable Name: bUseNodeCreationConstraint\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Enable this to control where the nodes are created\n\nVariable Name: bUseNodeCreationConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeCreationConstraint_MetaData[] = {
		{ "Category", "Node Constraints" },
		{ "Comment", "/**\n        Use a blueprint to control where the layout nodes are allowed to be created   \n        This is useful if you want static entrances to your dungeon\n        This parameter requires bUseNodeCreationConstraint flag to be set\n\n        Variable Name: N/A\n    */" },
		{ "EditCondition", "bUseNodeCreationConstraint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Use a blueprint to control where the layout nodes are allowed to be created\nThis is useful if you want static entrances to your dungeon\nThis parameter requires bUseNodeCreationConstraint flag to be set\n\nVariable Name: N/A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategories_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategoryOverrideMethod_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_Inner_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "// Use a blueprint logic to change the category list on a per-node basis, if needed.\n// Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "// Use a blueprint logic to change the category list on a per-node basis, if needed.\n// Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseNodeCreationConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNodeCreationConstraint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeCreationConstraint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleCategories;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModuleCategoryOverrideMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModuleCategoryOverrideMethod;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartNodeCategoryOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartNodeCategoryOverride;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndNodeCategoryOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EndNodeCategoryOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryOverrideLogic_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryOverrideLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskCreatePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_bUseNodeCreationConstraint_SetBit(void* Obj)
{
	((USnapGridFlowLayoutTaskCreatePath*)Obj)->bUseNodeCreationConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_bUseNodeCreationConstraint = { "bUseNodeCreationConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapGridFlowLayoutTaskCreatePath), &Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_bUseNodeCreationConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNodeCreationConstraint_MetaData), NewProp_bUseNodeCreationConstraint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_NodeCreationConstraint = { "NodeCreationConstraint", nullptr, (EPropertyFlags)0x001202000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, NodeCreationConstraint), Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeCreationConstraint_MetaData), NewProp_NodeCreationConstraint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategories_Inner = { "ModuleCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategories = { "ModuleCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, ModuleCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategories_MetaData), NewProp_ModuleCategories_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategoryOverrideMethod = { "ModuleCategoryOverrideMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, ModuleCategoryOverrideMethod), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategoryOverrideMethod_MetaData), NewProp_ModuleCategoryOverrideMethod_MetaData) }; // 1616541459
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_StartNodeCategoryOverride_Inner = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_StartNodeCategoryOverride = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, StartNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodeCategoryOverride_MetaData), NewProp_StartNodeCategoryOverride_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_EndNodeCategoryOverride_Inner = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_EndNodeCategoryOverride = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, EndNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNodeCategoryOverride_MetaData), NewProp_EndNodeCategoryOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_CategoryOverrideLogic_Inner = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryOverrideLogic_Inner_MetaData), NewProp_CategoryOverrideLogic_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_CategoryOverrideLogic = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0010028000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreatePath, CategoryOverrideLogic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryOverrideLogic_MetaData), NewProp_CategoryOverrideLogic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_bUseNodeCreationConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_NodeCreationConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_ModuleCategoryOverrideMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_StartNodeCategoryOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_StartNodeCategoryOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_EndNodeCategoryOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_EndNodeCategoryOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_CategoryOverrideLogic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::NewProp_CategoryOverrideLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::ClassParams = {
	&USnapGridFlowLayoutTaskCreatePath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreatePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreatePath.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreatePath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskCreatePath>()
{
	return USnapGridFlowLayoutTaskCreatePath::StaticClass();
}
USnapGridFlowLayoutTaskCreatePath::USnapGridFlowLayoutTaskCreatePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskCreatePath);
USnapGridFlowLayoutTaskCreatePath::~USnapGridFlowLayoutTaskCreatePath() {}
// End Class USnapGridFlowLayoutTaskCreatePath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreatePath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskCreatePath, USnapGridFlowLayoutTaskCreatePath::StaticClass, TEXT("USnapGridFlowLayoutTaskCreatePath"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreatePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskCreatePath), 1766608983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreatePath_h_744664480(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreatePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreatePath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
