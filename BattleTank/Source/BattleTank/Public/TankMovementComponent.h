// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack; // forward declaration

/**
 * Responsible for driving the tank tracks
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(Blueprintcallable, Category = Setup)
	void Initialise(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);
	
	UFUNCTION(Blueprintcallable, Category = Input)
	void IntendMoveForward(float Throw);

	UFUNCTION(Blueprintcallable, Category = Input)
	void IntendTurnRight(float Throw);

	// TODO check best protection
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;

	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;
	
};
