#include "pch.h"
#include "CornerCut.h"
#include <iostream>
#include <assert.h>


CornerCut::CornerCut(double x, double y, double w, double l, double r, const char *b):Circle(x,y,r,b), Rectangle(x,y,w,l,b), Shape(x,y,b)
{
	assert(r <= w && "Raidus bigger than width!! Now Exiting");
}


CornerCut::~CornerCut()
{
}

void CornerCut::display()
{
	printf("CornerCut Name: %s\n", Circle::shapeName);
	Circle::origin.display();
	printf("Width: %.3f \nLength: %.3f \n", this->getSideA(), this->getSideB());
	printf("Radius of the cut: %.3f\n", this->getR());
}

double CornerCut::area()
{
	double sq = getSideA()*getSideB();
	double circ = Circle::area();
	return (sq-(1/4.0)*circ);
}

double CornerCut::perimeter()
{
	double sq = 2*getSideA()+2*getSideB()-2*getR();
	double circ = (1 / 4.0)*Circle::perimeter();
	return (sq+circ);
}

const char * CornerCut::getName()
{
	return Circle::shapeName;
}

double CornerCut::distance(Shape & b)
{
	return Circle::distance(b);
}
