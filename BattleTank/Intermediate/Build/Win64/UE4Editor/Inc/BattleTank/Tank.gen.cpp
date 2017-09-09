// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/Tank.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_CurrentHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CurrentHealth, ATank), 0x0040000000020001);
				UProperty* NewProp_StartingHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartingHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StartingHealth, ATank), 0x0040000000010001);
				static TCppClassTypeInfo<TCppClassTypeTraits<ATank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_CurrentHealth, TEXT("Category"), TEXT("Health"));
				MetaData->SetValue(NewProp_CurrentHealth, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_StartingHealth, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_StartingHealth, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_StartingHealth, TEXT("ToolTip"), TEXT("Called when the game starts or when spawned\nvirtual void BeginPlay() override;"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 1101828557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
