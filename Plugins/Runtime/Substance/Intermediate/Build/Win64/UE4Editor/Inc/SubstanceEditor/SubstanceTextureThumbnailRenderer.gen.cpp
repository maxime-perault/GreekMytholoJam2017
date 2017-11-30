// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceTextureThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceTextureThumbnailRenderer() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceTextureThumbnailRenderer_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceTextureThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceTextureThumbnailRenderer::StaticRegisterNativesUSubstanceTextureThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USubstanceTextureThumbnailRenderer_NoRegister()
	{
		return USubstanceTextureThumbnailRenderer::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceTextureThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SubstanceTextureThumbnailRenderer.h" },
				{ "ModuleRelativePath", "Classes/SubstanceTextureThumbnailRenderer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceTextureThumbnailRenderer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceTextureThumbnailRenderer::StaticClass,
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
	IMPLEMENT_CLASS(USubstanceTextureThumbnailRenderer, 4166369393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceTextureThumbnailRenderer(Z_Construct_UClass_USubstanceTextureThumbnailRenderer, &USubstanceTextureThumbnailRenderer::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceTextureThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceTextureThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
