// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/ReimportSubstanceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSubstanceFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void UReimportSubstanceFactory::StaticRegisterNativesUReimportSubstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister()
	{
		return UReimportSubstanceFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UReimportSubstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USubstanceFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "ReimportSubstanceFactory.h" },
				{ "ModuleRelativePath", "Classes/ReimportSubstanceFactory.h" },
				{ "ToolTip", "NOTE:: Function definitions located in SubstanceFactory.cpp" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReimportSubstanceFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReimportSubstanceFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSubstanceFactory, 681104043);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSubstanceFactory(Z_Construct_UClass_UReimportSubstanceFactory, &UReimportSubstanceFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("UReimportSubstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
