#pragma once
#include <iostream>
#include "Figure.h"

class Point : public Figure
{
private:
	double x = 0;
	double y = 0;

	double P() const { return 0; };
	double S() const { return 0; };

public:
	void Print() const
	{
		printf("X: %0.2f\nY: %0.2f\n", x, y);
	}

	void SetX(double x)
	{
		this->x = x;
	}
	void SetY(double y)
	{
		this->y = y;
	}
	double GetX() const
	{
		return x;
	}
	double GetY() const
	{
		return y;
	}
};