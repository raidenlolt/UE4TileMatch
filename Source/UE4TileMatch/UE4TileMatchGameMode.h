// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4TileMatchGameMode.generated.h"

/** GameMode class to specify pawn and playercontroller */
UCLASS(minimalapi)
class AUE4TileMatchGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE4TileMatchGameMode();

	UFUNCTION(BlueprintCallable, Category="Game")
	void GameRestart();

	UFUNCTION(BlueprintCallable, Category="Game")
	void GameOver();
};
