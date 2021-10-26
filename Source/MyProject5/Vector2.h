// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MYPROJECT5_API Vector2
{
public:
	Vector2();
	~Vector2();

	float x;
	float y;

	Vector2(float xVal, float yVal);

	void Set(float xVal, float yVal);
};
