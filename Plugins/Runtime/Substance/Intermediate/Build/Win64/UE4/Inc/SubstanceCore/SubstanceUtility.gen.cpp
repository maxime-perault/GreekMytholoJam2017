// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceUtility() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_AsyncRendering();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_ClearCache();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_CopyInputParameters();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_GetFactoryName();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_GetGraphName();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstances();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_ResetInputParameters();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceUtility_SyncRendering();
// End Cross Module References
	static UEnum* ESubstanceTextureSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceTextureSize"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceTextureSize(ESubstanceTextureSize_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceTextureSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_CRC() { return 3189605860U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceTextureSize"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERL_16", (int64)ERL_16 },
				{ "ERL_32", (int64)ERL_32 },
				{ "ERL_64", (int64)ERL_64 },
				{ "ERL_128", (int64)ERL_128 },
				{ "ERL_256", (int64)ERL_256 },
				{ "ERL_512", (int64)ERL_512 },
				{ "ERL_1024", (int64)ERL_1024 },
				{ "ERL_2048", (int64)ERL_2048 },
				{ "ERL_4096", (int64)ERL_4096 },
				{ "ERL_8192", (int64)ERL_8192 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ERL_1024.DisplayName", "1024" },
				{ "ERL_128.DisplayName", "128" },
				{ "ERL_16.DisplayName", "16" },
				{ "ERL_2048.DisplayName", "2048" },
				{ "ERL_256.DisplayName", "256" },
				{ "ERL_32.DisplayName", "32" },
				{ "ERL_4096.DisplayName", "4096" },
				{ "ERL_512.DisplayName", "512" },
				{ "ERL_64.DisplayName", "64" },
				{ "ERL_8192.DisplayName", "8192" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubstanceTextureSize",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubstanceTextureSize",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubstanceConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceConnection, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceConnection"), sizeof(FSubstanceConnection), Get_Z_Construct_UScriptStruct_FSubstanceConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceConnection(FSubstanceConnection::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceConnection"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceConnection")),new UScriptStruct::TCppStructOps<FSubstanceConnection>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection;
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceConnection"), sizeof(FSubstanceConnection), Get_Z_Construct_UScriptStruct_FSubstanceConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceConnection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputImageIdentifier_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputImageIdentifier = { UE4CodeGen_Private::EPropertyClass::Str, "InputImageIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubstanceConnection, InputImageIdentifier), METADATA_PARAMS(NewProp_InputImageIdentifier_MetaData, ARRAY_COUNT(NewProp_InputImageIdentifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIdentifier_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputIdentifier = { UE4CodeGen_Private::EPropertyClass::Str, "OutputIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubstanceConnection, OutputIdentifier), METADATA_PARAMS(NewProp_OutputIdentifier_MetaData, ARRAY_COUNT(NewProp_OutputIdentifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputImageIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIdentifier,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubstanceConnection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubstanceConnection),
				alignof(FSubstanceConnection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_CRC() { return 3282274355U; }
	void USubstanceUtility::StaticRegisterNativesUSubstanceUtility()
	{
		UClass* Class = USubstanceUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncRendering", (Native)&USubstanceUtility::execAsyncRendering },
			{ "ClearCache", (Native)&USubstanceUtility::execClearCache },
			{ "CopyInputParameters", (Native)&USubstanceUtility::execCopyInputParameters },
			{ "CreateAggregateSubstanceFactory", (Native)&USubstanceUtility::execCreateAggregateSubstanceFactory },
			{ "CreateGraphInstance", (Native)&USubstanceUtility::execCreateGraphInstance },
			{ "DisableInstanceOutputs", (Native)&USubstanceUtility::execDisableInstanceOutputs },
			{ "DuplicateGraphInstance", (Native)&USubstanceUtility::execDuplicateGraphInstance },
			{ "EnableInstanceOutputs", (Native)&USubstanceUtility::execEnableInstanceOutputs },
			{ "GetFactoryName", (Native)&USubstanceUtility::execGetFactoryName },
			{ "GetGraphName", (Native)&USubstanceUtility::execGetGraphName },
			{ "GetSubstanceLoadingProgress", (Native)&USubstanceUtility::execGetSubstanceLoadingProgress },
			{ "GetSubstances", (Native)&USubstanceUtility::execGetSubstances },
			{ "GetSubstanceTextures", (Native)&USubstanceUtility::execGetSubstanceTextures },
			{ "ResetInputParameters", (Native)&USubstanceUtility::execResetInputParameters },
			{ "SetGraphInstanceOutputSize", (Native)&USubstanceUtility::execSetGraphInstanceOutputSize },
			{ "SetGraphInstanceOutputSizeInt", (Native)&USubstanceUtility::execSetGraphInstanceOutputSizeInt },
			{ "SyncRendering", (Native)&USubstanceUtility::execSyncRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_AsyncRendering()
	{
		struct SubstanceUtility_eventAsyncRendering_Parms
		{
			USubstanceGraphInstance* InstancesToRender;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender = { UE4CodeGen_Private::EPropertyClass::Object, "InstancesToRender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventAsyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesToRender,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance|Render" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Queue a Substance Graph Instance in the renderer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "AsyncRendering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventAsyncRendering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance|Memory" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Clear Substance Memory Cache" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "ClearCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_CopyInputParameters()
	{
		struct SubstanceUtility_eventCopyInputParameters_Parms
		{
			USubstanceGraphInstance* SourceGraphInstance;
			USubstanceGraphInstance* DestGraphInstance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestGraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "DestGraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, DestGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceGraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "SourceGraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, SourceGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestGraphInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceGraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Copy the inputs values from a Substance Graph Instance to another one" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "CopyInputParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventCopyInputParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory()
	{
		struct SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms
		{
			USubstanceInstanceFactory* OutputFactory;
			int32 OutputFactoryGraphIndex;
			USubstanceInstanceFactory* InputFactory;
			int32 InputFactoryGraphIndex;
			TArray<FSubstanceConnection> Connections;
			USubstanceInstanceFactory* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Connections = { UE4CodeGen_Private::EPropertyClass::Array, "Connections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, Connections), METADATA_PARAMS(NewProp_Connections_MetaData, ARRAY_COUNT(NewProp_Connections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Connections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubstanceConnection, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputFactoryGraphIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InputFactoryGraphIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactoryGraphIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputFactory = { UE4CodeGen_Private::EPropertyClass::Object, "InputFactory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputFactoryGraphIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutputFactoryGraphIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactoryGraphIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputFactory = { UE4CodeGen_Private::EPropertyClass::Object, "OutputFactory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputFactoryGraphIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputFactory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputFactoryGraphIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputFactory,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Create an aggregate substance factory by fusing output images from one substance to the input images of another substance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "CreateAggregateSubstanceFactory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance()
	{
		struct SubstanceUtility_eventCreateGraphInstance_Parms
		{
			UObject* WorldContextObject;
			USubstanceInstanceFactory* Factory;
			int32 GraphDescIndex;
			FString InstanceName;
			USubstanceGraphInstance* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphDescIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GraphDescIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, GraphDescIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory = { UE4CodeGen_Private::EPropertyClass::Object, "Factory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, Factory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphDescIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Factory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Create a dynamic Substance Graph Instance (no outputs enabled by default)" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "CreateGraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventCreateGraphInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs()
	{
		struct SubstanceUtility_eventDisableInstanceOutputs_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			TArray<int32> OutputIndices;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputIndices = { UE4CodeGen_Private::EPropertyClass::Array, "OutputIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, OutputIndices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OutputIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Disable the textures of a Substance Graph Instance (disable its outputs) using the output indices" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "DisableInstanceOutputs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventDisableInstanceOutputs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance()
	{
		struct SubstanceUtility_eventDuplicateGraphInstance_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			USubstanceGraphInstance* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Create a copy of Substance Graph Instance" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "DuplicateGraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventDuplicateGraphInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs()
	{
		struct SubstanceUtility_eventEnableInstanceOutputs_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			TArray<int32> OutputIndices;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputIndices = { UE4CodeGen_Private::EPropertyClass::Array, "OutputIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, OutputIndices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OutputIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Create the textures of a Substance Graph Instance (enable its outputs) using the output indices" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "EnableInstanceOutputs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventEnableInstanceOutputs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetFactoryName()
	{
		struct SubstanceUtility_eventGetFactoryName_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Get the name of the factory that created this instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "GetFactoryName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventGetFactoryName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetGraphName()
	{
		struct SubstanceUtility_eventGetGraphName_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Get the original graph name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "GetGraphName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventGetGraphName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress()
	{
		struct SubstanceUtility_eventGetSubstanceLoadingProgress_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Get the current rendering progress of the Substances currently loaded ([0, 1.0])" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "GetSubstanceLoadingProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstances()
	{
		struct SubstanceUtility_eventGetSubstances_Parms
		{
			UMaterialInterface* Material;
			TArray<USubstanceGraphInstance*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Get the list of Substance Graph Instances used by a material" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "GetSubstances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventGetSubstances_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures()
	{
		struct SubstanceUtility_eventGetSubstanceTextures_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			TArray<USubstanceTexture2D*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USubstanceTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Get the textures (from enabled outputs) of a Substance Graph Instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "GetSubstanceTextures", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventGetSubstanceTextures_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_ResetInputParameters()
	{
		struct SubstanceUtility_eventResetInputParameters_Parms
		{
			USubstanceGraphInstance* GraphInstance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventResetInputParameters_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Reset the input values of a Substance Graph Instance to their default values" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "ResetInputParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventResetInputParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize()
	{
		struct SubstanceUtility_eventSetGraphInstanceOutputSize_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			TEnumAsByte<ESubstanceTextureSize> Width;
			TEnumAsByte<ESubstanceTextureSize> Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Byte, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Height), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Byte, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Width), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Set the output size input of the specified GraphInstance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "SetGraphInstanceOutputSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt()
	{
		struct SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			int32 Width;
			int32 Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GraphInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "DisplayName", "Set GraphInstance Output Size (Int)" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Set the output size input of the specified GraphInstance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "SetGraphInstanceOutputSizeInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubstanceUtility_SyncRendering()
	{
		struct SubstanceUtility_eventSyncRendering_Parms
		{
			USubstanceGraphInstance* InstancesToRender;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender = { UE4CodeGen_Private::EPropertyClass::Object, "InstancesToRender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SubstanceUtility_eventSyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesToRender,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance|Render" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
				{ "ToolTip", "Start the synchronous rendering of a Substance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, "SyncRendering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(SubstanceUtility_eventSyncRendering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceUtility_NoRegister()
	{
		return USubstanceUtility::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubstanceUtility_AsyncRendering, "AsyncRendering" }, // 4239013040
				{ &Z_Construct_UFunction_USubstanceUtility_ClearCache, "ClearCache" }, // 4038349943
				{ &Z_Construct_UFunction_USubstanceUtility_CopyInputParameters, "CopyInputParameters" }, // 211083030
				{ &Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory, "CreateAggregateSubstanceFactory" }, // 838445144
				{ &Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance, "CreateGraphInstance" }, // 3830735690
				{ &Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs, "DisableInstanceOutputs" }, // 2876874853
				{ &Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance, "DuplicateGraphInstance" }, // 3899863006
				{ &Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs, "EnableInstanceOutputs" }, // 1271892735
				{ &Z_Construct_UFunction_USubstanceUtility_GetFactoryName, "GetFactoryName" }, // 1203893950
				{ &Z_Construct_UFunction_USubstanceUtility_GetGraphName, "GetGraphName" }, // 1986547994
				{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress, "GetSubstanceLoadingProgress" }, // 1296725383
				{ &Z_Construct_UFunction_USubstanceUtility_GetSubstances, "GetSubstances" }, // 3032695075
				{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures, "GetSubstanceTextures" }, // 4199108479
				{ &Z_Construct_UFunction_USubstanceUtility_ResetInputParameters, "ResetInputParameters" }, // 1295200541
				{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize, "SetGraphInstanceOutputSize" }, // 349319720
				{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt, "SetGraphInstanceOutputSizeInt" }, // 3851887974
				{ &Z_Construct_UFunction_USubstanceUtility_SyncRendering, "SyncRendering" }, // 4117574523
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SubstanceUtility.h" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceUtility>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceUtility::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USubstanceUtility, 2990017750);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceUtility(Z_Construct_UClass_USubstanceUtility, &USubstanceUtility::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
