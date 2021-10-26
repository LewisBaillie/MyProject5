// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spherepoints.generated.h"
/**
 * 
 */
UCLASS()
class MYPROJECT5_API Spherepoints
{
	GENERATED_BODY()
public:
	Spherepoints();
	~Spherepoints();
	void PointProductionMaths(int numOfPoints, float GoldenRatio);

	void addPoint(float x, float y, int i);
	FVector2D points[720];
	FVector2D pointToAdd;

	float goldenRatio;
};
