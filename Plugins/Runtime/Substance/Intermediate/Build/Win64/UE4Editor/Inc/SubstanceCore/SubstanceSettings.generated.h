// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSTANCECORE_SubstanceSettings_generated_h
#error "SubstanceSettings.generated.h already included, missing '#pragma once' in SubstanceSettings.h"
#endif
#define SUBSTANCECORE_SubstanceSettings_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_RPC_WRAPPERS
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceSettings(); \
public: \
	DECLARE_CLASS(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend SUBSTANCECORE_API class UClass* Z_Construct_UClass_USubstanceSettings(); \
public: \
	DECLARE_CLASS(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceSettings(USubstanceSettings&&); \
	NO_API USubstanceSettings(const USubstanceSettings&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceSettings(USubstanceSettings&&); \
	NO_API USubstanceSettings(const USubstanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceSettings)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_24_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h


#define FOREACH_ENUM_ESUBSTANCEENGINETYPE(op) \
	op(SET_CPU) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
