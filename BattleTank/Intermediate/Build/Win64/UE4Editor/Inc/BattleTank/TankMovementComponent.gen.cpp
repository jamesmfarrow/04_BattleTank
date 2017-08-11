// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Initialise", (Native)&UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", (Native)&UTankMovementComponent::execIntendMoveForward },
			{ "IntendTurnRight", (Native)&UTankMovementComponent::execIntendTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTrackToSet;
			UTankTrack* RightTrackToSet;
		};
		UObject* Outer = Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialise"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TankMovementComponent_eventInitialise_Parms));
			UProperty* NewProp_RightTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RightTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			UProperty* NewProp_LeftTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LeftTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
			MetaData->SetValue(NewProp_RightTrackToSet, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_LeftTrackToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		UObject* Outer = Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendMoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TankMovementComponent_eventIntendMoveForward_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		UObject* Outer = Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendTurnRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TankMovementComponent_eventIntendTurnRight_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendTurnRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UNavMovementComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_Initialise());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_Initialise(), "Initialise"); // 3009465794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward(), "IntendMoveForward"); // 3817684062
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight(), "IntendTurnRight"); // 680751680
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Responsible for driving the tank tracks"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 2437730287);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
