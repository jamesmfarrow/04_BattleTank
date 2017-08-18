// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleTank.h"
#include "TankTrack.h"
#include "TankMovementComponent.h"


void UTankMovementComponent::Initialise(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet)
{
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;

}

void UTankMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	// no need to call super as we're replacing the functionality
	auto TankForward = GetOwner()->GetActorForwardVector().GetSafeNormal(); 
	auto AIforwardIntention = MoveVelocity.GetSafeNormal();

	auto RequiredThrowMoveForward = FVector::DotProduct(TankForward, AIforwardIntention);

	IntendMoveForward(RequiredThrowMoveForward);

	auto RequiredThrowTurnRight = FVector::CrossProduct(TankForward, AIforwardIntention).Z;
	IntendTurnRight(RequiredThrowTurnRight);
}


void  UTankMovementComponent::IntendMoveForward(float Throw)
{
	if (!ensure (LeftTrack && RightTrack)) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}

void  UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!ensure (LeftTrack && RightTrack)) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(-Throw);
}

