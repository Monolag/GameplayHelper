// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBlock.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UWeaponBlock::UWeaponBlock()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponBlock::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<ACharacter>(GetOwner());

	Camera = Cast<UCameraComponent>(Owner->GetComponentByClass(CameraClass));
	
}


void UWeaponBlock::CalculateBlock()
{
	TArray<FHitResult> OutHit;
	FVector Start, End;
	GetLineTrace(Start, End);
	if (GetWorld()->LineTraceMultiByChannel(OutHit, Start, End, ECC_Visibility)) {
		for (auto hit : OutHit) {
			if (hit.bBlockingHit) {
				CurrentDistance = ChangeBlockingDistance(hit.Distance);
				Blocking = true;
			}
		}
	}
	else {
		Unblock();
	}
}

void UWeaponBlock::Unblock()
{
	CurrentDistance = FMath::FInterpTo(CurrentDistance, 0, UGameplayStatics::GetWorldDeltaSeconds(this) , 8);
	Blocking = false;
}

void UWeaponBlock::GetLineTrace(FVector & Start, FVector & End)
{
	if (Owner->GetMesh()->DoesSocketExist(HeadSocket)) {
		Start = Owner->GetMesh()->GetSocketLocation(HeadSocket);
	}
	else {
		Start = Owner->GetActorLocation();
	}
	End = (Camera->GetForwardVector() * DistanceToBlock) + Start;
}

float UWeaponBlock::ChangeBlockingDistance(float value)
{
	auto MappedValue = FMath::GetMappedRangeValueClamped(FVector2D(0, DistanceToBlock + 65), FVector2D(1.5, -0.5), value);
	return FMath::FInterpTo(CurrentDistance, MappedValue, UGameplayStatics::GetWorldDeltaSeconds(this), 8);
}

// Called every frame
void UWeaponBlock::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsValid(Owner) && IsValid(Camera)) {
		CalculateBlock();
	}
	else {
		Unblock();
	}
}

bool UWeaponBlock::GetBlockingState(float & Distance) const
{
	Distance = this->CurrentDistance;
	return Blocking;
}



