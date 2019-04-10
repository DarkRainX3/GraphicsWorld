#include "pch.h"
#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;


Circle::Circle(double x, double y, double r, const char*b):Shape(x,y,b)
{
	radius = r;
}


Circle::~Circle()
{
	cout << "circ dest" << endl;
}

void Circle::display()
{
	cout << "Circle Name: " << shapeName << endl;
	cout << "X-coordinate: " << origin.getX() << endl;
	cout << "Y-coordinate: " << origin.getY() << endl;
}

double Circle::perimeter()
{
	return (2*3.14*radius);
}

double Circle::area()
{
	return (3.14*pow(radius,2));
}
