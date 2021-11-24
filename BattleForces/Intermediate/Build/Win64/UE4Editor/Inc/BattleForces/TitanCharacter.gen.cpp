// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/TitanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitanCharacter() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_ATitanCharacter_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_ATitanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	void ATitanCharacter::StaticRegisterNativesATitanCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATitanCharacter_NoRegister()
	{
		return ATitanCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATitanCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitanCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitanCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TitanCharacter.h" },
		{ "ModuleRelativePath", "Public/TitanCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitanCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitanCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATitanCharacter_Statics::ClassParams = {
		&ATitanCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATitanCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATitanCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATitanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATitanCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATitanCharacter, 1510243445);
	template<> BATTLEFORCES_API UClass* StaticClass<ATitanCharacter>()
	{
		return ATitanCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATitanCharacter(Z_Construct_UClass_ATitanCharacter, &ATitanCharacter::StaticClass, TEXT("/Script/BattleForces"), TEXT("ATitanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
