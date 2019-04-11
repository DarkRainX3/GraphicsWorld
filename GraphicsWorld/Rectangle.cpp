#include "pch.h"
#include "Rectangle.h"
#include <iostream>
#include <assert.h>
using namespace std;


//Rectangle::Rectangle(double x, double y, double a, double b, char * c):Square(x,y,a,c)
//{
//	side_b = b;
//}

Rectangle::Rectangle(double x, double y, double a, double b, const char * c) : Square(x, y, a, c), Shape(x,y,c)
{
	side_b = b;
}

Rectangle::~Rectangle()
{
	//cout << "rect dest" <<shapeName<< endl;
}

//Rectangle::Rectangle(Rectangle & r) : Square(r.origin.getX(), r.origin.getY(), r.getSideA(), r.shapeName)
//{
//	//cout << "cpy cons" << endl;
//	side_b = r.side_b;
//}
//
//Rectangle & Rectangle::operator=(Rectangle & a)
//{
//	//cout << "=operator" << endl;
//	this->side_b = a.side_b;
//	this->setSideA(a.getSideA());
//	this->origin = Point(a.origin.getX(), a.origin.getY());
//	delete[] shapeName;
//	double len = (double)strlen(a.shapeName);
//	this->shapeName = new char[len + 1];
//	assert(shapeName != 0 && "Fail to initialize shapeName");
//	strcpy_s(shapeName, (len + 1), a.shapeName);
//	
//	return *this;
//}

double Rectangle::area()
{
	//TODO
	return getSideA()*side_b;
}

double Rectangle::perimeter()
{
	return (2*Square::getSideA()+2*side_b);
}

void Rectangle::display()
{
	cout << "Rectangle Name: " << shapeName << endl;
	origin.display();
	//cout << "X-coordinate: " << origin.getX() << endl;
	//cout << "Y-coordinate: " << origin.getY() << endl;
}
