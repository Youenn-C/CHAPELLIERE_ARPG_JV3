// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Spell_Actions.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew, Abstract)
class CHAP_YOU_ARPG_API USpell_Actions : public UObject
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Launch(APlayerController* PlayerRef);
};
