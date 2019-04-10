#include "pch.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(double x, double y, double a, double b, char * c):Square(x,y,a,c)
{
	side_b = b;
}

Rectangle::~Rectangle()
{
}

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
	cout << "X-coordinate: " << origin.getX() << endl;
	cout << "Y-coordinate: " << origin.getY() << endl;
}
