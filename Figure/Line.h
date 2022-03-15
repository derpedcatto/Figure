#pragma once
#include "Point.h"

class Line : public Figure
{
private:
	Point a;
	Point b;

	double P() const { return 0; }
	double S() const { return 0; }

public:
	Line(double x1, double y1, double x2, double y2)
	{
		a.SetX(x1);
		a.SetY(y1);
		b.SetX(x2);
		b.SetY(y2);
	}

	void Print() const
	{
		printf("Point 1 (%0.2f, %0.2f)\nPoint 2 (%0.2f, %0.2f)\nDistance: %0.2f",
				a.GetX(), a.GetY(), b.GetX(), b.GetY(), GetLength());
	}
	double GetLength() const
	{
		return sqrt(pow(b.GetX() - a.GetX(), 2) + pow(b.GetY() - a.GetY(), 2) * 1.0);
	}
};