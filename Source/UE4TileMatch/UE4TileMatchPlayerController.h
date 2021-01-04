// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UE4TileMatchPlayerController.generated.h"

/** PlayerController class used to enable cursor */
UCLASS()
class AUE4TileMatchPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AUE4TileMatchPlayerController();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void AddScore(int32 Points);

	UFUNCTION(BlueprintPure, Category = "Game")
	int32 GetScore() const;

protected:
	UPROPERTY()
	int32 Score;
};


