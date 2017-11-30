// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceInstanceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceFactory() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceGenerationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceGenerationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceGenerationMode(ESubstanceGenerationMode_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceGenerationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_CRC() { return 752655315U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceGenerationMode"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SGM_PlatformDefault", (int64)SGM_PlatformDefault },
				{ "SGM_Baked", (int64)SGM_Baked },
				{ "SGM_OnLoadSync", (int64)SGM_OnLoadSync },
				{ "SGM_OnLoadSyncAndCache", (int64)SGM_OnLoadSyncAndCache },
				{ "SGM_OnLoadAsync", (int64)SGM_OnLoadAsync },
				{ "SGM_OnLoadAsyncAndCache", (int64)SGM_OnLoadAsyncAndCache },
				{ "SGM_MAX", (int64)SGM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubstanceGenerationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubstanceGenerationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceInstanceFactory::StaticRegisterNativesUSubstanceInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister()
	{
		return USubstanceInstanceFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceInstanceFactory()
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
				{ "IncludePath", "SubstanceInstanceFactory.h" },
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationMode_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "ToolTip", "Flag for the format used to save asset data" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerationMode = { UE4CodeGen_Private::EPropertyClass::Byte, "GenerationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, GenerationMode), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, METADATA_PARAMS(NewProp_GenerationMode_MetaData, ARRAY_COUNT(NewProp_GenerationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "ToolTip", "Used to store when the file was created" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, SourceFileTimestamp), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteSourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "ToolTip", "Used for reimporting sbs files within editor" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbsoluteSourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "AbsoluteSourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, AbsoluteSourceFilePath), METADATA_PARAMS(NewProp_AbsoluteSourceFilePath_MetaData, ARRAY_COUNT(NewProp_AbsoluteSourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeSourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "ToolTip", "Used for reimporting sbs files within editor" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RelativeSourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "RelativeSourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, RelativeSourceFilePath), METADATA_PARAMS(NewProp_RelativeSourceFilePath_MetaData, ARRAY_COUNT(NewProp_RelativeSourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGraphInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "ToolTip", "Stores references to the instances that are created with this factory" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGraphInstances = { UE4CodeGen_Private::EPropertyClass::Array, "mGraphInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000200000, 1, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, mGraphInstances), METADATA_PARAMS(NewProp_mGraphInstances_MetaData, ARRAY_COUNT(NewProp_mGraphInstances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGraphInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mGraphInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GenerationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsoluteSourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeSourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mGraphInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mGraphInstances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceInstanceFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceInstanceFactory::StaticClass,
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
	IMPLEMENT_CLASS(USubstanceInstanceFactory, 1976709172);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceInstanceFactory(Z_Construct_UClass_USubstanceInstanceFactory, &USubstanceInstanceFactory::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
