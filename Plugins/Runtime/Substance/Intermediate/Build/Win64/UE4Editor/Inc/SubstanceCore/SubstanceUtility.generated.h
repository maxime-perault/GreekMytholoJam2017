// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USubstanceGraphInstance;
class USubstanceInstanceFactory;
struct FSubstanceConnection;
class UObject;
class USubstanceTexture2D;
class UMaterialInterface;
#ifdef SUBSTANCECORE_SubstanceUtility_generated_h
#error "SubstanceUtility.generated.h already included, missing '#pragma once' in SubstanceUtility.h"
#endif
#define SUBSTANCECORE_SubstanceUtility_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_25_GENERATED_BODY \
	friend SUBSTANCECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection(); \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncRendering) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SyncRendering(Z_Param_InstancesToRender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsyncRendering) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::AsyncRendering(Z_Param_InstancesToRender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory) \
	{ \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_OutputFactory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OutputFactoryGraphIndex); \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_InputFactory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputFactoryGraphIndex); \
		P_GET_TARRAY_REF(FSubstanceConnection,Z_Param_Out_Connections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceInstanceFactory**)Z_Param__Result=USubstanceUtility::CreateAggregateSubstanceFactory(Z_Param_OutputFactory,Z_Param_OutputFactoryGraphIndex,Z_Param_InputFactory,Z_Param_InputFactoryGraphIndex,Z_Param_Out_Connections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::ClearCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SetGraphInstanceOutputSizeInt(Z_Param_GraphInstance,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Width); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SetGraphInstanceOutputSize(Z_Param_GraphInstance,ESubstanceTextureSize(Z_Param_Width),ESubstanceTextureSize(Z_Param_Height)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInputParameters) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::ResetInputParameters(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyInputParameters) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_SourceGraphInstance); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_DestGraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::CopyInputParameters(Z_Param_SourceGraphInstance,Z_Param_DestGraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableInstanceOutputs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_TARRAY(int32,Z_Param_OutputIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::DisableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInstanceOutputs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_TARRAY(int32,Z_Param_OutputIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::EnableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateGraphInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::DuplicateGraphInstance(Z_Param_WorldContextObject,Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGraphInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GraphDescIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::CreateGraphInstance(Z_Param_WorldContextObject,Z_Param_Factory,Z_Param_GraphDescIndex,Z_Param_InstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USubstanceUtility::GetSubstanceLoadingProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactoryName) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USubstanceUtility::GetFactoryName(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphName) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USubstanceUtility::GetGraphName(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstanceTextures) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USubstanceTexture2D*>*)Z_Param__Result=USubstanceUtility::GetSubstanceTextures(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstances) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=USubstanceUtility::GetSubstances(Z_Param_Material); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncRendering) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SyncRendering(Z_Param_InstancesToRender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsyncRendering) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::AsyncRendering(Z_Param_InstancesToRender); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory) \
	{ \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_OutputFactory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OutputFactoryGraphIndex); \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_InputFactory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputFactoryGraphIndex); \
		P_GET_TARRAY_REF(FSubstanceConnection,Z_Param_Out_Connections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceInstanceFactory**)Z_Param__Result=USubstanceUtility::CreateAggregateSubstanceFactory(Z_Param_OutputFactory,Z_Param_OutputFactoryGraphIndex,Z_Param_InputFactory,Z_Param_InputFactoryGraphIndex,Z_Param_Out_Connections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::ClearCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SetGraphInstanceOutputSizeInt(Z_Param_GraphInstance,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Width); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::SetGraphInstanceOutputSize(Z_Param_GraphInstance,ESubstanceTextureSize(Z_Param_Width),ESubstanceTextureSize(Z_Param_Height)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInputParameters) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::ResetInputParameters(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyInputParameters) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_SourceGraphInstance); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_DestGraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::CopyInputParameters(Z_Param_SourceGraphInstance,Z_Param_DestGraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableInstanceOutputs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_TARRAY(int32,Z_Param_OutputIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::DisableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInstanceOutputs) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_GET_TARRAY(int32,Z_Param_OutputIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USubstanceUtility::EnableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDuplicateGraphInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::DuplicateGraphInstance(Z_Param_WorldContextObject,Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGraphInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_Factory); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GraphDescIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::CreateGraphInstance(Z_Param_WorldContextObject,Z_Param_Factory,Z_Param_GraphDescIndex,Z_Param_InstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USubstanceUtility::GetSubstanceLoadingProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactoryName) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USubstanceUtility::GetFactoryName(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphName) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USubstanceUtility::GetGraphName(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstanceTextures) \
	{ \
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USubstanceTexture2D*>*)Z_Param__Result=USubstanceUtility::GetSubstanceTextures(Z_Param_GraphInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubstances) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=USubstanceUtility::GetSubstances(Z_Param_Material); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceUtility(); \
public: \
	DECLARE_CLASS(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), SUBSTANCECORE_API) \
	DECLARE_SERIALIZER(USubstanceUtility) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceUtility(); \
public: \
	DECLARE_CLASS(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), SUBSTANCECORE_API) \
	DECLARE_SERIALIZER(USubstanceUtility) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBSTANCECORE_API USubstanceUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUBSTANCECORE_API USubstanceUtility(USubstanceUtility&&); \
	SUBSTANCECORE_API USubstanceUtility(const USubstanceUtility&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBSTANCECORE_API USubstanceUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUBSTANCECORE_API USubstanceUtility(USubstanceUtility&&); \
	SUBSTANCECORE_API USubstanceUtility(const USubstanceUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceUtility)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_34_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceUtility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h


#define FOREACH_ENUM_ESUBSTANCETEXTURESIZE(op) \
	op(ERL_16) \
	op(ERL_32) \
	op(ERL_64) \
	op(ERL_128) \
	op(ERL_256) \
	op(ERL_512) \
	op(ERL_1024) \
	op(ERL_2048) \
	op(ERL_4096) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
