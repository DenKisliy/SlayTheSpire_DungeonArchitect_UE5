// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEdTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdTool();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdTool_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdToolBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdToolBase_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdToolBuilder();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdToolBuilder_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonFlowNodeEdTool();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonFlowNodeEdTool_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonGridPaintEdTool();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonGridPaintEdTool_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonSnapConnectionEdTool();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonSnapConnectionEdTool_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonSnapStitchEdTool();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonSnapStitchEdTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonEdTool
void UDungeonEdTool::StaticRegisterNativesUDungeonEdTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEdTool);
UClass* Z_Construct_UClass_UDungeonEdTool_NoRegister()
{
	return UDungeonEdTool::StaticClass();
}
struct Z_Construct_UClass_UDungeonEdTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEdTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonEdTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEdTool_Statics::ClassParams = {
	&UDungeonEdTool::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonEdTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonEdTool()
{
	if (!Z_Registration_Info_UClass_UDungeonEdTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEdTool.OuterSingleton, Z_Construct_UClass_UDungeonEdTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonEdTool.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonEdTool>()
{
	return UDungeonEdTool::StaticClass();
}
UDungeonEdTool::UDungeonEdTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEdTool);
UDungeonEdTool::~UDungeonEdTool() {}
// End Class UDungeonEdTool

// Begin Class UDungeonEdToolBuilder
void UDungeonEdToolBuilder::StaticRegisterNativesUDungeonEdToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEdToolBuilder);
UClass* Z_Construct_UClass_UDungeonEdToolBuilder_NoRegister()
{
	return UDungeonEdToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UDungeonEdToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ToolClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEdToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDungeonEdToolBuilder_Statics::NewProp_ToolClass = { "ToolClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonEdToolBuilder, ToolClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDungeonEdToolBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolClass_MetaData), NewProp_ToolClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonEdToolBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEdToolBuilder_Statics::NewProp_ToolClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonEdToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEdToolBuilder_Statics::ClassParams = {
	&UDungeonEdToolBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonEdToolBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBuilder_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonEdToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonEdToolBuilder()
{
	if (!Z_Registration_Info_UClass_UDungeonEdToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEdToolBuilder.OuterSingleton, Z_Construct_UClass_UDungeonEdToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonEdToolBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonEdToolBuilder>()
{
	return UDungeonEdToolBuilder::StaticClass();
}
UDungeonEdToolBuilder::UDungeonEdToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEdToolBuilder);
UDungeonEdToolBuilder::~UDungeonEdToolBuilder() {}
// End Class UDungeonEdToolBuilder

// Begin Class UDungeonEdToolBase
void UDungeonEdToolBase::StaticRegisterNativesUDungeonEdToolBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEdToolBase);
UClass* Z_Construct_UClass_UDungeonEdToolBase_NoRegister()
{
	return UDungeonEdToolBase::StaticClass();
}
struct Z_Construct_UClass_UDungeonEdToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Gizmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEdToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonEdToolBase_Statics::NewProp_Gizmo = { "Gizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonEdToolBase, Gizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gizmo_MetaData), NewProp_Gizmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonEdToolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEdToolBase_Statics::NewProp_Gizmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonEdToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDungeonEdToolBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister, (int32)VTABLE_OFFSET(UDungeonEdToolBase, IInteractiveToolCameraFocusAPI), false },  // 2792920601
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEdToolBase_Statics::ClassParams = {
	&UDungeonEdToolBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonEdToolBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonEdToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonEdToolBase()
{
	if (!Z_Registration_Info_UClass_UDungeonEdToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEdToolBase.OuterSingleton, Z_Construct_UClass_UDungeonEdToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonEdToolBase.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonEdToolBase>()
{
	return UDungeonEdToolBase::StaticClass();
}
UDungeonEdToolBase::UDungeonEdToolBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEdToolBase);
UDungeonEdToolBase::~UDungeonEdToolBase() {}
// End Class UDungeonEdToolBase

// Begin Class UDungeonGridPaintEdTool
void UDungeonGridPaintEdTool::StaticRegisterNativesUDungeonGridPaintEdTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonGridPaintEdTool);
UClass* Z_Construct_UClass_UDungeonGridPaintEdTool_NoRegister()
{
	return UDungeonGridPaintEdTool::StaticClass();
}
struct Z_Construct_UClass_UDungeonGridPaintEdTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonGridPaintEdTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::ClassParams = {
	&UDungeonGridPaintEdTool::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonGridPaintEdTool()
{
	if (!Z_Registration_Info_UClass_UDungeonGridPaintEdTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonGridPaintEdTool.OuterSingleton, Z_Construct_UClass_UDungeonGridPaintEdTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonGridPaintEdTool.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonGridPaintEdTool>()
{
	return UDungeonGridPaintEdTool::StaticClass();
}
UDungeonGridPaintEdTool::UDungeonGridPaintEdTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonGridPaintEdTool);
UDungeonGridPaintEdTool::~UDungeonGridPaintEdTool() {}
// End Class UDungeonGridPaintEdTool

// Begin Class UDungeonSnapStitchEdTool
void UDungeonSnapStitchEdTool::StaticRegisterNativesUDungeonSnapStitchEdTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonSnapStitchEdTool);
UClass* Z_Construct_UClass_UDungeonSnapStitchEdTool_NoRegister()
{
	return UDungeonSnapStitchEdTool::StaticClass();
}
struct Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSnapStitchEdTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::ClassParams = {
	&UDungeonSnapStitchEdTool::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonSnapStitchEdTool()
{
	if (!Z_Registration_Info_UClass_UDungeonSnapStitchEdTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSnapStitchEdTool.OuterSingleton, Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSnapStitchEdTool.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonSnapStitchEdTool>()
{
	return UDungeonSnapStitchEdTool::StaticClass();
}
UDungeonSnapStitchEdTool::UDungeonSnapStitchEdTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSnapStitchEdTool);
UDungeonSnapStitchEdTool::~UDungeonSnapStitchEdTool() {}
// End Class UDungeonSnapStitchEdTool

// Begin Class UDungeonSnapConnectionEdTool
void UDungeonSnapConnectionEdTool::StaticRegisterNativesUDungeonSnapConnectionEdTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonSnapConnectionEdTool);
UClass* Z_Construct_UClass_UDungeonSnapConnectionEdTool_NoRegister()
{
	return UDungeonSnapConnectionEdTool::StaticClass();
}
struct Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSnapConnectionEdTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::ClassParams = {
	&UDungeonSnapConnectionEdTool::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonSnapConnectionEdTool()
{
	if (!Z_Registration_Info_UClass_UDungeonSnapConnectionEdTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSnapConnectionEdTool.OuterSingleton, Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSnapConnectionEdTool.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonSnapConnectionEdTool>()
{
	return UDungeonSnapConnectionEdTool::StaticClass();
}
UDungeonSnapConnectionEdTool::UDungeonSnapConnectionEdTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSnapConnectionEdTool);
UDungeonSnapConnectionEdTool::~UDungeonSnapConnectionEdTool() {}
// End Class UDungeonSnapConnectionEdTool

// Begin Class UDungeonFlowNodeEdTool
void UDungeonFlowNodeEdTool::StaticRegisterNativesUDungeonFlowNodeEdTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonFlowNodeEdTool);
UClass* Z_Construct_UClass_UDungeonFlowNodeEdTool_NoRegister()
{
	return UDungeonFlowNodeEdTool::StaticClass();
}
struct Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
		{ "ModuleRelativePath", "Private/Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonFlowNodeEdTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::ClassParams = {
	&UDungeonFlowNodeEdTool::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonFlowNodeEdTool()
{
	if (!Z_Registration_Info_UClass_UDungeonFlowNodeEdTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonFlowNodeEdTool.OuterSingleton, Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonFlowNodeEdTool.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonFlowNodeEdTool>()
{
	return UDungeonFlowNodeEdTool::StaticClass();
}
UDungeonFlowNodeEdTool::UDungeonFlowNodeEdTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonFlowNodeEdTool);
UDungeonFlowNodeEdTool::~UDungeonFlowNodeEdTool() {}
// End Class UDungeonFlowNodeEdTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEdTool, UDungeonEdTool::StaticClass, TEXT("UDungeonEdTool"), &Z_Registration_Info_UClass_UDungeonEdTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEdTool), 1953650188U) },
		{ Z_Construct_UClass_UDungeonEdToolBuilder, UDungeonEdToolBuilder::StaticClass, TEXT("UDungeonEdToolBuilder"), &Z_Registration_Info_UClass_UDungeonEdToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEdToolBuilder), 1666271648U) },
		{ Z_Construct_UClass_UDungeonEdToolBase, UDungeonEdToolBase::StaticClass, TEXT("UDungeonEdToolBase"), &Z_Registration_Info_UClass_UDungeonEdToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEdToolBase), 1931309803U) },
		{ Z_Construct_UClass_UDungeonGridPaintEdTool, UDungeonGridPaintEdTool::StaticClass, TEXT("UDungeonGridPaintEdTool"), &Z_Registration_Info_UClass_UDungeonGridPaintEdTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonGridPaintEdTool), 677790119U) },
		{ Z_Construct_UClass_UDungeonSnapStitchEdTool, UDungeonSnapStitchEdTool::StaticClass, TEXT("UDungeonSnapStitchEdTool"), &Z_Registration_Info_UClass_UDungeonSnapStitchEdTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSnapStitchEdTool), 4117935669U) },
		{ Z_Construct_UClass_UDungeonSnapConnectionEdTool, UDungeonSnapConnectionEdTool::StaticClass, TEXT("UDungeonSnapConnectionEdTool"), &Z_Registration_Info_UClass_UDungeonSnapConnectionEdTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSnapConnectionEdTool), 1694405798U) },
		{ Z_Construct_UClass_UDungeonFlowNodeEdTool, UDungeonFlowNodeEdTool::StaticClass, TEXT("UDungeonFlowNodeEdTool"), &Z_Registration_Info_UClass_UDungeonFlowNodeEdTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonFlowNodeEdTool), 1180262181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_2508034898(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
