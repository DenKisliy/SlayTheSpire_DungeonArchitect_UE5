// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapFlowAbstractGraphSupport() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeSnapDomainData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeSnapDomainData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTaskExtender();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USGFNodeGroupUserData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USGFNodeGroupUserData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowAGTaskExtender();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowAGTaskExtender_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssembly();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapFlowAGNodeGroupSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting;
class UScriptStruct* FSnapFlowAGNodeGroupSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapFlowAGNodeGroupSetting"));
	}
	return Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapFlowAGNodeGroupSetting>()
{
	return FSnapFlowAGNodeGroupSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleAssembly_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSurfaceCoords_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVolumeCoords_MetaData[] = {
		{ "Category", "Node Group" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleAssembly;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSurfaceCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSurfaceCoords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVolumeCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalVolumeCoords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapFlowAGNodeGroupSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSize_MetaData), NewProp_GroupSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_ModuleAssembly = { "ModuleAssembly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, ModuleAssembly), Z_Construct_UScriptStruct_FSGFModuleAssembly, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleAssembly_MetaData), NewProp_ModuleAssembly_MetaData) }; // 990800978
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalSurfaceCoords_Inner = { "LocalSurfaceCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalSurfaceCoords = { "LocalSurfaceCoords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, LocalSurfaceCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSurfaceCoords_MetaData), NewProp_LocalSurfaceCoords_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalVolumeCoords_Inner = { "LocalVolumeCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalVolumeCoords = { "LocalVolumeCoords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapFlowAGNodeGroupSetting, LocalVolumeCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVolumeCoords_MetaData), NewProp_LocalVolumeCoords_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_GroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_ModuleAssembly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalSurfaceCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalSurfaceCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalVolumeCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewProp_LocalVolumeCoords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapFlowAGNodeGroupSetting",
	Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::PropPointers),
	sizeof(FSnapFlowAGNodeGroupSetting),
	alignof(FSnapFlowAGNodeGroupSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting()
{
	if (!Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.InnerSingleton, Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting.InnerSingleton;
}
// End ScriptStruct FSnapFlowAGNodeGroupSetting

// Begin Class USGFNodeGroupUserData
void USGFNodeGroupUserData::StaticRegisterNativesUSGFNodeGroupUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGFNodeGroupUserData);
UClass* Z_Construct_UClass_USGFNodeGroupUserData_NoRegister()
{
	return USGFNodeGroupUserData::StaticClass();
}
struct Z_Construct_UClass_USGFNodeGroupUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleAssembly_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleAssembly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGFNodeGroupUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGFNodeGroupUserData_Statics::NewProp_ModuleAssembly = { "ModuleAssembly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFNodeGroupUserData, ModuleAssembly), Z_Construct_UScriptStruct_FSGFModuleAssembly, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleAssembly_MetaData), NewProp_ModuleAssembly_MetaData) }; // 990800978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGFNodeGroupUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFNodeGroupUserData_Statics::NewProp_ModuleAssembly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFNodeGroupUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGFNodeGroupUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFNodeGroupUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGFNodeGroupUserData_Statics::ClassParams = {
	&USGFNodeGroupUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USGFNodeGroupUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USGFNodeGroupUserData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGFNodeGroupUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_USGFNodeGroupUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGFNodeGroupUserData()
{
	if (!Z_Registration_Info_UClass_USGFNodeGroupUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGFNodeGroupUserData.OuterSingleton, Z_Construct_UClass_USGFNodeGroupUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGFNodeGroupUserData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USGFNodeGroupUserData>()
{
	return USGFNodeGroupUserData::StaticClass();
}
USGFNodeGroupUserData::USGFNodeGroupUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGFNodeGroupUserData);
USGFNodeGroupUserData::~USGFNodeGroupUserData() {}
// End Class USGFNodeGroupUserData

// Begin Class UFANodeSnapDomainData
void UFANodeSnapDomainData::StaticRegisterNativesUFANodeSnapDomainData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFANodeSnapDomainData);
UClass* Z_Construct_UClass_UFANodeSnapDomainData_NoRegister()
{
	return UFANodeSnapDomainData::StaticClass();
}
struct Z_Construct_UClass_UFANodeSnapDomainData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n    Tilemap domain specific data that is attached to the abstract graph nodes\n*/" },
		{ "IncludePath", "Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "Tilemap domain specific data that is attached to the abstract graph nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleCategories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFANodeSnapDomainData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFANodeSnapDomainData_Statics::NewProp_ModuleCategories_Inner = { "ModuleCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFANodeSnapDomainData_Statics::NewProp_ModuleCategories = { "ModuleCategories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFANodeSnapDomainData, ModuleCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategories_MetaData), NewProp_ModuleCategories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFANodeSnapDomainData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeSnapDomainData_Statics::NewProp_ModuleCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeSnapDomainData_Statics::NewProp_ModuleCategories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeSnapDomainData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFANodeSnapDomainData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeSnapDomainData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFANodeSnapDomainData_Statics::ClassParams = {
	&UFANodeSnapDomainData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFANodeSnapDomainData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeSnapDomainData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeSnapDomainData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFANodeSnapDomainData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFANodeSnapDomainData()
{
	if (!Z_Registration_Info_UClass_UFANodeSnapDomainData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFANodeSnapDomainData.OuterSingleton, Z_Construct_UClass_UFANodeSnapDomainData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFANodeSnapDomainData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFANodeSnapDomainData>()
{
	return UFANodeSnapDomainData::StaticClass();
}
UFANodeSnapDomainData::UFANodeSnapDomainData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFANodeSnapDomainData);
UFANodeSnapDomainData::~UFANodeSnapDomainData() {}
// End Class UFANodeSnapDomainData

// Begin Class USnapFlowNodeCategorySelectionOverride Function TryOverrideCategories
struct SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms
{
	int32 PathIndex;
	int32 PathLength;
	TArray<FName> ExistingCategories;
	TArray<FVector> NodeCoords;
	TArray<FName> OutNewCategories;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories = FName(TEXT("TryOverrideCategories"));
bool USnapFlowNodeCategorySelectionOverride::TryOverrideCategories(int32 PathIndex, int32 PathLength, TArray<FName> const& ExistingCategories, TArray<FVector> const& NodeCoords, TArray<FName>& OutNewCategories)
{
	SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms Parms;
	Parms.PathIndex=PathIndex;
	Parms.PathLength=PathLength;
	Parms.ExistingCategories=ExistingCategories;
	Parms.NodeCoords=NodeCoords;
	Parms.OutNewCategories=OutNewCategories;
	ProcessEvent(FindFunctionChecked(NAME_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories),&Parms);
	OutNewCategories=Parms.OutNewCategories;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "// Change the category list if needed. Return true if the new list should be used, false to ignore this override blueprint \n" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "Change the category list if needed. Return true if the new list should be used, false to ignore this override blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingCategories_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathLength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExistingCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExistingCategories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeCoords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeCoords;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutNewCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNewCategories;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_PathIndex = { "PathIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms, PathIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms, PathLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ExistingCategories_Inner = { "ExistingCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ExistingCategories = { "ExistingCategories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms, ExistingCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingCategories_MetaData), NewProp_ExistingCategories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_NodeCoords_Inner = { "NodeCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_NodeCoords = { "NodeCoords", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms, NodeCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeCoords_MetaData), NewProp_NodeCoords_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_OutNewCategories_Inner = { "OutNewCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_OutNewCategories = { "OutNewCategories", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms, OutNewCategories), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms), &Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_PathIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_PathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ExistingCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ExistingCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_NodeCoords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_NodeCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_OutNewCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_OutNewCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride, nullptr, "TryOverrideCategories", nullptr, nullptr, Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::PropPointers), sizeof(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapFlowNodeCategorySelectionOverride_eventTryOverrideCategories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapFlowNodeCategorySelectionOverride::execTryOverrideCategories)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PathIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_PathLength);
	P_GET_TARRAY_REF(FName,Z_Param_Out_ExistingCategories);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_NodeCoords);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutNewCategories);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryOverrideCategories_Implementation(Z_Param_PathIndex,Z_Param_PathLength,Z_Param_Out_ExistingCategories,Z_Param_Out_NodeCoords,Z_Param_Out_OutNewCategories);
	P_NATIVE_END;
}
// End Class USnapFlowNodeCategorySelectionOverride Function TryOverrideCategories

// Begin Class USnapFlowNodeCategorySelectionOverride
void USnapFlowNodeCategorySelectionOverride::StaticRegisterNativesUSnapFlowNodeCategorySelectionOverride()
{
	UClass* Class = USnapFlowNodeCategorySelectionOverride::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryOverrideCategories", &USnapFlowNodeCategorySelectionOverride::execTryOverrideCategories },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapFlowNodeCategorySelectionOverride);
UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister()
{
	return USnapFlowNodeCategorySelectionOverride::StaticClass();
}
struct Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////// Snap Abstract Graph Node Selection /////////////////////////////////////////////\n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "/ Snap Abstract Graph Node Selection" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapFlowNodeCategorySelectionOverride_TryOverrideCategories, "TryOverrideCategories" }, // 2784089983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapFlowNodeCategorySelectionOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::ClassParams = {
	&USnapFlowNodeCategorySelectionOverride::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x042010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride()
{
	if (!Z_Registration_Info_UClass_USnapFlowNodeCategorySelectionOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapFlowNodeCategorySelectionOverride.OuterSingleton, Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapFlowNodeCategorySelectionOverride.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapFlowNodeCategorySelectionOverride>()
{
	return USnapFlowNodeCategorySelectionOverride::StaticClass();
}
USnapFlowNodeCategorySelectionOverride::USnapFlowNodeCategorySelectionOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapFlowNodeCategorySelectionOverride);
USnapFlowNodeCategorySelectionOverride::~USnapFlowNodeCategorySelectionOverride() {}
// End Class USnapFlowNodeCategorySelectionOverride

// Begin Enum ESnapFlowAGTaskModuleCategoryOverrideMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod;
static UEnum* ESnapFlowAGTaskModuleCategoryOverrideMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESnapFlowAGTaskModuleCategoryOverrideMethod"));
	}
	return Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapFlowAGTaskModuleCategoryOverrideMethod>()
{
	return ESnapFlowAGTaskModuleCategoryOverrideMethod_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blueprint.DisplayName", "Blueprint" },
		{ "Blueprint.Name", "ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESnapFlowAGTaskModuleCategoryOverrideMethod::None" },
		{ "StartEnd.DisplayName", "Start / End Nodes" },
		{ "StartEnd.Name", "ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnapFlowAGTaskModuleCategoryOverrideMethod::None", (int64)ESnapFlowAGTaskModuleCategoryOverrideMethod::None },
		{ "ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd", (int64)ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd },
		{ "ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint", (int64)ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"ESnapFlowAGTaskModuleCategoryOverrideMethod",
	"ESnapFlowAGTaskModuleCategoryOverrideMethod",
	Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod()
{
	if (!Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod.InnerSingleton;
}
// End Enum ESnapFlowAGTaskModuleCategoryOverrideMethod

// Begin Class USnapFlowAGTaskExtender
void USnapFlowAGTaskExtender::StaticRegisterNativesUSnapFlowAGTaskExtender()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapFlowAGTaskExtender);
UClass* Z_Construct_UClass_USnapFlowAGTaskExtender_NoRegister()
{
	return USnapFlowAGTaskExtender::StaticClass();
}
struct Z_Construct_UClass_USnapFlowAGTaskExtender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////// DEPRECATED: USnapFlowAGTaskExtender /////////////////////////////////////////////\n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "/ DEPRECATED: USnapFlowAGTaskExtender" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategories_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategoryOverrideMethod_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_Inner_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "/**\n     * Use a blueprint logic to change the category list on a per-node basis, if needed.\n     * Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n     */" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "/**\n     * Use a blueprint logic to change the category list on a per-node basis, if needed.\n     * Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n     */" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Snap/SnapFlowAbstractGraphSupport.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
#endif // WITH_METADATA
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
		TCppClassTypeTraits<USnapFlowAGTaskExtender>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategories_Inner = { "ModuleCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategories = { "ModuleCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapFlowAGTaskExtender, ModuleCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategories_MetaData), NewProp_ModuleCategories_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategoryOverrideMethod = { "ModuleCategoryOverrideMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapFlowAGTaskExtender, ModuleCategoryOverrideMethod), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategoryOverrideMethod_MetaData), NewProp_ModuleCategoryOverrideMethod_MetaData) }; // 1616541459
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_StartNodeCategoryOverride_Inner = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_StartNodeCategoryOverride = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapFlowAGTaskExtender, StartNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodeCategoryOverride_MetaData), NewProp_StartNodeCategoryOverride_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_EndNodeCategoryOverride_Inner = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_EndNodeCategoryOverride = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapFlowAGTaskExtender, EndNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNodeCategoryOverride_MetaData), NewProp_EndNodeCategoryOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_CategoryOverrideLogic_Inner = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryOverrideLogic_Inner_MetaData), NewProp_CategoryOverrideLogic_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_CategoryOverrideLogic = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0010028000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapFlowAGTaskExtender, CategoryOverrideLogic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryOverrideLogic_MetaData), NewProp_CategoryOverrideLogic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_ModuleCategoryOverrideMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_StartNodeCategoryOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_StartNodeCategoryOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_EndNodeCategoryOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_EndNodeCategoryOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_CategoryOverrideLogic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::NewProp_CategoryOverrideLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecTaskExtender,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::ClassParams = {
	&USnapFlowAGTaskExtender::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapFlowAGTaskExtender()
{
	if (!Z_Registration_Info_UClass_USnapFlowAGTaskExtender.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapFlowAGTaskExtender.OuterSingleton, Z_Construct_UClass_USnapFlowAGTaskExtender_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapFlowAGTaskExtender.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapFlowAGTaskExtender>()
{
	return USnapFlowAGTaskExtender::StaticClass();
}
USnapFlowAGTaskExtender::USnapFlowAGTaskExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapFlowAGTaskExtender);
USnapFlowAGTaskExtender::~USnapFlowAGTaskExtender() {}
// End Class USnapFlowAGTaskExtender

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESnapFlowAGTaskModuleCategoryOverrideMethod_StaticEnum, TEXT("ESnapFlowAGTaskModuleCategoryOverrideMethod"), &Z_Registration_Info_UEnum_ESnapFlowAGTaskModuleCategoryOverrideMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1616541459U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapFlowAGNodeGroupSetting::StaticStruct, Z_Construct_UScriptStruct_FSnapFlowAGNodeGroupSetting_Statics::NewStructOps, TEXT("SnapFlowAGNodeGroupSetting"), &Z_Registration_Info_UScriptStruct_SnapFlowAGNodeGroupSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapFlowAGNodeGroupSetting), 427877566U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGFNodeGroupUserData, USGFNodeGroupUserData::StaticClass, TEXT("USGFNodeGroupUserData"), &Z_Registration_Info_UClass_USGFNodeGroupUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGFNodeGroupUserData), 3176250490U) },
		{ Z_Construct_UClass_UFANodeSnapDomainData, UFANodeSnapDomainData::StaticClass, TEXT("UFANodeSnapDomainData"), &Z_Registration_Info_UClass_UFANodeSnapDomainData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFANodeSnapDomainData), 3939976649U) },
		{ Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride, USnapFlowNodeCategorySelectionOverride::StaticClass, TEXT("USnapFlowNodeCategorySelectionOverride"), &Z_Registration_Info_UClass_USnapFlowNodeCategorySelectionOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapFlowNodeCategorySelectionOverride), 150516440U) },
		{ Z_Construct_UClass_USnapFlowAGTaskExtender, USnapFlowAGTaskExtender::StaticClass, TEXT("USnapFlowAGTaskExtender"), &Z_Registration_Info_UClass_USnapFlowAGTaskExtender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapFlowAGTaskExtender), 3755990976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_1290332578(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Snap_SnapFlowAbstractGraphSupport_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
