// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "LookAround.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYHELPER_API ULookAround : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULookAround();

protected:

	bool bLookingAround = false;

	APawn* Owner;

	bool Auth();

	FRotator RememberRotation;

	FRotator CurrentRotation;

	FRotator GetControlRotation();

	void UpdateControlRotation(bool UseRotation);

	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintCallable, Category = "LookAround")
	bool GetLookingAround() const;

	UFUNCTION(BlueprintCallable, Category = "LookAround")
	void StartLookAround();

	UFUNCTION(BlueprintCallable, Category = "LookAround")
	void StopLookAround();
		
	UPROPERTY(EditAnywhere, Category = "LookAround")
	TSubclassOf<USpringArmComponent> SpringArm;
};
