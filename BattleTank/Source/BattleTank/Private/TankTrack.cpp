// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTrack.h"

UTankTrack::UTankTrack()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTankTrack::BeginPlay()
{
	OnComponentHit.AddDynamic(this, &UTankTrack::OnHit);
}

void UTankTrack::OnHit( UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, 
							const FHitResult& Hit )
{
	UE_LOG(LogTemp, Warning, TEXT("I'm Hit, I'm Hit!"))
}

void UTankTrack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// calculate the slippage speed (cross product)
	auto SlippageSpeed = FVector::DotProduct(GetRightVector(), GetComponentVelocity() );
	// work out the required acceleration this frame to correct minus for opposite direction
	auto CorrectionAcceleration = -SlippageSpeed / DeltaTime * GetRightVector();
	// calculate and apply sideways force F=ma
	auto TankRoot = Cast<UStaticMeshComponent>( GetOwner()->GetRootComponent() );
	auto CorrectionForce = (TankRoot->GetMass() * CorrectionAcceleration) / 2; // 2tracks
	TankRoot->AddForce(CorrectionForce);
}
 
void UTankTrack::SetThrottle(float Throttle)
{
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

