// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSubstanceInstanceDesc;
struct FSubstanceFloatInputDesc;
struct FSubstanceIntInputDesc;
struct FLinearColor;
#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_95_GENERATED_BODY \
	friend SUBSTANCECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc(); \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_80_GENERATED_BODY \
	friend SUBSTANCECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc(); \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_65_GENERATED_BODY \
	friend SUBSTANCECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc(); \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_53_GENERATED_BODY \
	friend SUBSTANCECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc(); \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInputImg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetInputImg(Z_Param_InputName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceDesc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceInstanceDesc*)Z_Param__Result=this->GetInstanceDesc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceFloatInputDesc*)Z_Param__Result=this->GetFloatInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceIntInputDesc*)Z_Param__Result=this->GetIntInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetInputBool(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->GetInputColor(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetInputString(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetInputFloat(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetInputInt(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_UBOOL(Z_Param_Bool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputBool(Z_Param_Identifier,Z_Param_Bool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputString(Z_Param_Identifier,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=this->GetInputType(Z_Param_InputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetInputNames(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputImg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetInputImg(Z_Param_InputName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceDesc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceInstanceDesc*)Z_Param__Result=this->GetInstanceDesc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceFloatInputDesc*)Z_Param__Result=this->GetFloatInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceIntInputDesc*)Z_Param__Result=this->GetIntInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetInputBool(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->GetInputColor(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetInputString(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetInputFloat(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetInputInt(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_UBOOL(Z_Param_Bool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputBool(Z_Param_Identifier,Z_Param_Bool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputString(Z_Param_Identifier,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=this->GetInputType(Z_Param_InputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetInputNames(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceGraphInstance(); \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceGraphInstance(); \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_104_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceGraphInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h


#define FOREACH_ENUM_ESUBSTANCEINPUTTYPE(op) \
	op(SIT_Float) \
	op(SIT_Float2) \
	op(SIT_Float3) \
	op(SIT_Float4) \
	op(SIT_Integer) \
	op(SIT_Image) \
	op(SIT_Unused_6) \
	op(SIT_Unused_7) \
	op(SIT_Integer2) \
	op(SIT_Integer3) \
	op(SIT_Integer4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
