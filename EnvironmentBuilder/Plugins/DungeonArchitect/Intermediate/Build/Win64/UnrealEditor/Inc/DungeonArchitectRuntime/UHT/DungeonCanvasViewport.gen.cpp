// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasViewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasViewport() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonCanvasViewportTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform;
class UScriptStruct* FDungeonCanvasViewportTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasViewportTransform"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasViewportTransform>()
{
	return FDungeonCanvasViewportTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalToWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalToCanvas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToCanvas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasToWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFocusInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasViewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToCanvas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToCanvas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasToWorld;
	static void NewProp_bFocusInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasViewportTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasViewportTransform, LocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalToWorld_MetaData), NewProp_LocalToWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_LocalToCanvas = { "LocalToCanvas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasViewportTransform, LocalToCanvas), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalToCanvas_MetaData), NewProp_LocalToCanvas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_WorldToCanvas = { "WorldToCanvas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasViewportTransform, WorldToCanvas), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToCanvas_MetaData), NewProp_WorldToCanvas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_CanvasToWorld = { "CanvasToWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasViewportTransform, CanvasToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasToWorld_MetaData), NewProp_CanvasToWorld_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_bFocusInitialized_SetBit(void* Obj)
{
	((FDungeonCanvasViewportTransform*)Obj)->bFocusInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_bFocusInitialized = { "bFocusInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasViewportTransform), &Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_bFocusInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFocusInitialized_MetaData), NewProp_bFocusInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_LocalToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_LocalToCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_WorldToCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_CanvasToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewProp_bFocusInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasViewportTransform",
	Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::PropPointers),
	sizeof(FDungeonCanvasViewportTransform),
	alignof(FDungeonCanvasViewportTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasViewportTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasViewport_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonCanvasViewportTransform::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform_Statics::NewStructOps, TEXT("DungeonCanvasViewportTransform"), &Z_Registration_Info_UScriptStruct_DungeonCanvasViewportTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasViewportTransform), 3106622410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasViewport_h_2534450207(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasViewport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasViewport_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
