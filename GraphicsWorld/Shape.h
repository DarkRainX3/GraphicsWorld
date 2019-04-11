#pragma once
#include "Point.h"
#include <stdlib.h>
#include <string.h>

class Shape
{
protected:
	Point origin;
	char * shapeName;
	void copy(const Shape& s);
	void destroy();
public:
	//Shape(double x, double y, char * b);
	Shape(double x, double y, const char *b);
	Shape(Shape&a);
	Shape& operator=(Shape&a);
	~Shape();

	virtual void display();
	double distance(Shape& b);
	static double distance(Shape& a, Shape& b);
	void move(double dx, double dy);

	virtual double area() = 0;
	virtual double perimeter() = 0;

	const Point & getOrigin();
	const char* getName();
};

