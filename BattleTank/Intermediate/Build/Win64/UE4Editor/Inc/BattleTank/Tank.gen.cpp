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
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_GetHealthPercent();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetHealthPercent", (Native)&ATank::execGetHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATank_GetHealthPercent()
	{
		struct Tank_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealthPercent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(Tank_eventGetHealthPercent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, Tank_eventGetHealthPercent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("returns curent health as a percentage ofstarting health between 0 - 1"));
#endif
		}
		return ReturnFunction;
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

				OuterClass->LinkChild(Z_Construct_UFunction_ATank_GetHealthPercent());

				UProperty* NewProp_CurrentHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CurrentHealth, ATank), 0x0040000000020001);
				UProperty* NewProp_StartingHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartingHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StartingHealth, ATank), 0x0040000000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_GetHealthPercent(), "GetHealthPercent"); // 3230818151
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
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 3856590837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
