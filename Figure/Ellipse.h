#pragma once
#include "Line.h"

const double PI = 3.14159;

class Ellipse : public Figure
{
private:
	Point center;
	double diameterX;
	double diameterY;

public:
	Ellipse(double x, double y, double dX, double dY)
	{
		center.SetX(x);
		center.SetY(y);
		diameterX = dX;
		diameterY = dY;
	}

	void Print() const
	{
		printf("Center (%0.2f, %0.2f)\n", center.GetX(), center.GetY());
		printf("Diameter X: %0.2f\n", diameterX);
		printf("Diameter Y: %0.2f\n", diameterY);
		printf("Perimeter: %0.2f\n", P());
		printf("Area: %0.2f\n", S());
	}

	double P() const
	{
		double a = diameterX / 2;
		double b = diameterY / 2;

		return 2 * 3.14159 * sqrt((a * a + b * b) / (2 * 1.0));
	}
	double S() const
	{
		double a = diameterX / 2;
		double b = diameterY / 2;

		return 3.14159 * a * b;
	}

	double GetDiameterX() const
	{
		return diameterX;
	}
	double GetDiameterY() const
	{
		return diameterY;
	}
};