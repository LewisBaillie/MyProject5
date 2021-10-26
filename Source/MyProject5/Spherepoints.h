// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UCLASS()
class MYPROJECT5_API SpherePoints
{
	GENERATED_BODY();
public:
	SpherePoints();
	~SpherePoints();
	void PointProductionMaths(int numOfPoints, float GoldenRatio);

	void addPoint(float x, float y, int i);
	FVector2D points[720];
	FVector2D pointToAdd;

	float goldenRatio;
};
