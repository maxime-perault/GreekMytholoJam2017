// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceSettings() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
// End Cross Module References
	static UEnum* ESubstanceEngineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceEngineType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceEngineType(ESubstanceEngineType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceEngineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_CRC() { return 784507596U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceEngineType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SET_CPU", (int64)SET_CPU },
				{ "SET_GPU", (int64)SET_GPU },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
				{ "SET_CPU.DisplayName", "CPU Engine" },
				{ "SET_GPU.DisplayName", "GPU Engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubstanceEngineType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubstanceEngineType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceSettings::StaticRegisterNativesUSubstanceSettings()
	{
	}
	UClass* Z_Construct_UClass_USubstanceSettings_NoRegister()
	{
		return USubstanceSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceSettings()
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
				{ "IncludePath", "SubstanceSettings.h" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
				{ "ToolTip", "Implements the settings for the Substance plugin." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstanceEngine_MetaData[] = {
				{ "Category", "Cooking" },
				{ "DisplayName", "Substance Engine (requires editor restart to take effect.)" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubstanceEngine = { UE4CodeGen_Private::EPropertyClass::Byte, "SubstanceEngine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, SubstanceEngine), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, METADATA_PARAMS(NewProp_SubstanceEngine_MetaData, ARRAY_COUNT(NewProp_SubstanceEngine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGenerationMode_MetaData[] = {
				{ "Category", "Cooking" },
				{ "DisplayName", "Default generation mode for Substances." },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultGenerationMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultGenerationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, DefaultGenerationMode), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, METADATA_PARAMS(NewProp_DefaultGenerationMode_MetaData, ARRAY_COUNT(NewProp_DefaultGenerationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ClampMax", "1024" },
				{ "ClampMin", "4" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAsyncSubstancesRenderedPerFrame = { UE4CodeGen_Private::EPropertyClass::Int, "MaxAsyncSubstancesRenderedPerFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, MaxAsyncSubstancesRenderedPerFrame), METADATA_PARAMS(NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData, ARRAY_COUNT(NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadMipClip_MetaData[] = {
				{ "Category", "Cooking" },
				{ "ClampMax", "5" },
				{ "ClampMin", "1" },
				{ "DisplayName", "Mip levels count removed during cooking." },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsyncLoadMipClip = { UE4CodeGen_Private::EPropertyClass::Int, "AsyncLoadMipClip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, AsyncLoadMipClip), METADATA_PARAMS(NewProp_AsyncLoadMipClip_MetaData, ARRAY_COUNT(NewProp_AsyncLoadMipClip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUCores_MetaData[] = {
				{ "Category", "Hardware Budget" },
				{ "ClampMax", "32" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPUCores = { UE4CodeGen_Private::EPropertyClass::Int, "CPUCores", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, CPUCores), METADATA_PARAMS(NewProp_CPUCores_MetaData, ARRAY_COUNT(NewProp_CPUCores_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryBudgetMb_MetaData[] = {
				{ "Category", "Hardware Budget" },
				{ "ClampMax", "2048" },
				{ "ClampMin", "16" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemoryBudgetMb = { UE4CodeGen_Private::EPropertyClass::Int, "MemoryBudgetMb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(USubstanceSettings, MemoryBudgetMb), METADATA_PARAMS(NewProp_MemoryBudgetMb_MetaData, ARRAY_COUNT(NewProp_MemoryBudgetMb_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubstanceEngine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultGenerationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAsyncSubstancesRenderedPerFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncLoadMipClip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CPUCores,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemoryBudgetMb,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceSettings, 783849199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceSettings(Z_Construct_UClass_USubstanceSettings, &USubstanceSettings::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
