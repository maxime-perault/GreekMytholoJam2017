// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceImageInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInput() {}
// Cross Module References
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceImageInput_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceImageInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	void USubstanceImageInput::StaticRegisterNativesUSubstanceImageInput()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInput_NoRegister()
	{
		return USubstanceImageInput::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceImageInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubstanceImageInput.h" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Consumers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Graph instances that use this image input" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Consumers = { UE4CodeGen_Private::EPropertyClass::Array, "Consumers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, Consumers), METADATA_PARAMS(NewProp_Consumers_MetaData, ARRAY_COUNT(NewProp_Consumers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Consumers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Consumers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "Category", "File" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Time stamp of the loaded file" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, SourceFileTimestamp), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "Category", "File" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Path to used to import image input" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, SourceFilePath), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumComponents_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "The number of data channels this uses for GPU data" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumComponents = { UE4CodeGen_Private::EPropertyClass::Int, "NumComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, NumComponents), METADATA_PARAMS(NewProp_NumComponents_MetaData, ARRAY_COUNT(NewProp_NumComponents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Image height" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, SizeY), METADATA_PARAMS(NewProp_SizeY_MetaData, ARRAY_COUNT(NewProp_SizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Image width" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLevelAlpha_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Alpha channel compression (0: disable, 1: auto, 2-99: manual)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionLevelAlpha = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionLevelAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, CompressionLevelAlpha), METADATA_PARAMS(NewProp_CompressionLevelAlpha_MetaData, ARRAY_COUNT(NewProp_CompressionLevelAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLevelRGB_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
				{ "ToolTip", "Color channels compression (0: disable, 1: auto, 2-99: manual)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionLevelRGB = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionLevelRGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubstanceImageInput, CompressionLevelRGB), METADATA_PARAMS(NewProp_CompressionLevelRGB_MetaData, ARRAY_COUNT(NewProp_CompressionLevelRGB_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Consumers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Consumers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionLevelAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionLevelRGB,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceImageInput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceImageInput::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USubstanceImageInput, 2585816026);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInput(Z_Construct_UClass_USubstanceImageInput, &USubstanceImageInput::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceImageInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
