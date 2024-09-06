// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/SnapFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapFunctionLibrary() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonFunctionLibrary();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapDungeonFunctionLibrary Function BuildSnapThemedDungeon
struct Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics
{
	struct SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms
	{
		ADungeon* Dungeon;
		UWorld* World;
		AActor* ParentActor;
		FName ThemeId;
		FString ConnectionMarkerPrefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Builds the themed snap based dungeon.  This assumes that the dungeon is already built (so the layout is saved in the model) \n\x09 * @param Dungeon The dungeon actor\n\x09 * @param World The target world to build the dungeon on. Leave it blank to build on the main world. You may generate this in a new world using CreateDungeonPreviewScene\n\x09 * @param ParentActor The actor to attach the spawned dungeon actors to.   You can move/rotate this actor to rotate the entire dungeon.  Leave it blank to build it normally \n\x09 * @param ThemeId The theme you've provided in your module database.  E.g. you might register lower resolution modules under the theme id \"minimap\". Provide that here\n\x09 * @param ConnectionMarkerPrefix In prefix to added to the marker name while spawning the connections.   You might specify \"Minimap\" here and create equivalent markers in the connection theme editor (MinimapDoor, MinimapWall to correspond with Door and Wall)  \n\x09 * @return If the build was successful\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Builds the themed snap based dungeon.  This assumes that the dungeon is already built (so the layout is saved in the model)\n@param Dungeon The dungeon actor\n@param World The target world to build the dungeon on. Leave it blank to build on the main world. You may generate this in a new world using CreateDungeonPreviewScene\n@param ParentActor The actor to attach the spawned dungeon actors to.   You can move/rotate this actor to rotate the entire dungeon.  Leave it blank to build it normally\n@param ThemeId The theme you've provided in your module database.  E.g. you might register lower resolution modules under the theme id \"minimap\". Provide that here\n@param ConnectionMarkerPrefix In prefix to added to the marker name while spawning the connections.   You might specify \"Minimap\" here and create equivalent markers in the connection theme editor (MinimapDoor, MinimapWall to correspond with Door and Wall)\n@return If the build was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionMarkerPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThemeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionMarkerPrefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ThemeId = { "ThemeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms, ThemeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ConnectionMarkerPrefix = { "ConnectionMarkerPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms, ConnectionMarkerPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionMarkerPrefix_MetaData), NewProp_ConnectionMarkerPrefix_MetaData) };
void Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms), &Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ThemeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ConnectionMarkerPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapDungeonFunctionLibrary, nullptr, "BuildSnapThemedDungeon", nullptr, nullptr, Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::SnapDungeonFunctionLibrary_eventBuildSnapThemedDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapDungeonFunctionLibrary::execBuildSnapThemedDungeon)
{
	P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_OBJECT(AActor,Z_Param_ParentActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_ThemeId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionMarkerPrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USnapDungeonFunctionLibrary::BuildSnapThemedDungeon(Z_Param_Dungeon,Z_Param_World,Z_Param_ParentActor,Z_Param_ThemeId,Z_Param_ConnectionMarkerPrefix);
	P_NATIVE_END;
}
// End Class USnapDungeonFunctionLibrary Function BuildSnapThemedDungeon

// Begin Class USnapDungeonFunctionLibrary
void USnapDungeonFunctionLibrary::StaticRegisterNativesUSnapDungeonFunctionLibrary()
{
	UClass* Class = USnapDungeonFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildSnapThemedDungeon", &USnapDungeonFunctionLibrary::execBuildSnapThemedDungeon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapDungeonFunctionLibrary);
UClass* Z_Construct_UClass_USnapDungeonFunctionLibrary_NoRegister()
{
	return USnapDungeonFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/SnapFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapDungeonFunctionLibrary_BuildSnapThemedDungeon, "BuildSnapThemedDungeon" }, // 2421557109
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapDungeonFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::ClassParams = {
	&USnapDungeonFunctionLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapDungeonFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USnapDungeonFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapDungeonFunctionLibrary.OuterSingleton, Z_Construct_UClass_USnapDungeonFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapDungeonFunctionLibrary.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapDungeonFunctionLibrary>()
{
	return USnapDungeonFunctionLibrary::StaticClass();
}
USnapDungeonFunctionLibrary::USnapDungeonFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapDungeonFunctionLibrary);
USnapDungeonFunctionLibrary::~USnapDungeonFunctionLibrary() {}
// End Class USnapDungeonFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapDungeonFunctionLibrary, USnapDungeonFunctionLibrary::StaticClass, TEXT("USnapDungeonFunctionLibrary"), &Z_Registration_Info_UClass_USnapDungeonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapDungeonFunctionLibrary), 3199673222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapFunctionLibrary_h_3400407868(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
