// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/ReimportSubstanceImageInputFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSubstanceImageInputFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void UReimportSubstanceImageInputFactory::StaticRegisterNativesUReimportSubstanceImageInputFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory_NoRegister()
	{
		return UReimportSubstanceImageInputFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USubstanceImageInputFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "ReimportSubstanceImageInputFactory.h" },
				{ "ModuleRelativePath", "Classes/ReimportSubstanceImageInputFactory.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportPaths_MetaData[] = {
				{ "ModuleRelativePath", "Classes/ReimportSubstanceImageInputFactory.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReimportPaths = { UE4CodeGen_Private::EPropertyClass::Array, "ReimportPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UReimportSubstanceImageInputFactory, ReimportPaths), METADATA_PARAMS(NewProp_ReimportPaths_MetaData, ARRAY_COUNT(NewProp_ReimportPaths_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportPaths_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReimportPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReimportPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReimportPaths_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReimportSubstanceImageInputFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReimportSubstanceImageInputFactory::StaticClass,
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
	IMPLEMENT_CLASS(UReimportSubstanceImageInputFactory, 3315136727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSubstanceImageInputFactory(Z_Construct_UClass_UReimportSubstanceImageInputFactory, &UReimportSubstanceImageInputFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("UReimportSubstanceImageInputFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceImageInputFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
