#pragma once
#include "Shape.h"
class Circle :
	virtual public Shape
{
private:
	double radius;
public:
	Circle(double x, double y, double r, const char*b);
	Circle(Circle & a);
	Circle& operator =(Circle & a);
	~Circle();

	void display();
	double perimeter();
	double area();
	double getR() { return radius; }
	void setR(double r) { Circle::radius = r; }
};

