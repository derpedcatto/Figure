#pragma once
#include "Point.h"

class Polygon : public Figure
{
private:
	int size;
	Point* arr;

public:
	Polygon()
	{
		size = 5;
		arr = new Point[size];
	}
	Polygon(int newsize)
	{
		size = newsize;
		arr = new Point[size];
	}

	void Print() const
	{
		printf("P: %0.2f\nS: %0.2f\n", P(), S());
		printf("Sides:\n");
		for (int i = 0; i < size - 1; i++)
		{
			printf("%d: %0.2f\n", i, GetLength(arr[i].GetX(), arr[i].GetY(), arr[i + 1].GetX(), arr[i + 1].GetY()));
		}
		printf("%d: %0.2f\n", size - 1, GetLength(arr[size - 1].GetX(), arr[size - 1].GetY(), arr[0].GetX(), arr[0].GetY()));
	}
	double P() const
	{
		double P = 0;

		for (int i = 0; i < size - 1; i++)
		{
			P += GetLength(arr[i].GetX(), arr[i].GetY(), arr[i + 1].GetX(), arr[i + 1].GetY());
		}

		/*Last + first point*/
		P += GetLength(arr[size - 1].GetX(), arr[size - 1].GetY(), arr[0].GetX(), arr[0].GetY());

		return P;
	}
	double S() const
	{
		double S = 0;
		int j = size - 1;

		for (int i = 0; i < size; i++)
		{
			S += (arr[j].GetX() + arr[i].GetX()) * (arr[j].GetY() - arr[i].GetY());
			j = i;
		}

		return abs(S / 2.0);
	}

	void ModifyPoint(int index, int x, int y)
	{
		arr[index].SetX(x);
		arr[index].SetY(y);
	}
	
	bool CompareSides(int i1, int i2, int i3, int i4) const
	{
		if (GetLength(arr[i1].GetX(), arr[i1].GetY(), arr[i2].GetX(), arr[i2].GetY()) ==
			GetLength(arr[i3].GetX(), arr[i3].GetY(), arr[i4].GetX(), arr[i4].GetY()))
			return true;
		return false;
	}
	double GetLength(double x1, double y1, double x2, double y2) const
	{
		return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
	}
	double GetLength(int i1, int i2) const
	{
		return GetLength(arr[i1].GetX(), arr[i1].GetY(), arr[i2].GetX(), arr[i2].GetY());
	}

	double GetX(int index) const
	{
		return arr[index].GetX();
	}
	double GetY(int index) const
	{
		return arr[index].GetY();
	}

	~Polygon()
	{
		if (arr != nullptr) delete arr;
	}
};