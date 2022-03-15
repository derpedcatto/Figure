#pragma once
#include "Polygon.h"

class Quadrilateral : public Polygon
{
public:
	Quadrilateral() : Polygon(4) {}

	double S() const
	{
		double semiP = P();
		return sqrt((semiP - GetLength(0, 1)) * 
					(semiP - GetLength(1, 2)) * 
					(semiP - GetLength(2, 3)) * 
					(semiP - GetLength(3, 0)));
	}
};

class Parallelogram : public Quadrilateral
{
public:
	bool CheckValidity() const
	{
		if (CompareSides(0, 1, 3, 2) == true && CompareSides(0, 3, 1, 2) == true)
			return true;
		return false;
	}
};

class Rectangle : public Parallelogram
{
public:
	bool CheckValidity() const
	{
		if (Parallelogram::CheckValidity() == true)
		{
			if (GetX(0) == GetX(3) && GetX(1) == GetX(2))
				return true;
			return false;
		}
		return false;
	}

};

class Square : public Rectangle
{
public:
	bool CheckValidity() const
	{
		if (Rectangle::CheckValidity() == true)
		{
			if (GetX(1) == GetY(2))
				return true;
		}
		return false;
	}
};

class Rhombus : public Parallelogram
{
public:
	bool CheckValidity() const
	{
		if (Parallelogram::CheckValidity() == true)
		{
			if ((GetX(1) == GetX(3) && GetY(0) == GetY(2)) || (GetX(0) == GetX(2) && GetY(1) == GetY(3)))
				return true;
		}
		return false;
	}
};

class Trapezoid : public Quadrilateral
{
public:
	bool CheckValidity() const
	{
		if ((GetY(0) == GetY(1) && GetY(2) == GetY(3)) || (GetX(0) == GetX(1) && GetX(2) == GetX(3)))
			return true;
		return false;
	}
};

class Deltoid : public Quadrilateral
{
public:
	bool CheckValidity() const
	{
		if ((GetX(0) == GetX(2) && GetY(1) == GetY(3)) || (GetY(0) == GetY(2) && GetX(1) == GetX(3)))
			return true;
		return false;
	}
};