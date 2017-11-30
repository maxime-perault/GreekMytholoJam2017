// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceImageInputThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInputThumbnailRenderer() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceImageInputThumbnailRenderer::StaticRegisterNativesUSubstanceImageInputThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_NoRegister()
	{
		return USubstanceImageInputThumbnailRenderer::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SubstanceImageInputThumbnailRenderer.h" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInputThumbnailRenderer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceImageInputThumbnailRenderer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceImageInputThumbnailRenderer::StaticClass,
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
	IMPLEMENT_CLASS(USubstanceImageInputThumbnailRenderer, 937766954);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInputThumbnailRenderer(Z_Construct_UClass_USubstanceImageInputThumbnailRenderer, &USubstanceImageInputThumbnailRenderer::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImageInputThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInputThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
