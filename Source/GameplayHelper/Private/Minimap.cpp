// Fill out your copyright notice in the Description page of Project Settings.


#include "Minimap.h"
#include "Engine/World.h"

// Sets default values
UMinimap::UMinimap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void UMinimap::BeginPlay()
{
	Super::BeginPlay();

	Server_SpawnMap();
	
}

void UMinimap::Server_SpawnMap()
{
	if (!(IsValid(Map))) return;

	auto SpawnedActor = GetWorld()->SpawnActor<AActor>(Map, FTransform(FVector(0, 0, 0)));

	Client_SpawnMap(SpawnedActor);
}

void UMinimap::Client_SpawnMap(AActor* SpawnedActor)
{
	if (!(IsValid(SpawnedActor))) return;

	auto Owner = GetOwner();
	SpawnedActor->SetOwner(Owner);

	EAttachmentRule ERule = EAttachmentRule::SnapToTarget;
	FAttachmentTransformRules Rules = { ERule, false };
	SpawnedActor->AttachToActor(Owner, Rules);

}

