#include "pch.h"
#include "Square.h"
#include <math.h>
#include <iostream>
#include "Shape.h"
#include <assert.h>
using namespace std;



Square::Square(int x, int y, int a, const char *b) : Shape(x, y, b)
{
	side_a = a;
}

Square::~Square()
{
	//cout << "sq dest" << shapeName << endl;
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
	origin.display();
}

double Square::getSideA()
{
	return side_a;
}

void Square::setSideA(double a)
{
	this->side_a = a;
}

//Square::Square(double x, double y, double a, char * b):Shape(x,y,b)
//{
//	side_a = a;
//}
//
//Square::Square(Square & a) : Shape(a.origin.getX(), a.origin.getY(), a.shapeName)
//{
//	this->side_a = a.side_a;
//}
//
//Square & Square::operator=(Square & a)
//{
//	this->side_a = a.side_a;
//	this->origin = Point(a.origin.getX(), a.origin.getY());
//	delete[] shapeName;
//	double len = (double)strlen(a.shapeName);
//	this->shapeName = new char[len + 1];
//	assert(shapeName != 0 && "Fail to initialize shapeName");
//	strcpy_s(shapeName, (len + 1), a.shapeName);
//	return *this;
//}