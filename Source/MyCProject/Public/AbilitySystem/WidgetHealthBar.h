// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidgetBlueprint.h"
#include "WidgetHealthBar.generated.h"

/**
 * 
 */
UCLASS()
class MYCPROJECT_API UWidgetHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	class AMyCProjectCharacter* OwningCharacter;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float HealthPercentage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetManaPercentage(float ManaPercentage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetShieldPercentage(float ShieldPercentage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCharacterName(const FText& NewName);
};
