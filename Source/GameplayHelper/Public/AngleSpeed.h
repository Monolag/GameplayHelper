// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Curves/CurveFloat.h"
#include "AngleSpeed.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYHELPER_API UAngleSpeed : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAngleSpeed();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool ShouldUpdateSpeed() const;

	float GetNewSpeed() ;

	ACharacter* Owner = nullptr;

	FVector PreviousLocation;

public:	

	UFUNCTION(BlueprintCallable, Category = "AngleSpeed")
	float GetAngleSpeed();

	UPROPERTY(EditAnywhere, Category = "AngleSpeed")
	UCurveFloat* CurveFloat = nullptr;
};
