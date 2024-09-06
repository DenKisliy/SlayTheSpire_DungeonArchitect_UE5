// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasBlueprintFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasActorFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasActorFactory_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFactory();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFactory_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonCanvas_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprint_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBlueprint();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonCanvasBlueprintFactory
void UDungeonCanvasBlueprintFactory::StaticRegisterNativesUDungeonCanvasBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasBlueprintFactory);
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFactory_NoRegister()
{
	return UDungeonCanvasBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The parent class of the created blueprint. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parent class of the created blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasBlueprintTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CanvasBlueprintTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADungeonCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::NewProp_CanvasBlueprintTemplate = { "CanvasBlueprintTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprintFactory, CanvasBlueprintTemplate), Z_Construct_UClass_UDungeonCanvasBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasBlueprintTemplate_MetaData), NewProp_CanvasBlueprintTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::NewProp_CanvasBlueprintTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::ClassParams = {
	&UDungeonCanvasBlueprintFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasBlueprintFactory.OuterSingleton, Z_Construct_UClass_UDungeonCanvasBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasBlueprintFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonCanvasBlueprintFactory>()
{
	return UDungeonCanvasBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasBlueprintFactory);
UDungeonCanvasBlueprintFactory::~UDungeonCanvasBlueprintFactory() {}
// End Class UDungeonCanvasBlueprintFactory

// Begin Class UDungeonCanvasActorFactory
void UDungeonCanvasActorFactory::StaticRegisterNativesUDungeonCanvasActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasActorFactory);
UClass* Z_Construct_UClass_UDungeonCanvasActorFactory_NoRegister()
{
	return UDungeonCanvasActorFactory::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactoryBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::ClassParams = {
	&UDungeonCanvasActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasActorFactory()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasActorFactory.OuterSingleton, Z_Construct_UClass_UDungeonCanvasActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasActorFactory.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonCanvasActorFactory>()
{
	return UDungeonCanvasActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasActorFactory);
UDungeonCanvasActorFactory::~UDungeonCanvasActorFactory() {}
// End Class UDungeonCanvasActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasBlueprintFactory, UDungeonCanvasBlueprintFactory::StaticClass, TEXT("UDungeonCanvasBlueprintFactory"), &Z_Registration_Info_UClass_UDungeonCanvasBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasBlueprintFactory), 1572790075U) },
		{ Z_Construct_UClass_UDungeonCanvasActorFactory, UDungeonCanvasActorFactory::StaticClass, TEXT("UDungeonCanvasActorFactory"), &Z_Registration_Info_UClass_UDungeonCanvasActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasActorFactory), 3004471358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintFactory_h_1353297926(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
