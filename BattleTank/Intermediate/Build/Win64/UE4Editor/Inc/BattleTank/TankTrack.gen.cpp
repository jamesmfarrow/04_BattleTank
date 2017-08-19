// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankTrack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTrack() {}
// Cross Module References
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankTrack_OnHit();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankTrack::StaticRegisterNativesUTankTrack()
	{
		UClass* Class = UTankTrack::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&UTankTrack::execOnHit },
			{ "SetThrottle", (Native)&UTankTrack::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UTankTrack_OnHit()
	{
		struct TankTrack_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_UTankTrack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C40401, 65535, sizeof(TankTrack_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, TankTrack_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, TankTrack_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, TankTrack_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, TankTrack_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, TankTrack_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle()
	{
		struct TankTrack_eventSetThrottle_Parms
		{
			float Throttle;
		};
		UObject* Outer = Z_Construct_UClass_UTankTrack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetThrottle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TankTrack_eventSetThrottle_Parms));
			UProperty* NewProp_Throttle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throttle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throttle, TankTrack_eventSetThrottle_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets a throttle between -1 and +1"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTrack_NoRegister()
	{
		return UTankTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankTrack_OnHit());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankTrack_SetThrottle());

				UProperty* NewProp_TrackMaxDrivingForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrackMaxDrivingForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TrackMaxDrivingForce, UTankTrack), 0x0010000000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankTrack_OnHit(), "OnHit"); // 431371449
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankTrack_SetThrottle(), "SetThrottle"); // 1818782098
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("TankTrack is used to set maximum driving force, and apply forces to the tank."));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("Category"), TEXT("TankTrack"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ToolTip"), TEXT("max force per track in newtons"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTrack, 1751357920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTrack(Z_Construct_UClass_UTankTrack, &UTankTrack::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
