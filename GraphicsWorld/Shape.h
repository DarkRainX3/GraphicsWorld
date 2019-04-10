#pragma once
#include "Point.h"
#include <stdlib.h>
#include <string.h>

class Shape
{
protected:
	Point origin;
	char * shapeName;
public:
	//Shape(double x, double y, char * b);
	Shape(double x, double y, const char *b);
	~Shape();
	const Point & getOrigin();
	const char* getName();
	virtual void display();
	double distance(Shape& b);
	static double distance(Shape& a, Shape& b);
	void move(double dx, double dy);
	virtual double area() = 0;
	virtual double perimeter() = 0;
};

