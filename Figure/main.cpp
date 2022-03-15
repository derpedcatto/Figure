#include <iostream>
#include "FigureList.h"

// https://github.com/sunmeat/oop/blob/master/Inheritance7.h
// https://github.com/sunmeat/oop/blob/master/Inheritance9.h

int main()
{
	srand(time(0));
	printf("-------------POINT-------------\n\n");

	Point point;
	point.Print();

	printf("\n-------------LINE--------------\n\n");

	Line line(3, 2, 5, 6);
	line.Print();

	printf("\n\n------------ELLIPSE------------\n\n");

	Ellipse ellipse(3, 4, 10, 20);
	ellipse.Print();

	printf("\n------------CIRCLE-------------\n\n");

	Circle circle(1,1,10);
	circle.Print();

	printf("\n------------POLYGON------------\n\n");
	
	Polygon polygon(4);
	polygon.ModifyPoint(0, 0, 0);
	polygon.ModifyPoint(1, -1, 2);
	polygon.ModifyPoint(2, 5, 4);
	polygon.ModifyPoint(3, 6, 1);
	polygon.Print();
	
	printf("\n------------TRIANGLE-----------\n\n");
	
	Triangle triangle;
	triangle.ModifyPoint(0, 0, 0);
	triangle.ModifyPoint(1, 2, 0);
	triangle.ModifyPoint(2, 1, 1);
	triangle.Print();
	printf("Angles:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d: %0.2f\n", i, triangle.GetAngle(i));
	}

	printf("\n---------QUADRILATERAL----------\n\n");

	Quadrilateral quadrilateral;
	quadrilateral.ModifyPoint(0, 0, 0);
	quadrilateral.ModifyPoint(1, 0, 2);
	quadrilateral.ModifyPoint(2, 1, 1);
	quadrilateral.ModifyPoint(3, 0, 1);
	quadrilateral.Print();

	printf("\n---------PARALLELOGRAM----------\n\n");

	Parallelogram parallelogram;
	parallelogram.ModifyPoint(0, 0, 0);
	parallelogram.ModifyPoint(1, 3, 0);
	parallelogram.ModifyPoint(2, 4, 2);
	parallelogram.ModifyPoint(3, 1, 2);
	std::cout << std::boolalpha << parallelogram.CheckValidity() << "\n";

	printf("\n-----------RECTANGLE------------\n\n");

	Rectangle rectangle;
	rectangle.ModifyPoint(0, 0, 0);
	rectangle.ModifyPoint(1, 5, 0);
	rectangle.ModifyPoint(2, 5, 3);
	rectangle.ModifyPoint(3, 0, 3);
	std::cout << std::boolalpha << rectangle.CheckValidity() << "\n";

	printf("\n------------SQUARE--------------\n\n");

	Square square;
	square.ModifyPoint(0, 0, 0);
	square.ModifyPoint(1, 2, 0);
	square.ModifyPoint(2, 2, 2);
	square.ModifyPoint(3, 0, 2);
	std::cout << std::boolalpha << square.CheckValidity() << "\n";

	printf("\n------------RHOMBUS-------------\n\n");

	Rhombus rhombus;
	rhombus.ModifyPoint(0, 0, 0);
	rhombus.ModifyPoint(1, 2, -2);
	rhombus.ModifyPoint(2, 4, 0);
	rhombus.ModifyPoint(3, 2, 2);
	std::cout << std::boolalpha << rhombus.CheckValidity() << "\n";

	printf("\n----------TRAPEZOID-------------\n\n");

	Trapezoid trapezoid;
	trapezoid.ModifyPoint(0, 0, 0);
	trapezoid.ModifyPoint(1, 5, 0);
	trapezoid.ModifyPoint(2, 4, 3);
	trapezoid.ModifyPoint(3, 1, 3);
	std::cout << std::boolalpha << trapezoid.CheckValidity() << "\n";

	printf("\n-----------DELTOID--------------\n\n");
	
	Deltoid deltoid;
	deltoid.ModifyPoint(0, 0, 0);
	deltoid.ModifyPoint(1, 3, 4);
	deltoid.ModifyPoint(2, 0, 6);
	deltoid.ModifyPoint(3, -3, 4);
	std::cout << std::boolalpha << deltoid.CheckValidity() << "\n";
}