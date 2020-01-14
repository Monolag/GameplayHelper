// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "TrackControl.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPLAYHELPER_API UTrackControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTrackControl();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void TrackControl(USceneComponent* Component);

	TArray<USceneComponent*> Components;

	void DrawDecals();

public:	

	UPROPERTY(EditAnywhere, Category = "Variables")
	FVector DecalSize = FVector(70.f, 45.f, 38.f);

	UPROPERTY(EditAnywhere, Category = "Variables")
	FRotator DecalRotation;

	UPROPERTY(EditAnywhere, Category = "Variables")
	float LifeSpanTime = 20;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<AActor> DecalClass;

	UPROPERTY(EditAnywhere, Category = "Setup")
	FVector DecalScale = FVector(1, 1, 1);

	UPROPERTY(EditAnywhere, Category = "Setup")
	float DrawTime = 1.0f;

	UFUNCTION(BlueprintCallable, Category = "Initialize")
	void Initialize(TArray<USceneComponent*> inComponents);

};
