#pragma once
#include <cmath>
#include "Polygon.h"

class Triangle : public Polygon
{
public:
	Triangle() : Polygon(3) {};

    double GetAngle(int index) const
    {
        int a2 = pow(GetLength(GetX(1), GetY(1), GetX(2), GetY(2)), 2);
        int b2 = pow(GetLength(GetX(0), GetY(0), GetX(2), GetY(2)), 2);
        int c2 = pow(GetLength(GetX(0), GetY(0), GetX(1), GetY(1)), 2);

        double a = sqrt(a2);
        double b = sqrt(b2);
        double c = sqrt(c2);

        double alpha = acos((b2 + c2 - a2) / (2 * b * c));
        double beta = acos((a2 + c2 - b2) / (2 * a * c));
        double gamma = acos((a2 + b2 - c2) / (2 * a * b));

        switch (index)
        {
        case 0:
            return alpha * 180 / 3.14159;
        case 1:
            return beta * 180 / 3.14159;
        case 2:
            return gamma * 180 / 3.14159;
        }
    }
};

/*My formula is broken? and there are other problems, so i hope realization doesn't matter*/

//-------------------------------------------------------// ACUTE

class TriangleScaleneAcute : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Scalene Acute Triangle\n");
    }
};
class TriangleIsoscelesAcute : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Isosceles Acute Triangle\n");
    }
};
class TriangleEquilateralAcute : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Equilateral Acute Triangle\n");
    }
};

//-------------------------------------------------------// OBTUSE

class TriangleScaleneObtuse : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Scalene Obtuse Triangle\n");
    }
};
class TriangleIsoscelesObtuse : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Isosceles Obtuse Triangle\n");
    }
};

//-------------------------------------------------------// RIGHT

class TriangleScaleneRight : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Scalene Right Triangle\n");
    }
};
class TriangleIsoscelesRight : public Triangle
{
public:
    void PrintTriangleName()
    {
        printf("Isosceles Right Triangle\n");
    }
};