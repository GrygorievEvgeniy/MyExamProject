// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MyCAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class MYCPROJECT_API UMyCAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UMyCAttributeSet();

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	// Holds the current value for Health.
	UPROPERTY()
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMyCAttributeSet, Health);

	// Holds the value for Maximum Health.
	UPROPERTY()
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMyCAttributeSet, MaxHealth);

protected:

	UFUNCTION()
	virtual void OnRep_CurrentHealth(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaximumHealth(const FGameplayAttributeData& OldValue);

};
