// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Minimap.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAMEPLAYHELPER_API UMinimap : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UMinimap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	//UFUNCTION(Server, Reliable, WithValidation)
	void Server_SpawnMap();

	//UFUNCTION(NetMulticast, Unreliable)
	void Client_SpawnMap(AActor* SpawnedActor);

	UPROPERTY(EditAnywhere, Category="Minimap")
	TSubclassOf<AActor> Map;
};
