// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Dungeon.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/DungeonThemeAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UProceduralMarkerEmitter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Delegate FDungeonBuildCompleteBindableEvent
struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics
{
	struct _Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms
	{
		ADungeon* Dungeon;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms), &Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DungeonBuildCompleteBindableEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDungeonBuildCompleteBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DungeonBuildCompleteBindableEvent, ADungeon* Dungeon, bool bSuccess)
{
	struct _Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms
	{
		ADungeon* Dungeon;
		bool bSuccess;
	};
	_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms Parms;
	Parms.Dungeon=Dungeon;
	Parms.bSuccess=bSuccess ? true : false;
	DungeonBuildCompleteBindableEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDungeonBuildCompleteBindableEvent

// Begin Class ADungeon Function BuildDungeon
struct Z_Construct_UFunction_ADungeon_BuildDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "BuildDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_BuildDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execBuildDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildDungeon();
	P_NATIVE_END;
}
// End Class ADungeon Function BuildDungeon

// Begin Class ADungeon Function DestroyDungeon
struct Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "DestroyDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_DestroyDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execDestroyDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyDungeon();
	P_NATIVE_END;
}
// End Class ADungeon Function DestroyDungeon

// Begin Class ADungeon Function GetQuery
struct Z_Construct_UFunction_ADungeon_GetQuery_Statics
{
	struct Dungeon_eventGetQuery_Parms
	{
		UDungeonQuery* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_GetQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventGetQuery_Parms, ReturnValue), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetQuery", nullptr, nullptr, Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Dungeon_eventGetQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_GetQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Dungeon_eventGetQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_GetQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execGetQuery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDungeonQuery**)Z_Param__Result=P_THIS->GetQuery();
	P_NATIVE_END;
}
// End Class ADungeon Function GetQuery

// Begin Class ADungeon Function RandomizeSeed
struct Z_Construct_UFunction_ADungeon_RandomizeSeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_RandomizeSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "RandomizeSeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_RandomizeSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_RandomizeSeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_RandomizeSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_RandomizeSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execRandomizeSeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RandomizeSeed();
	P_NATIVE_END;
}
// End Class ADungeon Function RandomizeSeed

// Begin Class ADungeon Function ResetDungeonId
struct Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Resets the dungeon id.  Do this if you have another copy of the dungeon somehow (e.g. streaming in the same level multiple times on the scene)\n     * NOTE: This will unlink all the existing dungeon spawned items and they will not clean up. Make sure the existing dungeon is destroyed first\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the dungeon id.  Do this if you have another copy of the dungeon somehow (e.g. streaming in the same level multiple times on the scene)\nNOTE: This will unlink all the existing dungeon spawned items and they will not clean up. Make sure the existing dungeon is destroyed first" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "ResetDungeonId", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeon_ResetDungeonId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execResetDungeonId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDungeonId();
	P_NATIVE_END;
}
// End Class ADungeon Function ResetDungeonId

