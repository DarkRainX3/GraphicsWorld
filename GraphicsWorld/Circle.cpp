#include "pch.h"
#include "Circle.h"
#include <math.h>
#include <iostream>
#include <assert.h>
using namespace std;


Circle::Circle(double x, double y, double r, const char*b):Shape(x,y,b)
{
	radius = r;
}

Circle::Circle(Circle & a): Shape(a.origin.getX(),a.origin.getY(),a.shapeName)
{
	this->radius = a.radius;
}

Circle & Circle::operator=(Circle & a)
{
	this->radius = a.radius;
	this->origin = Point(a.origin.getX(), a.origin.getY());
	delete[] shapeName;
	double len = (double)strlen(a.shapeName);
	this->shapeName = new char[len + 1];
	assert(shapeName != 0 && "Fail to initialize shapeName");
	strcpy_s(shapeName, (len + 1), a.shapeName);
	return *this;
}


Circle::~Circle()
{
	//cout << "circ dest" << endl;
}

void Circle::display()
{
	cout << "Circle Name: " << shapeName << endl;
	origin.display();
	/*cout << "X-coordinate: " << origin.getX() << endl;
	cout << "Y-coordinate: " << origin.getY() << endl;*/
}

double Circle::perimeter()
{
	return (2*3.14*radius);
}

double Circle::area()
{
	return (3.14*pow(radius,2));
}
