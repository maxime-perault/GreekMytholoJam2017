// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SubstanceImportOptionsUi.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImportOptionsUi() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceImportOptionsUi::StaticRegisterNativesUSubstanceImportOptionsUi()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister()
	{
		return USubstanceImportOptionsUi::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "General Materials" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubstanceImportOptionsUi.h" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDestinationPath_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Force the Texture Objects objects' path" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialDestinationPath = { UE4CodeGen_Private::EPropertyClass::Str, "MaterialDestinationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialDestinationPath), METADATA_PARAMS(NewProp_MaterialDestinationPath_MetaData, ARRAY_COUNT(NewProp_MaterialDestinationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceDestinationPath_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Force the Graph Instance objects' path" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceDestinationPath = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceDestinationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceDestinationPath), METADATA_PARAMS(NewProp_InstanceDestinationPath_MetaData, ARRAY_COUNT(NewProp_InstanceDestinationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Instance suggested name (based on filename)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "MaterialName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialName), METADATA_PARAMS(NewProp_MaterialName_MetaData, ARRAY_COUNT(NewProp_MaterialName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Instance suggested name (based on filename)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceName), METADATA_PARAMS(NewProp_InstanceName_MetaData, ARRAY_COUNT(NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[] = {
				{ "Category", "Materials" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Whether to automatically create Unreal materials for instances" },
			};
#endif
			auto NewProp_bCreateMaterial_SetBit = [](void* Obj){ ((USubstanceImportOptionsUi*)Obj)->bCreateMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImportOptionsUi), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreateMaterial_MetaData, ARRAY_COUNT(NewProp_bCreateMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Whether to automatically create graph instances for every graph description present in package" },
			};
#endif
			auto NewProp_bCreateInstance_SetBit = [](void* Obj){ ((USubstanceImportOptionsUi*)Obj)->bCreateInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImportOptionsUi), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreateInstance_MetaData, ARRAY_COUNT(NewProp_bCreateInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialPath_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Whether or not to override material path" },
			};
#endif
			auto NewProp_bOverrideMaterialPath_SetBit = [](void* Obj){ ((USubstanceImportOptionsUi*)Obj)->bOverrideMaterialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaterialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImportOptionsUi), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMaterialPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMaterialPath_MetaData, ARRAY_COUNT(NewProp_bOverrideMaterialPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstancePath_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Whether or not to override instance path" },
			};
#endif
			auto NewProp_bOverrideInstancePath_SetBit = [](void* Obj){ ((USubstanceImportOptionsUi*)Obj)->bOverrideInstancePath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstancePath = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideInstancePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImportOptionsUi), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideInstancePath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideInstancePath_MetaData, ARRAY_COUNT(NewProp_bOverrideInstancePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
				{ "ToolTip", "Use the string in \"Name\" field as base name of factory instance and textures" },
			};
#endif
			auto NewProp_bOverrideFullName_SetBit = [](void* Obj){ ((USubstanceImportOptionsUi*)Obj)->bOverrideFullName = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideFullName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImportOptionsUi), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideFullName_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideFullName_MetaData, ARRAY_COUNT(NewProp_bOverrideFullName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialDestinationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceDestinationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMaterialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideInstancePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideFullName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceImportOptionsUi>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceImportOptionsUi::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"EditorUserSettings",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImportOptionsUi, 136835633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImportOptionsUi(Z_Construct_UClass_USubstanceImportOptionsUi, &USubstanceImportOptionsUi::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImportOptionsUi"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImportOptionsUi);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
