// Fill out your copyright notice in the Description page of Project Settings.

#include "TrackControl.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
UTrackControl::UTrackControl()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UTrackControl::BeginPlay()
{
	Super::BeginPlay();

	auto Owner = GetOwner();

	FTimerHandle FadeTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(FadeTimerHandle, this, &UTrackControl::DrawDecals, DrawTime, true);
}


void UTrackControl::TrackControl(USceneComponent* Component)
{
	bool FirstBillboardValid = IsValid(Component);
	FVector TraceStart = { 0,0,0 }, TraceEnd = { 0,0,0 };

	if (FirstBillboardValid)
	{
		TraceStart = FVector((Component->GetComponentLocation() + Component->GetUpVector() * 500));
		TraceEnd = FVector((Component->GetComponentLocation()) + Component->GetUpVector() * (-500));
		FActorSpawnParameters SpawnParams;
	}

	FHitResult OutHit;
	FCollisionQueryParams CollisionParams;

	if (GetWorld()->LineTraceSingleByChannel(OutHit, TraceStart, TraceEnd, ECC_Visibility, CollisionParams)) {
		if (OutHit.bBlockingHit) {
			FVector HitLocation = OutHit.ImpactPoint;
			FRotator Rotation = FRotator(Component->GetComponentRotation());
			FActorSpawnParameters SpawnParams;
			GetWorld()->SpawnActor<AActor>(DecalClass, FTransform(Rotation, HitLocation, DecalScale), SpawnParams);
		}
	}
}

void UTrackControl::DrawDecals()
{
	for (auto Component : Components) {
		if (IsValid(Component)) {
			TrackControl(Component);
		}
	}
}

void UTrackControl::Initialize(TArray<USceneComponent*> inComponents) { Components = inComponents; }