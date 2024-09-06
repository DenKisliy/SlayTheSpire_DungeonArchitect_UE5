// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonEventListener.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEventListener() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonEventListener Function OnDungeonDestroyed
struct DungeonEventListener_eventOnDungeonDestroyed_Parms
{
	ADungeon* Dungeon;
};
static FName NAME_UDungeonEventListener_OnDungeonDestroyed = FName(TEXT("OnDungeonDestroyed"));
void UDungeonEventListener::OnDungeonDestroyed(ADungeon* Dungeon)
{
	DungeonEventListener_eventOnDungeonDestroyed_Parms Parms;
	Parms.Dungeon=Dungeon;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnDungeonDestroyed),&Parms);
}
struct Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after the dungeon has been destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after the dungeon has been destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnDungeonDestroyed_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnDungeonDestroyed", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers), sizeof(DungeonEventListener_eventOnDungeonDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnDungeonDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnDungeonDestroyed)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDungeonDestroyed_Implementation(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnDungeonDestroyed

// Begin Class UDungeonEventListener Function OnDungeonLayoutBuilt
struct DungeonEventListener_eventOnDungeonLayoutBuilt_Parms
{
	ADungeon* Dungeon;
};
static FName NAME_UDungeonEventListener_OnDungeonLayoutBuilt = FName(TEXT("OnDungeonLayoutBuilt"));
void UDungeonEventListener::OnDungeonLayoutBuilt(ADungeon* Dungeon)
{
	DungeonEventListener_eventOnDungeonLayoutBuilt_Parms Parms;
	Parms.Dungeon=Dungeon;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnDungeonLayoutBuilt),&Parms);
}
struct Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after the layout is generated in memory */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after the layout is generated in memory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnDungeonLayoutBuilt_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnDungeonLayoutBuilt", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers), sizeof(DungeonEventListener_eventOnDungeonLayoutBuilt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnDungeonLayoutBuilt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnDungeonLayoutBuilt)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDungeonLayoutBuilt_Implementation(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnDungeonLayoutBuilt

// Begin Class UDungeonEventListener Function OnMarkersEmitted
struct DungeonEventListener_eventOnMarkersEmitted_Parms
{
	ADungeon* Dungeon;
	TArray<FDungeonMarkerInfo> MarkerList;
	TArray<FDungeonMarkerInfo> MarkerListRef;
};
static FName NAME_UDungeonEventListener_OnMarkersEmitted = FName(TEXT("OnMarkersEmitted"));
void UDungeonEventListener::OnMarkersEmitted(ADungeon* Dungeon, TArray<FDungeonMarkerInfo>& MarkerList, TArray<FDungeonMarkerInfo>& MarkerListRef)
{
	DungeonEventListener_eventOnMarkersEmitted_Parms Parms;
	Parms.Dungeon=Dungeon;
	Parms.MarkerList=MarkerList;
	Parms.MarkerListRef=MarkerListRef;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnMarkersEmitted),&Parms);
	MarkerList=Parms.MarkerList;
	MarkerListRef=Parms.MarkerListRef;
}
struct Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after all the markers are emitted into the scene */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after all the markers are emitted into the scene" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerListRef_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerListRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList_Inner = { "MarkerList", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonMarkerInfo, METADATA_PARAMS(0, nullptr) }; // 1688166034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList = { "MarkerList", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, MarkerList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1688166034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef_Inner = { "MarkerListRef", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonMarkerInfo, METADATA_PARAMS(0, nullptr) }; // 1688166034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef = { "MarkerListRef", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, MarkerListRef), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1688166034
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnMarkersEmitted", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers), sizeof(DungeonEventListener_eventOnMarkersEmitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnMarkersEmitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnMarkersEmitted)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_TARRAY_REF(FDungeonMarkerInfo,Z_Param_Out_MarkerList);
	P_GET_TARRAY_REF(FDungeonMarkerInfo,Z_Param_Out_MarkerListRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMarkersEmitted_Implementation(Z_Param_Dungeon,Z_Param_Out_MarkerList,Z_Param_Out_MarkerListRef);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnMarkersEmitted

// Begin Class UDungeonEventListener Function OnPostDungeonBuild
struct DungeonEventListener_eventOnPostDungeonBuild_Parms
{
	ADungeon* Dungeon;
};
static FName NAME_UDungeonEventListener_OnPostDungeonBuild = FName(TEXT("OnPostDungeonBuild"));
void UDungeonEventListener::OnPostDungeonBuild(ADungeon* Dungeon)
{
	DungeonEventListener_eventOnPostDungeonBuild_Parms Parms;
	Parms.Dungeon=Dungeon;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPostDungeonBuild),&Parms);
}
struct Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called after the dungeon is completely built */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after the dungeon is completely built" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPostDungeonBuild_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPostDungeonBuild", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers), sizeof(DungeonEventListener_eventOnPostDungeonBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnPostDungeonBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnPostDungeonBuild)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostDungeonBuild_Implementation(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnPostDungeonBuild

// Begin Class UDungeonEventListener Function OnPreDungeonBuild
struct DungeonEventListener_eventOnPreDungeonBuild_Parms
{
	ADungeon* Dungeon;
};
static FName NAME_UDungeonEventListener_OnPreDungeonBuild = FName(TEXT("OnPreDungeonBuild"));
void UDungeonEventListener::OnPreDungeonBuild(ADungeon* Dungeon)
{
	DungeonEventListener_eventOnPreDungeonBuild_Parms Parms;
	Parms.Dungeon=Dungeon;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPreDungeonBuild),&Parms);
}
struct Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called before the dungeon is built */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before the dungeon is built" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPreDungeonBuild_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPreDungeonBuild", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers), sizeof(DungeonEventListener_eventOnPreDungeonBuild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnPreDungeonBuild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnPreDungeonBuild)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreDungeonBuild_Implementation(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnPreDungeonBuild

// Begin Class UDungeonEventListener Function OnPreDungeonDestroy
struct DungeonEventListener_eventOnPreDungeonDestroy_Parms
{
	ADungeon* Dungeon;
};
static FName NAME_UDungeonEventListener_OnPreDungeonDestroy = FName(TEXT("OnPreDungeonDestroy"));
void UDungeonEventListener::OnPreDungeonDestroy(ADungeon* Dungeon)
{
	DungeonEventListener_eventOnPreDungeonDestroy_Parms Parms;
	Parms.Dungeon=Dungeon;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPreDungeonDestroy),&Parms);
}
struct Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called before the dungeon is about to be destroyed */" },
#endif
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before the dungeon is about to be destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPreDungeonDestroy_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPreDungeonDestroy", nullptr, nullptr, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers), sizeof(DungeonEventListener_eventOnPreDungeonDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonEventListener_eventOnPreDungeonDestroy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonEventListener::execOnPreDungeonDestroy)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreDungeonDestroy_Implementation(Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class UDungeonEventListener Function OnPreDungeonDestroy

