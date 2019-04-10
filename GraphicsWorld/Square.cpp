#include "pch.h"
#include "Square.h"
#include <math.h>
#include <iostream>
#include "Shape.h"
using namespace std;

Square::Square(double x, double y, double a, char * b):Shape(x,y,b)
{
	side_a = a;
}

Square::Square(int x, int y, int a, const char[]) : Shape(x, y, b)
{
}

Square::~Square()
{
}

double Square::area()
{
	return pow(side_a, 2);
}

double Square::perimeter()
{
	return (4*side_a);
}

void Square::display()
{
	cout << "Square Name: " << shapeName << endl;
	cout << "X-coordinate: " << origin.getX() << endl;
	cout << "Y-coordinate: " << origin.getY() << endl;
}

double Square::getSideA()
{
	return side_a;
}

void Square::setSideA(double a)
{
	this->side_a = a;
}
