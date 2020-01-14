// Fill out your copyright notice in the Description page of Project Settings.


#include "LookAround.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
ULookAround::ULookAround()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


bool ULookAround::Auth()
{
	return GetOwner() == UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

FRotator ULookAround::GetControlRotation()
{
	return Owner->GetControlRotation();
}


void ULookAround::StartLookAround()
{
	RememberRotation = GetControlRotation();
	UpdateControlRotation(true);
	bLookingAround = true;
	Owner->bUseControllerRotationYaw = false;
}

void ULookAround::StopLookAround()
{
	UpdateControlRotation(false);
	bLookingAround = false;
	Owner->GetController()->SetControlRotation(RememberRotation);
	Owner->bUseControllerRotationYaw = true;
}

void ULookAround::UpdateControlRotation(bool UseRotation)
{
	if (IsValid(SpringArm)) {
		auto SpringArmRef = Cast<USpringArmComponent>(Owner->GetComponentByClass(SpringArm));
		SpringArmRef->bUsePawnControlRotation = UseRotation;
	}
}

// Called when the game starts
void ULookAround::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<APawn>(GetOwner());
	
}

bool ULookAround::GetLookingAround() const
{
	return bLookingAround;
}


