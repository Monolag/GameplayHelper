// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "WeaponLaser.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYHELPER_API UWeaponLaser : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponLaser();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool bOn = true;

	void TraceLaser();

	USceneComponent* OwnerComponent = nullptr;

	float TraceLength = 1500.0f;

	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
	FName Socket = TEXT("None");

	UPROPERTY(EditAnywhere, Category = "Setup")
	bool UseRightVector = false;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<AActor> DecalClass;

	UPROPERTY(EditAnywhere, Category = "Setup")
	FVector DecalScale = FVector(0.3, 0.3, 0.3);

	UFUNCTION(BlueprintCallable, Category = "Laser")
	void ToggleLaser();

	UFUNCTION(BlueprintCallable, Category = "Laser")
	void SetState(bool On);

	UFUNCTION(BlueprintCallable, Category = "Laser")
	bool GetState() const;

	UFUNCTION(BlueprintCallable, Category = "Laser")
	void InitializeLaserComponent(USceneComponent* Component);
};
