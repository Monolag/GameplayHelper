// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeaponBlock.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYHELPER_API UWeaponBlock : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponBlock();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UCameraComponent* Camera = nullptr;

	ACharacter* Owner = nullptr;

	void CalculateBlock();

	bool Blocking = false;

	float CurrentDistance = 0.0f;

	void Unblock();

	void GetLineTrace(FVector& Start, FVector& End);

	float ChangeBlockingDistance(float value);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<UCameraComponent> CameraClass;

	UPROPERTY(EditAnywhere, Category = "Setup")
	FName HeadSocket = TEXT("head");

	UPROPERTY(EditAnywhere, Category = "Setup")
	float DistanceToBlock = 70.0f;

	UFUNCTION(BlueprintCallable, Category = "WeaponBlock")
	bool GetBlockingState(float& Distance) const;

};