// Begin Class ADungeon Function SetBuilderClass
struct Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics
{
	struct Dungeon_eventSetBuilderClass_Parms
	{
		TSubclassOf<UDungeonBuilder> InBuilderClass;
		UDungeonBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBuilderClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_InBuilderClass = { "InBuilderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventSetBuilderClass_Parms, InBuilderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dungeon_eventSetBuilderClass_Parms, ReturnValue), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_InBuilderClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetBuilderClass", nullptr, nullptr, Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Dungeon_eventSetBuilderClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Dungeon_eventSetBuilderClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeon_SetBuilderClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeon::execSetBuilderClass)
{
	P_GET_OBJECT(UClass,Z_Param_InBuilderClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDungeonBuilder**)Z_Param__Result=P_THIS->SetBuilderClass(Z_Param_InBuilderClass);
	P_NATIVE_END;
}
// End Class ADungeon Function SetBuilderClass

// Begin Class ADungeon
void ADungeon::StaticRegisterNativesADungeon()
{
	UClass* Class = ADungeon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildDungeon", &ADungeon::execBuildDungeon },
		{ "DestroyDungeon", &ADungeon::execDestroyDungeon },
		{ "GetQuery", &ADungeon::execGetQuery },
		{ "RandomizeSeed", &ADungeon::execRandomizeSeed },
		{ "ResetDungeonId", &ADungeon::execResetDungeonId },
		{ "SetBuilderClass", &ADungeon::execSetBuilderClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeon);
UClass* Z_Construct_UClass_ADungeon_NoRegister()
{
	return ADungeon::StaticClass();
}
struct Z_Construct_UClass_ADungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The main dungeon actor responsible for creating a dungeon.  \n* Drop this actor into your scene, assign a theme and click \"Build Dungeon\" button\n* to create your dungeon.  \n* From code, call ADungeon::BuildDungeon after adding an entry into the ADungeon::Themes array\n*/" },
#endif
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking HLOD Physics Networking" },
		{ "IncludePath", "Core/Dungeon.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main dungeon actor responsible for creating a dungeon.\nDrop this actor into your scene, assign a theme and click \"Build Dungeon\" button\nto create your dungeon.\nFrom code, call ADungeon::BuildDungeon after adding an entry into the ADungeon::Themes array" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Themes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderClass_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets you swap out the default dungeon builder with your own implementation */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets you swap out the default dungeon builder with your own implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_Inner_MetaData[] = {
		{ "Category", "Marker Emitters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets you emit your own markers into the scene using custom blueprints */" },
#endif
		{ "DisplayName", "Marker Emitter Blueprints" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets you emit your own markers into the scene using custom blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_MetaData[] = {
		{ "Category", "Marker Emitters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets you emit your own markers into the scene using custom blueprints */" },
#endif
		{ "DisplayName", "Marker Emitter Blueprints" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets you emit your own markers into the scene using custom blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMarkerEmitters_Inner_MetaData[] = {
		{ "Category", "Marker Emitters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMarkerEmitters_MetaData[] = {
		{ "Category", "Marker Emitters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventListeners_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventListeners_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemes_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomItemFolderName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomItemFolderName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditCondition", "bUseCustomItemFolderName" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonModel_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingModel_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildPriorityLocation_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the dungeon is built asynchronously over multiple frames, objects closer to this point are built first */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the dungeon is built asynchronously over multiple frames, objects closer to this point are built first" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDungeonBuildComplete_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Themes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Themes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuilderClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerEmitters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerEmitters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMarkerEmitters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralMarkerEmitters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventListeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventListeners;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterThemes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClusterThemes;
	static void NewProp_bDrawDebugData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugData;
	static void NewProp_bUseCustomItemFolderName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomItemFolderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomItemFolderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelStreamingConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreamingModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildPriorityLocation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDungeonBuildComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_BuildDungeon, "BuildDungeon" }, // 194468586
		{ &Z_Construct_UFunction_ADungeon_DestroyDungeon, "DestroyDungeon" }, // 77251184
		{ &Z_Construct_UFunction_ADungeon_GetQuery, "GetQuery" }, // 1858221657
		{ &Z_Construct_UFunction_ADungeon_RandomizeSeed, "RandomizeSeed" }, // 2471316313
		{ &Z_Construct_UFunction_ADungeon_ResetDungeonId, "ResetDungeonId" }, // 2543175604
		{ &Z_Construct_UFunction_ADungeon_SetBuilderClass, "SetBuilderClass" }, // 1781011449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, Uid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uid_MetaData), NewProp_Uid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_Inner = { "Themes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Themes = { "Themes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, Themes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Themes_MetaData), NewProp_Themes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass = { "BuilderClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, BuilderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderClass_MetaData), NewProp_BuilderClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner = { "MarkerEmitters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerEmitters_Inner_MetaData), NewProp_MarkerEmitters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters = { "MarkerEmitters", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, MarkerEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerEmitters_MetaData), NewProp_MarkerEmitters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ProceduralMarkerEmitters_Inner = { "ProceduralMarkerEmitters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMarkerEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMarkerEmitters_Inner_MetaData), NewProp_ProceduralMarkerEmitters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ProceduralMarkerEmitters = { "ProceduralMarkerEmitters", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, ProceduralMarkerEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMarkerEmitters_MetaData), NewProp_ProceduralMarkerEmitters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner = { "EventListeners", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonEventListener_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventListeners_Inner_MetaData), NewProp_EventListeners_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners = { "EventListeners", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, EventListeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventListeners_MetaData), NewProp_EventListeners_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_Inner = { "ClusterThemes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClusterThemeInfo, METADATA_PARAMS(0, nullptr) }; // 3790853695
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes = { "ClusterThemes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, ClusterThemes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterThemes_MetaData), NewProp_ClusterThemes_MetaData) }; // 3790853695
void Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_SetBit(void* Obj)
{
	((ADungeon*)Obj)->bDrawDebugData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData = { "bDrawDebugData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeon), &Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugData_MetaData), NewProp_bDrawDebugData_MetaData) };
void Z_Construct_UClass_ADungeon_Statics::NewProp_bUseCustomItemFolderName_SetBit(void* Obj)
{
	((ADungeon*)Obj)->bUseCustomItemFolderName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_bUseCustomItemFolderName = { "bUseCustomItemFolderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeon), &Z_Construct_UClass_ADungeon_Statics::NewProp_bUseCustomItemFolderName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomItemFolderName_MetaData), NewProp_bUseCustomItemFolderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_CustomItemFolderName = { "CustomItemFolderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, CustomItemFolderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomItemFolderName_MetaData), NewProp_CustomItemFolderName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Builder_MetaData), NewProp_Builder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, Config), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel = { "DungeonModel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, DungeonModel), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonModel_MetaData), NewProp_DungeonModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData = { "ToolData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, ToolData), Z_Construct_UClass_UDungeonToolData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolData_MetaData), NewProp_ToolData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, Query), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig = { "LevelStreamingConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, LevelStreamingConfig), Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingConfig_MetaData), NewProp_LevelStreamingConfig_MetaData) }; // 1069412412
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel = { "LevelStreamingModel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, LevelStreamingModel), Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingModel_MetaData), NewProp_LevelStreamingModel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation = { "BuildPriorityLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, BuildPriorityLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildPriorityLocation_MetaData), NewProp_BuildPriorityLocation_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete = { "OnDungeonBuildComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeon, OnDungeonBuildComplete), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDungeonBuildComplete_MetaData), NewProp_OnDungeonBuildComplete_MetaData) }; // 2422115160
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Uid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Themes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ProceduralMarkerEmitters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ProceduralMarkerEmitters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_bUseCustomItemFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_CustomItemFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Statics::ClassParams = {
	&ADungeon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeon()
{
	if (!Z_Registration_Info_UClass_ADungeon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeon.OuterSingleton, Z_Construct_UClass_ADungeon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeon.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeon>()
{
	return ADungeon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeon);
ADungeon::~ADungeon() {}
// End Class ADungeon

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 1563830542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_1323417476(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