// Begin Class UDungeonEventListener
void UDungeonEventListener::StaticRegisterNativesUDungeonEventListener()
{
	UClass* Class = UDungeonEventListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDungeonDestroyed", &UDungeonEventListener::execOnDungeonDestroyed },
		{ "OnDungeonLayoutBuilt", &UDungeonEventListener::execOnDungeonLayoutBuilt },
		{ "OnMarkersEmitted", &UDungeonEventListener::execOnMarkersEmitted },
		{ "OnPostDungeonBuild", &UDungeonEventListener::execOnPostDungeonBuild },
		{ "OnPreDungeonBuild", &UDungeonEventListener::execOnPreDungeonBuild },
		{ "OnPreDungeonDestroy", &UDungeonEventListener::execOnPreDungeonDestroy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEventListener);
UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister()
{
	return UDungeonEventListener::StaticClass();
}
struct Z_Construct_UClass_UDungeonEventListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Implement this class in blueprint (or C++) to emit your own custom markers in the scene\n*/" },
#endif
		{ "IncludePath", "Core/DungeonEventListener.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement this class in blueprint (or C++) to emit your own custom markers in the scene" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed, "OnDungeonDestroyed" }, // 628871268
		{ &Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt, "OnDungeonLayoutBuilt" }, // 3754028751
		{ &Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted, "OnMarkersEmitted" }, // 783751571
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild, "OnPostDungeonBuild" }, // 1865348114
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild, "OnPreDungeonBuild" }, // 195116637
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy, "OnPreDungeonDestroy" }, // 3860337092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEventListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonEventListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEventListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEventListener_Statics::ClassParams = {
	&UDungeonEventListener::StaticClass,
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
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEventListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonEventListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonEventListener()
{
	if (!Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton, Z_Construct_UClass_UDungeonEventListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonEventListener>()
{
	return UDungeonEventListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEventListener);
UDungeonEventListener::~UDungeonEventListener() {}
// End Class UDungeonEventListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEventListener, UDungeonEventListener::StaticClass, TEXT("UDungeonEventListener"), &Z_Registration_Info_UClass_UDungeonEventListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEventListener), 2384235765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_2400326627(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
