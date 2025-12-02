// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spell_Actions.h"
#include "Engine/DataAsset.h"
#include "Spell_Data_Asset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CHAP_YOU_ARPG_API USpell_Data_Asset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
	TArray<USpell_Actions*> Actions;
};
