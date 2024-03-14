// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MyCPlayerState.generated.h"

/**
 * 
 */

UCLASS()
class MYCPROJECT_API AMyCPlayerState : public APlayerState , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	AMyCPlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

	UPROPERTY(BlueprintReadWrite)
	UAbilitySystemComponent* AbilitySystemComponent;
	
};
