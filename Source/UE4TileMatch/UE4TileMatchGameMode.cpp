// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4TileMatchGameMode.h"
#include "UE4TileMatchPlayerController.h"
#include "UE4TileMatchPawn.h"
#include "Kismet/GameplayStatics.h"

AUE4TileMatchGameMode::AUE4TileMatchGameMode()
{
	// no pawn by default
	DefaultPawnClass = AUE4TileMatchPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AUE4TileMatchPlayerController::StaticClass();
}

void AUE4TileMatchGameMode::GameRestart()
{
	const FName LevelName(*UGameplayStatics::GetCurrentLevelName(this,true));
	UGameplayStatics::OpenLevel(this, LevelName);
}


void AUE4TileMatchGameMode::GameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Over"));
}
