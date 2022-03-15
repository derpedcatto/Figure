#pragma once
#include "Ellipse.h"

class Circle : public Ellipse
{
public:
	Circle(double x, double y, double diameter) : Ellipse(x, y, diameter, diameter) {};
};