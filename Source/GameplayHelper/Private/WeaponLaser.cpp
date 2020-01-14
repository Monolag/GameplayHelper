// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponLaser.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
UWeaponLaser::UWeaponLaser()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponLaser::BeginPlay()
{
	Super::BeginPlay();

	auto Owner = GetOwner();

}

void UWeaponLaser::TraceLaser()
{
	if (!(IsValid(DecalClass)) || !bOn) return;
	bool bCameraValid = IsValid(OwnerComponent);

	FVector TraceStart = { 0, 0, 0 }, TraceEnd = {0, 0, 0};
	FVector OriginLocation = { 0, 0, 0 };

	if (bCameraValid) {
		if (Socket != "Null") {
			OriginLocation = OwnerComponent->GetSocketLocation(Socket);
		}
		else {
			OriginLocation = OwnerComponent->GetComponentLocation();
		}
		TraceStart = FVector(OriginLocation);
		FVector GetVector = UseRightVector ? OwnerComponent->GetRightVector() : OwnerComponent->GetForwardVector();
		TraceEnd = FVector(OriginLocation + GetVector * TraceLength);
	}
	else {
		OriginLocation = GetOwner()->GetActorLocation();
		TraceStart = FVector(OriginLocation);
		TraceEnd = FVector(OriginLocation + GetOwner()->GetActorForwardVector() * TraceLength);
	}

	FHitResult OutHit;
	FCollisionQueryParams CollisionParams;

	if (GetWorld()->LineTraceSingleByChannel(OutHit, TraceStart, TraceEnd, ECC_Visibility, CollisionParams)) {
		if (OutHit.bBlockingHit) {
			FVector HitLocation = OutHit.Location;
			FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(OriginLocation, HitLocation);
			FActorSpawnParameters SpawnParams;
			GetWorld()->SpawnActor<AActor>(DecalClass, FTransform(Rotation, HitLocation, DecalScale), SpawnParams);
		}

	}
}


// Called every frame
void UWeaponLaser::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TraceLaser();
}

void UWeaponLaser::ToggleLaser()
{
	bOn = !bOn;
}

void UWeaponLaser::SetState(bool On)
{
	this->bOn = On;
}

bool UWeaponLaser::GetState() const
{
	return bOn;
}

void UWeaponLaser::InitializeLaserComponent(USceneComponent * Component)
{
	if (IsValid(Component)) {
		OwnerComponent = Component;
	}
}

