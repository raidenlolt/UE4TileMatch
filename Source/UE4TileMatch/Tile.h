// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UENUM()
namespace ETileState
{
	enum Type
	{
		Normal,
		Falling,
		PendingDelete,
	};
}

UENUM(BlueprintType)
namespace ETileMoveType
{
	enum Type
	{
		None,
		Failure,
		Standard,
	};
}


UCLASS()
class UE4TILEMATCH_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent, Category = "Special Game Events")
	void OnMatched(ETileMoveType::Type MoveType);

	UFUNCTION()
	void TileEnter(ETouchIndex::Type FingerIndex, AActor* TouchedActor);

};
