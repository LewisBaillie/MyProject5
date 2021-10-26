// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePoints.h"
#include "SpherePoints.generated.h"


SpherePoints::SpherePoints()
{
	int numOfPoints = 720;
	goldenRatio = (1 + sqrt(5)) / 2;
	PointProductionMaths(numOfPoints, goldenRatio);
}

SpherePoints::~SpherePoints()
{
}


void SpherePoints::PointProductionMaths(int numOfPoints, float GoldenRatio)
{
	for (int i = 0; i < numOfPoints; i++)
	{
		float distance = i / (numOfPoints - 1.0f);
		float angle = 2 * PI * GoldenRatio * i;

		float x = distance * cos(angle);
		float y = distance * sin(angle);
		addPoint(x, y, i);
	}
}

void SpherePoints::addPoint(float x, float y, int i)
{
	pointToAdd.Set(x, y);
	points[i] = pointToAdd;
}
