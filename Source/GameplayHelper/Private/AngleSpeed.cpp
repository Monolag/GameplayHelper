// Fill out your copyright notice in the Description page of Project Settings.


#include "AngleSpeed.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UAngleSpeed::UAngleSpeed()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UAngleSpeed::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<ACharacter>(GetOwner());
	
	PreviousLocation = Owner->GetActorLocation();
}

bool UAngleSpeed::ShouldUpdateSpeed() const
{
	auto isActive = true;
	bool res = !(Owner->GetCharacterMovement()->IsFalling()) && !(Owner->GetVelocity().Equals(FVector(0,0,0), 1));
	return res;
}

float UAngleSpeed::GetNewSpeed() 
{
	auto Angle = UKismetMathLibrary::FindLookAtRotation(PreviousLocation, Owner->GetActorLocation()).Pitch;
	auto Speed = CurveFloat->GetFloatValue(Angle);
	PreviousLocation = Owner->GetActorLocation();
	return Speed;
}

float UAngleSpeed::GetAngleSpeed() 
{
	if (!(IsValid(CurveFloat)) || !(IsValid(Owner))) return 1.0f;

	auto AngleSpeed = GetNewSpeed();
	auto Result = 0.0f;

	if (AngleSpeed < 0) {
		Result = abs(AngleSpeed) / 100 + 1;
	}
	else {
		Result = 1 - (AngleSpeed / 100);
	}

	Result = FMath::Clamp(Result, 0.15f, 3.0f);

	return Result;
}

