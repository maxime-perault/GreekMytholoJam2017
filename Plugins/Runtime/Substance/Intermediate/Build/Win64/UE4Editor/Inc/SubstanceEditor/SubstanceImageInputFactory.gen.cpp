// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceImageInputFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInputFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceImageInputFactory::StaticRegisterNativesUSubstanceImageInputFactory()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInputFactory_NoRegister()
	{
		return USubstanceImageInputFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceImageInputFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubstanceImageInputFactory.h" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateDefaultInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
				{ "ToolTip", "If enabled, a default instance will automatically be created for the texture" },
			};
#endif
			auto NewProp_bCreateDefaultInstance_SetBit = [](void* Obj){ ((USubstanceImageInputFactory*)Obj)->bCreateDefaultInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateDefaultInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateDefaultInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImageInputFactory), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateDefaultInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreateDefaultInstance_MetaData, ARRAY_COUNT(NewProp_bCreateDefaultInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
				{ "ToolTip", "If enabled, a material will automatically be created for the texture" },
			};
#endif
			auto NewProp_bCreateMaterial_SetBit = [](void* Obj){ ((USubstanceImageInputFactory*)Obj)->bCreateMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USubstanceImageInputFactory), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreateMaterial_MetaData, ARRAY_COUNT(NewProp_bCreateMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateDefaultInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateMaterial,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceImageInputFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceImageInputFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImageInputFactory, 2799151371);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInputFactory(Z_Construct_UClass_USubstanceImageInputFactory, &USubstanceImageInputFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImageInputFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInputFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
