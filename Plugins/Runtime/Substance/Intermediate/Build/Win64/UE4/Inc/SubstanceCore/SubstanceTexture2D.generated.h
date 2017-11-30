// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSTANCECORE_SubstanceTexture2D_generated_h
#error "SubstanceTexture2D.generated.h already included, missing '#pragma once' in SubstanceTexture2D.h"
#endif
#define SUBSTANCECORE_SubstanceTexture2D_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChannel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubChannelType>*)Z_Param__Result=this->GetChannel(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChannel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubChannelType>*)Z_Param__Result=this->GetChannel(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceTexture2D(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceTexture2D(); \
public: \
	DECLARE_CLASS(USubstanceTexture2D, UTexture2DDynamic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceTexture2D) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceTexture2D(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceTexture2D(); \
public: \
	DECLARE_CLASS(USubstanceTexture2D, UTexture2DDynamic, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceTexture2D) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceTexture2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceTexture2D(USubstanceTexture2D&&); \
	NO_API USubstanceTexture2D(const USubstanceTexture2D&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceTexture2D(USubstanceTexture2D&&); \
	NO_API USubstanceTexture2D(const USubstanceTexture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceTexture2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceTexture2D)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_48_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceTexture2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h


#define FOREACH_ENUM_ESUBCHANNELTYPE(op) \
	op(Diffuse) \
	op(Ambient) \
	op(BaseColor) \
	op(Metallic) \
	op(Roughness) \
	op(Emissive) \
	op(Normal) \
	op(Mask) \
	op(Opacity) \
	op(Refraction) \
	op(AmbientOcclusion) \
	op(Glossiness) \
	op(Height) \
	op(Displacement) \
	op(Reflection) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
