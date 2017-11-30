// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubstanceTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceTexture2D() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubChannelType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceTexture2D_GetChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	static UEnum* ESubChannelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubChannelType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubChannelType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubChannelType(ESubChannelType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubChannelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubChannelType_CRC() { return 907087858U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubChannelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubChannelType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubChannelType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Diffuse", (int64)Diffuse },
				{ "Ambient", (int64)Ambient },
				{ "BaseColor", (int64)BaseColor },
				{ "Metallic", (int64)Metallic },
				{ "Roughness", (int64)Roughness },
				{ "Emissive", (int64)Emissive },
				{ "Normal", (int64)Normal },
				{ "Mask", (int64)Mask },
				{ "Opacity", (int64)Opacity },
				{ "Refraction", (int64)Refraction },
				{ "AmbientOcclusion", (int64)AmbientOcclusion },
				{ "Glossiness", (int64)Glossiness },
				{ "Height", (int64)Height },
				{ "Displacement", (int64)Displacement },
				{ "Reflection", (int64)Reflection },
				{ "Invalid", (int64)Invalid },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "Note:: These are the current set of channels that we support in UE4 and not all\nsubstance channel output types are listed here." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubChannelType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubChannelType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceTexture2D::StaticRegisterNativesUSubstanceTexture2D()
	{
		UClass* Class = USubstanceTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannel", (Native)&USubstanceTexture2D::execGetChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubstanceTexture2D_GetChannel()
	{
		struct SubstanceTexture2D_eventGetChannel_Parms
		{
			TEnumAsByte<ESubChannelType> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubstanceTexture2D_eventGetChannel_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubChannelType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "Returns a list of all of the input identifiers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceTexture2D, "GetChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubstanceTexture2D_eventGetChannel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister()
	{
		return USubstanceTexture2D::StaticClass();
	}
	UClass* Z_Construct_UClass_USubstanceTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture2DDynamic,
				(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubstanceTexture2D_GetChannel, "GetChannel" }, // 3371058823
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "SubstanceTexture2D.h" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCooked_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "Whether or not this is a cook asset" },
			};
#endif
			auto NewProp_bCooked_SetBit = [](void* Obj){ ((USubstanceTexture2D*)Obj)->bCooked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCooked = { UE4CodeGen_Private::EPropertyClass::Bool, "bCooked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USubstanceTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCooked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCooked_MetaData, ARRAY_COUNT(NewProp_bCooked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
				{ "Category", "Texture" },
				{ "DisplayName", "Y-axis Tiling Method" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "The addressing mode to use for the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(USubstanceTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressY_MetaData, ARRAY_COUNT(NewProp_AddressY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
				{ "Category", "Texture" },
				{ "DisplayName", "X-axis Tiling Method" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "The addressing mode to use for the X axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(USubstanceTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressX_MetaData, ARRAY_COUNT(NewProp_AddressX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[] = {
				{ "Category", "Substance" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "Graph that will update this texture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentInstance = { UE4CodeGen_Private::EPropertyClass::Object, "ParentInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(USubstanceTexture2D, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(NewProp_ParentInstance_MetaData, ARRAY_COUNT(NewProp_ParentInstance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCooked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentInstance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubstanceTexture2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubstanceTexture2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(USubstanceTexture2D, 147390108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceTexture2D(Z_Construct_UClass_USubstanceTexture2D, &USubstanceTexture2D::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
