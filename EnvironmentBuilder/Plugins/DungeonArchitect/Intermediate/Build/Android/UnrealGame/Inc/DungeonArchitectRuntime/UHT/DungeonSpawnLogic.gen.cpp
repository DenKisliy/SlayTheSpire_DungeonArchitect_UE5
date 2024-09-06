// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Rules/Spawn/DungeonSpawnLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonSpawnLogic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonSpawnLogic Function OnItemSpawn
struct DungeonSpawnLogic_eventOnItemSpawn_Parms
{
	AActor* Actor;
	ADungeon* Dungeon;
	FRandomStream RandomStream;
};
static FName NAME_UDungeonSpawnLogic_OnItemSpawn = FName(TEXT("OnItemSpawn"));
void UDungeonSpawnLogic::OnItemSpawn(AActor* Actor, ADungeon* Dungeon, FRandomStream const& RandomStream)
{
	DungeonSpawnLogic_eventOnItemSpawn_Parms Parms;
	Parms.Actor=Actor;
	Parms.Dungeon=Dungeon;
	Parms.RandomStream=RandomStream;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonSpawnLogic_OnItemSpawn),&Parms);
}
struct Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called by the theming engine when a dungeon item is spawned into the scene */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Rules/Spawn/DungeonSpawnLogic.h" },
		{ "ToolTip", "Called by the theming engine when a dungeon item is spawned into the scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonSpawnLogic_eventOnItemSpawn_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonSpawnLogic_eventOnItemSpawn_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonSpawnLogic_eventOnItemSpawn_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_RandomStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonSpawnLogic, nullptr, "OnItemSpawn", nullptr, nullptr, Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers), sizeof(DungeonSpawnLogic_eventOnItemSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonSpawnLogic_eventOnItemSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonSpawnLogic::execOnItemSpawn)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSpawn_Implementation(Z_Param_Actor,Z_Param_Dungeon,Z_Param_Out_RandomStream);
	P_NATIVE_END;
}
// End Class UDungeonSpawnLogic Function OnItemSpawn

// Begin Class UDungeonSpawnLogic
void UDungeonSpawnLogic::StaticRegisterNativesUDungeonSpawnLogic()
{
	UClass* Class = UDungeonSpawnLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemSpawn", &UDungeonSpawnLogic::execOnItemSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonSpawnLogic);
UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister()
{
	return UDungeonSpawnLogic::StaticClass();
}
struct Z_Construct_UClass_UDungeonSpawnLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Frameworks/ThemeEngine/Rules/Spawn/DungeonSpawnLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Rules/Spawn/DungeonSpawnLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn, "OnItemSpawn" }, // 2602338186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSpawnLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonSpawnLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpawnLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSpawnLogic_Statics::ClassParams = {
	&UDungeonSpawnLogic::StaticClass,
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
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpawnLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSpawnLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonSpawnLogic()
{
	if (!Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton, Z_Construct_UClass_UDungeonSpawnLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonSpawnLogic>()
{
	return UDungeonSpawnLogic::StaticClass();
}
UDungeonSpawnLogic::UDungeonSpawnLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSpawnLogic);
UDungeonSpawnLogic::~UDungeonSpawnLogic() {}
// End Class UDungeonSpawnLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_Spawn_DungeonSpawnLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonSpawnLogic, UDungeonSpawnLogic::StaticClass, TEXT("UDungeonSpawnLogic"), &Z_Registration_Info_UClass_UDungeonSpawnLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSpawnLogic), 1310155110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_Spawn_DungeonSpawnLogic_h_1445113369(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_Spawn_DungeonSpawnLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_Spawn_DungeonSpawnLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
