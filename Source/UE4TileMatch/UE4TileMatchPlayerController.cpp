// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4TileMatchPlayerController.h"

AUE4TileMatchPlayerController::AUE4TileMatchPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AUE4TileMatchPlayerController::AddScore(int32 Points)
{
	Score += Points;
}

int32 AUE4TileMatchPlayerController::GetScore() const
{
	return Score;
}
