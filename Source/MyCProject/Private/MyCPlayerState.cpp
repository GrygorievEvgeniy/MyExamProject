// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCPlayerState.h"

AMyCPlayerState::AMyCPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}