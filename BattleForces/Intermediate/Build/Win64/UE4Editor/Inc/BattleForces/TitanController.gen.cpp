// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/TitanController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitanController() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_ATitanController_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_ATitanController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	void ATitanController::StaticRegisterNativesATitanController()
	{
	}
	UClass* Z_Construct_UClass_ATitanController_NoRegister()
	{
		return ATitanController::StaticClass();
	}
	struct Z_Construct_UClass_ATitanController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitanController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitanController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TitanController.h" },
		{ "ModuleRelativePath", "Public/TitanController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitanController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/*Blackboard Keys*/" },
		{ "ModuleRelativePath", "Public/TitanController.h" },
		{ "ToolTip", "Blackboard Keys" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATitanController_Statics::NewProp_LocationToGoKey = { "LocationToGoKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATitanController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_ATitanController_Statics::NewProp_LocationToGoKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATitanController_Statics::NewProp_LocationToGoKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitanController_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// ???????? \xc5\xb0 ?????? ?????? ????\n" },
		{ "ModuleRelativePath", "Public/TitanController.h" },
		{ "ToolTip", "???????? \xc5\xb0 ?????? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATitanController_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATitanController, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_ATitanController_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATitanController_Statics::NewProp_PlayerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATitanController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitanController_Statics::NewProp_LocationToGoKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitanController_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitanController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitanController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATitanController_Statics::ClassParams = {
		&ATitanController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATitanController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATitanController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATitanController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATitanController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATitanController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATitanController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATitanController, 2031932008);
	template<> BATTLEFORCES_API UClass* StaticClass<ATitanController>()
	{
		return ATitanController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATitanController(Z_Construct_UClass_ATitanController, &ATitanController::StaticClass, TEXT("/Script/BattleForces"), TEXT("ATitanController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitanController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
