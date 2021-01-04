// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UE4TileMatchBlock.generated.h"

namespace EBlockState
{
	enum Type
	{
		EBS_Normal,
		EBS_Falling,
		EBS_PendingDelete,
	};
}

UENUM(BlueprintType)
namespace EMoveType
{
	enum Type
	{
		MT_None,
		MT_Failure,
		MT_Standard,
		MT_MoreTiles,
	};
}

/** A block that can be clicked */
UCLASS(minimalapi)
class AUE4TileMatchBlock : public AActor
{
	GENERATED_BODY()

	/** Dummy root component */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	/** StaticMesh component for the clickable block */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BlockMesh;

public:
	AUE4TileMatchBlock();

	/** Are we currently active? */
	bool bIsActive;
	
	/** Grid that owns us */
	UPROPERTY()
	class AUE4TileMatchBlockGrid* OwningGrid;

	/** Handle the block being clicked */
	UFUNCTION()
	void BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);

	/** Handle the block being touched  */
	UFUNCTION()
	void OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);

	void HandleClicked();

	void Highlight(bool bOn);

	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }
	/** Returns BlockMesh subobject **/
	FORCEINLINE class UStaticMeshComponent* GetBlockMesh() const { return BlockMesh; }

};



