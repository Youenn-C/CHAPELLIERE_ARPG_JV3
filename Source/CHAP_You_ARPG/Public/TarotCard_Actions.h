// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TarotCard_Actions.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew, Abstract)
class CHAP_YOU_ARPG_API UTarotCard_Actions : public UObject
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerCardEffect(APlayerController* PlayerController);
};
