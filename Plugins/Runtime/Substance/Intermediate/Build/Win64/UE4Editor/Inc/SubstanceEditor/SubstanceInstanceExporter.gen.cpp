// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceInstanceExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceExporter() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceInstanceExporter::StaticRegisterNativesUSubstanceInstanceExporter()
	{
	}
	UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister()
	{
		return USubstanceInstanceExporter::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceInstanceExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UExporter,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SubstanceInstanceExporter.h" },
				{ "ModuleRelativePath", "Classes/SubstanceInstanceExporter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceInstanceExporter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceInstanceExporter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(USubstanceInstanceExporter, 759913465);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceInstanceExporter(Z_Construct_UClass_USubstanceInstanceExporter, &USubstanceInstanceExporter::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceInstanceExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
