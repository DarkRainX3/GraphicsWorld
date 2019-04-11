#pragma once
#include "Circle.h"
#include "Rectangle.h"
class CornerCut :
	public Circle, public Rectangle
{
private:

public:
	CornerCut(double x, double y, double w, double l, double r, const char *b);
	//CornerCut(CornerCut & a);
	//CornerCut & operator=(CornerCut &a);
	~CornerCut();

	void display();
	double area();
	double perimeter();
	const char* getName();
	double distance(Shape& b);
};

