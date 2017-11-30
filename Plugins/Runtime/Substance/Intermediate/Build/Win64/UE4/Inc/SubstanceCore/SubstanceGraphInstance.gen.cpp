// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceGraphInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceGraphInstance() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputString();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputType();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceImageInput_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceInputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceInputType(ESubstanceInputType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_CRC() { return 449201663U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceInputType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SIT_Float", (int64)SIT_Float },
				{ "SIT_Float2", (int64)SIT_Float2 },
				{ "SIT_Float3", (int64)SIT_Float3 },
				{ "SIT_Float4", (int64)SIT_Float4 },
				{ "SIT_Integer", (int64)SIT_Integer },
				{ "SIT_Image", (int64)SIT_Image },
				{ "SIT_Unused_6", (int64)SIT_Unused_6 },
				{ "SIT_Unused_7", (int64)SIT_Unused_7 },
				{ "SIT_Integer2", (int64)SIT_Integer2 },
				{ "SIT_Integer3", (int64)SIT_Integer3 },
				{ "SIT_Integer4", (int64)SIT_Integer4 },
				{ "SIT_MAX", (int64)SIT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubstanceInputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubstanceInputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubstanceInstanceDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInstanceDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInstanceDesc"), sizeof(FSubstanceInstanceDesc), Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceInstanceDesc(FSubstanceInstanceDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceInstanceDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceInstanceDesc")),new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc;
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceInstanceDesc"), sizeof(FSubstanceInstanceDesc), Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceInstanceDesc, Inputs), METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubstanceInputDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceInstanceDesc, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubstanceInstanceDesc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubstanceInstanceDesc),
				alignof(FSubstanceInstanceDesc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_CRC() { return 3715369313U; }
class UScriptStruct* FSubstanceFloatInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceFloatInputDesc"), sizeof(FSubstanceFloatInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceFloatInputDesc(FSubstanceFloatInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceFloatInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceFloatInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc;
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceFloatInputDesc"), sizeof(FSubstanceFloatInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Array, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Default), METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Array, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Max), METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Array, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Min), METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
				Z_Construct_UScriptStruct_FSubstanceInputDesc,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubstanceFloatInputDesc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubstanceFloatInputDesc),
				alignof(FSubstanceFloatInputDesc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_CRC() { return 1761832170U; }
class UScriptStruct* FSubstanceIntInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceIntInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceIntInputDesc"), sizeof(FSubstanceIntInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceIntInputDesc(FSubstanceIntInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceIntInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceIntInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc;
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceIntInputDesc"), sizeof(FSubstanceIntInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Array, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Default), METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Default_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Array, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Max), METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Array, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Min), METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
				Z_Construct_UScriptStruct_FSubstanceInputDesc,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubstanceIntInputDesc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubstanceIntInputDesc),
				alignof(FSubstanceIntInputDesc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_CRC() { return 892377902U; }
class UScriptStruct* FSubstanceInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInputDesc"), sizeof(FSubstanceInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceInputDesc(FSubstanceInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc;
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceInputDesc"), sizeof(FSubstanceInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInputDesc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceInputDesc, Type), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Values" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSubstanceInputDesc, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubstanceInputDesc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubstanceInputDesc),
				alignof(FSubstanceInputDesc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_CRC() { return 2444476772U; }
	void USubstanceGraphInstance::StaticRegisterNativesUSubstanceGraphInstance()
	{
		UClass* Class = USubstanceGraphInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatInputDesc", (Native)&USubstanceGraphInstance::execGetFloatInputDesc },
			{ "GetInputBool", (Native)&USubstanceGraphInstance::execGetInputBool },
			{ "GetInputColor", (Native)&USubstanceGraphInstance::execGetInputColor },
			{ "GetInputFloat", (Native)&USubstanceGraphInstance::execGetInputFloat },
			{ "GetInputInt", (Native)&USubstanceGraphInstance::execGetInputInt },
			{ "GetInputNames", (Native)&USubstanceGraphInstance::execGetInputNames },
			{ "GetInputString", (Native)&USubstanceGraphInstance::execGetInputString },
			{ "GetInputType", (Native)&USubstanceGraphInstance::execGetInputType },
			{ "GetInstanceDesc", (Native)&USubstanceGraphInstance::execGetInstanceDesc },
			{ "GetIntInputDesc", (Native)&USubstanceGraphInstance::execGetIntInputDesc },
			{ "SetInputBool", (Native)&USubstanceGraphInstance::execSetInputBool },
			{ "SetInputColor", (Native)&USubstanceGraphInstance::execSetInputColor },
			{ "SetInputFloat", (Native)&USubstanceGraphInstance::execSetInputFloat },
			{ "SetInputImg", (Native)&USubstanceGraphInstance::execSetInputImg },
			{ "SetInputInt", (Native)&USubstanceGraphInstance::execSetInputInt },
			{ "SetInputString", (Native)&USubstanceGraphInstance::execSetInputString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc()
	{
		struct SubstanceGraphInstance_eventGetFloatInputDesc_Parms
		{
			FString Identifier;
			FSubstanceFloatInputDesc ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get a float input description converted to a UE wrapper" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetFloatInputDesc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetFloatInputDesc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool()
	{
		struct SubstanceGraphInstance_eventGetInputBool_Parms
		{
			FString Identifier;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SubstanceGraphInstance_eventGetInputBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get input values of a boolean input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor()
	{
		struct SubstanceGraphInstance_eventGetInputColor_Parms
		{
			FString Identifier;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get input values of a color input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SubstanceGraphInstance_eventGetInputColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat()
	{
		struct SubstanceGraphInstance_eventGetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get input values in a float value type array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt()
	{
		struct SubstanceGraphInstance_eventGetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get input values in an int value type array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames()
	{
		struct SubstanceGraphInstance_eventGetInputNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Returns a list of all of the input identifiers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputNames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputString()
	{
		struct SubstanceGraphInstance_eventGetInputString_Parms
		{
			FString Identifier;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get input values of a string input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputType()
	{
		struct SubstanceGraphInstance_eventGetInputType_Parms
		{
			FString InputName;
			TEnumAsByte<ESubstanceInputType> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, InputName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Gets the type of an input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInputType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc()
	{
		struct SubstanceGraphInstance_eventGetInstanceDesc_Parms
		{
			FSubstanceInstanceDesc ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInstanceDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceInstanceDesc, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get a graph instance description converted to a UE wrapper" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetInstanceDesc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetInstanceDesc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc()
	{
		struct SubstanceGraphInstance_eventGetIntInputDesc_Parms
		{
			FString Identifier;
			FSubstanceIntInputDesc ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceIntInputDesc, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Get an Int input description converted to a UE wrapper" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "GetIntInputDesc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventGetIntInputDesc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool()
	{
		struct SubstanceGraphInstance_eventSetInputBool_Parms
		{
			FString Identifier;
			bool Bool;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Bool_SetBit = [](void* Obj){ ((SubstanceGraphInstance_eventSetInputBool_Parms*)Obj)->Bool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bool = { UE4CodeGen_Private::EPropertyClass::Bool, "Bool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Bool_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Set an input with a bool value type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor()
	{
		struct SubstanceGraphInstance_eventSetInputColor_Parms
		{
			FString Identifier;
			FLinearColor Color;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Set an input with a color value type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SubstanceGraphInstance_eventSetInputColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat()
	{
		struct SubstanceGraphInstance_eventSetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> InputValues;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputValues = { UE4CodeGen_Private::EPropertyClass::Array, "InputValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, InputValues), METADATA_PARAMS(NewProp_InputValues_MetaData, ARRAY_COUNT(NewProp_InputValues_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputValues_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InputValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Set an input with a float value type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SubstanceGraphInstance_eventSetInputFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg()
	{
		struct SubstanceGraphInstance_eventSetInputImg_Parms
		{
			FString InputName;
			UObject* Value;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SubstanceGraphInstance_eventSetInputImg_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, InputName), METADATA_PARAMS(NewProp_InputName_MetaData, ARRAY_COUNT(NewProp_InputName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Sets the input image with the given name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputImg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt()
	{
		struct SubstanceGraphInstance_eventSetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> InputValues;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputValues = { UE4CodeGen_Private::EPropertyClass::Array, "InputValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, InputValues), METADATA_PARAMS(NewProp_InputValues_MetaData, ARRAY_COUNT(NewProp_InputValues_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputValues_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InputValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Set an input with an int value type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SubstanceGraphInstance_eventSetInputInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputString()
	{
		struct SubstanceGraphInstance_eventSetInputString_Parms
		{
			FString Identifier;
			FString Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Str, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Set an input with a string value type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, "SetInputString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceGraphInstance_eventSetInputString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister()
	{
		return USubstanceGraphInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceGraphInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc, "GetFloatInputDesc" }, // 4285931633
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool, "GetInputBool" }, // 1494177307
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor, "GetInputColor" }, // 1304025527
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat, "GetInputFloat" }, // 2494347962
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt, "GetInputInt" }, // 2327372338
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames, "GetInputNames" }, // 2669861323
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputString, "GetInputString" }, // 837609786
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputType, "GetInputType" }, // 138722666
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc, "GetInstanceDesc" }, // 3388276572
				{ &Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc, "GetIntInputDesc" }, // 1598559656
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool, "SetInputBool" }, // 2052832750
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor, "SetInputColor" }, // 847274754
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat, "SetInputFloat" }, // 2670448585
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg, "SetInputImg" }, // 369535331
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt, "SetInputInt" }, // 192376746
				{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputString, "SetInputString" }, // 2074977863
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubstanceGraphInstance.h" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrozen_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Flag to determine if this is a graph that has been update disabled through the editor" },
			};
#endif
			auto NewProp_bIsFrozen_SetBit = [](void* Obj){ ((USubstanceGraphInstance*)Obj)->bIsFrozen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrozen = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFrozen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USubstanceGraphInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFrozen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFrozen_MetaData, ARRAY_COUNT(NewProp_bIsFrozen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTextureLinkData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Used to store all of the UID/Guid conversions to link legacy textures and output instances" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutputTextureLinkData = { UE4CodeGen_Private::EPropertyClass::Map, "OutputTextureLinkData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, OutputTextureLinkData), METADATA_PARAMS(NewProp_OutputTextureLinkData_MetaData, ARRAY_COUNT(NewProp_OutputTextureLinkData_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputTextureLinkData_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "OutputTextureLinkData_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputTextureLinkData_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "OutputTextureLinkData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedMaterial_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Material created by the factory" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "CreatedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, CreatedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_CreatedMaterial_MetaData, ARRAY_COUNT(NewProp_CreatedMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Container for linking all of the input images this class uses" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ImageSources = { UE4CodeGen_Private::EPropertyClass::Map, "ImageSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, ImageSources), METADATA_PARAMS(NewProp_ImageSources_MetaData, ARRAY_COUNT(NewProp_ImageSources_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImageSources_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::UInt32, "ImageSources_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageSources_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "ImageSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_USubstanceImageInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFactory_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "The Factory containing the package which created this Instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentFactory = { UE4CodeGen_Private::EPropertyClass::Object, "ParentFactory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, ParentFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(NewProp_ParentFactory_MetaData, ARRAY_COUNT(NewProp_ParentFactory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageURL_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "ToolTip", "Use for finding and linking the graph instance with other substance objects" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageURL = { UE4CodeGen_Private::EPropertyClass::Str, "PackageURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, PackageURL), METADATA_PARAMS(NewProp_PackageURL_MetaData, ARRAY_COUNT(NewProp_PackageURL_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFrozen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputTextureLinkData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputTextureLinkData_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputTextureLinkData_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CreatedMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSources_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSources_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentFactory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageURL,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceGraphInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceGraphInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USubstanceGraphInstance, 252878048);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceGraphInstance(Z_Construct_UClass_USubstanceGraphInstance, &USubstanceGraphInstance::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceGraphInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceGraphInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
