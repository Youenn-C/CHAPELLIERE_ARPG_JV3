// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TarotCard_Actions.h"
#include "Engine/DataAsset.h"
#include "TarotCard_Data_Asset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CHAP_YOU_ARPG_API UTarotCard_Data_Asset : public UPrimaryDataAsset
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
	TArray<UTarotCard_Actions*> Effects;
};
