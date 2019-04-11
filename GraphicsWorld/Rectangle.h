#pragma once
#include "Square.h"
class Rectangle :
	public Square
{
private:
	double side_b;
public:
	Rectangle(double x, double y, double a, double b, const char * c);
	~Rectangle();
	//Rectangle(double x, double y, double a, double b, char * c);
	//Rectangle(Rectangle &r);
	//Rectangle& operator =(Rectangle &a);

	double area();
	double perimeter();
	void display();

	double getSideB() { return side_b; }
	void setSideB(double a) { side_b = a; }
};

