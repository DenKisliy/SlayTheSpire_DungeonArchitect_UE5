// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/GraphGrammar/GraphGrammar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphGrammar() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScript_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarNodeType();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarNodeType_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarRuleScript_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammar();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammar_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammarProduction();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammarProduction_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGraphGrammarProduction
void UGraphGrammarProduction::StaticRegisterNativesUGraphGrammarProduction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphGrammarProduction);
UClass* Z_Construct_UClass_UGraphGrammarProduction_NoRegister()
{
	return UGraphGrammarProduction::StaticClass();
}
struct Z_Construct_UClass_UGraphGrammarProduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/GraphGrammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_RuleName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphGrammarProduction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammarProduction, RuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleName_MetaData), NewProp_RuleName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_SourceGraph = { "SourceGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammarProduction, SourceGraph), Z_Construct_UClass_UGrammarRuleScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceGraph_MetaData), NewProp_SourceGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_DestGraphs_Inner = { "DestGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrammarRuleScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_DestGraphs = { "DestGraphs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammarProduction, DestGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestGraphs_MetaData), NewProp_DestGraphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphGrammarProduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_RuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_SourceGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_DestGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammarProduction_Statics::NewProp_DestGraphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammarProduction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphGrammarProduction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammarProduction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphGrammarProduction_Statics::ClassParams = {
	&UGraphGrammarProduction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGraphGrammarProduction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammarProduction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammarProduction_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphGrammarProduction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphGrammarProduction()
{
	if (!Z_Registration_Info_UClass_UGraphGrammarProduction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphGrammarProduction.OuterSingleton, Z_Construct_UClass_UGraphGrammarProduction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphGrammarProduction.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGraphGrammarProduction>()
{
	return UGraphGrammarProduction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphGrammarProduction);
UGraphGrammarProduction::~UGraphGrammarProduction() {}
// End Class UGraphGrammarProduction

// Begin Class UGrammarNodeType
void UGrammarNodeType::StaticRegisterNativesUGrammarNodeType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarNodeType);
UClass* Z_Construct_UClass_UGrammarNodeType_NoRegister()
{
	return UGrammarNodeType::StaticClass();
}
struct Z_Construct_UClass_UGrammarNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/GraphGrammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Category", "NodeType" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "NodeType" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNonTerminal_MetaData[] = {
		{ "Category", "NodeType" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWildcard_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "NodeType" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bNonTerminal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNonTerminal;
	static void NewProp_bWildcard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWildcard;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarNodeType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarNodeType, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarNodeType, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bNonTerminal_SetBit(void* Obj)
{
	((UGrammarNodeType*)Obj)->bNonTerminal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bNonTerminal = { "bNonTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrammarNodeType), &Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bNonTerminal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNonTerminal_MetaData), NewProp_bNonTerminal_MetaData) };
void Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bWildcard_SetBit(void* Obj)
{
	((UGrammarNodeType*)Obj)->bWildcard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bWildcard = { "bWildcard", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrammarNodeType), &Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bWildcard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWildcard_MetaData), NewProp_bWildcard_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrammarNodeType, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarNodeType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bNonTerminal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_bWildcard,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarNodeType_Statics::NewProp_NodeColor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarNodeType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrammarNodeType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarNodeType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarNodeType_Statics::ClassParams = {
	&UGrammarNodeType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrammarNodeType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarNodeType_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarNodeType_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrammarNodeType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrammarNodeType()
{
	if (!Z_Registration_Info_UClass_UGrammarNodeType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarNodeType.OuterSingleton, Z_Construct_UClass_UGrammarNodeType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrammarNodeType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarNodeType>()
{
	return UGrammarNodeType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarNodeType);
UGrammarNodeType::~UGrammarNodeType() {}
// End Class UGrammarNodeType

// Begin Class UGraphGrammar
void UGraphGrammar::StaticRegisterNativesUGraphGrammar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphGrammar);
UClass* Z_Construct_UClass_UGraphGrammar_NoRegister()
{
	return UGraphGrammar::StaticClass();
}
struct Z_Construct_UClass_UGraphGrammar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/GraphGrammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionRules_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionGraphScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WildcardType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/GraphGrammar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProductionRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductionRules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionGraphScript;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WildcardType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphGrammar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ProductionRules_Inner = { "ProductionRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGraphGrammarProduction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ProductionRules = { "ProductionRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammar, ProductionRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionRules_MetaData), NewProp_ProductionRules_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ExecutionGraphScript = { "ExecutionGraphScript", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammar, ExecutionGraphScript), Z_Construct_UClass_UGrammarExecutionScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionGraphScript_MetaData), NewProp_ExecutionGraphScript_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_NodeTypes_Inner = { "NodeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGrammarNodeType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_NodeTypes = { "NodeTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammar, NodeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTypes_MetaData), NewProp_NodeTypes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphGrammar_Statics::NewProp_WildcardType = { "WildcardType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphGrammar, WildcardType), Z_Construct_UClass_UGrammarNodeType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WildcardType_MetaData), NewProp_WildcardType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphGrammar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ProductionRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ProductionRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_ExecutionGraphScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_NodeTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_NodeTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphGrammar_Statics::NewProp_WildcardType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphGrammar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphGrammar_Statics::ClassParams = {
	&UGraphGrammar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGraphGrammar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammar_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphGrammar_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphGrammar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphGrammar()
{
	if (!Z_Registration_Info_UClass_UGraphGrammar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphGrammar.OuterSingleton, Z_Construct_UClass_UGraphGrammar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphGrammar.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGraphGrammar>()
{
	return UGraphGrammar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphGrammar);
UGraphGrammar::~UGraphGrammar() {}
// End Class UGraphGrammar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_GraphGrammar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphGrammarProduction, UGraphGrammarProduction::StaticClass, TEXT("UGraphGrammarProduction"), &Z_Registration_Info_UClass_UGraphGrammarProduction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphGrammarProduction), 1037419190U) },
		{ Z_Construct_UClass_UGrammarNodeType, UGrammarNodeType::StaticClass, TEXT("UGrammarNodeType"), &Z_Registration_Info_UClass_UGrammarNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarNodeType), 3704710296U) },
		{ Z_Construct_UClass_UGraphGrammar, UGraphGrammar::StaticClass, TEXT("UGraphGrammar"), &Z_Registration_Info_UClass_UGraphGrammar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphGrammar), 399926708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_GraphGrammar_h_2700483673(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_GraphGrammar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_GraphGrammar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
