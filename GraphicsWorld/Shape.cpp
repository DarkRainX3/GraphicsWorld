#include "pch.h"
#include "Shape.h"
#include <assert.h>
#include <iostream>
#include <string.h>
using namespace std;


//Shape::Shape(double x, double y, char * b):origin(x,y)
//{
//	double len = (double)strlen(b);// sizeof(b)/sizeof(*b);
//	//printf("%f. and %f\n", len,(double)strlen(b));
//	shapeName = new char[len+1];
//	assert(shapeName != 0 && "Fail to initialize shapeName");
//	strcpy_s(shapeName,(len+1), b);
//}

Shape::Shape(int x, int y, const char *b) :origin(x, y)
{
	delete[] shapeName;
	double len = (double)strlen(b);// sizeof(b)/sizeof(*b);
	//printf("%f. and %f\n", len, (double)strlen(b));
	shapeName = new char[len + 1];
	assert(shapeName != 0 && "Fail to initialize shapeName");
	strcpy_s(shapeName, (len + 1), b);
}

Shape::~Shape()
{
	cout << "shape dest" << shapeName << endl;
	if (shapeName) {
		delete[] shapeName;
	}
}

const Point & Shape::getOrigin()
{
	return origin;
}

const char * Shape::getName()
{
	return shapeName;
}

void Shape::display()
{
	cout << "Shape Name: "<< shapeName <<  endl;
	cout << "X-coordinate: " << origin.getX() << endl;
	cout << "Y-coordinate: " << origin.getY() << endl;
}

double Shape::distance(Shape & b)
{
	double dx = this->origin.getX() - b.origin.getX();
	double dy = this->origin.getY() - b.origin.getY();
	double dist = sqrt(pow(dx, 2) + pow(dy, 2));
	return dist;
}

double Shape::distance(Shape & a, Shape & b)
{
	double dx = a.origin.getX() - b.origin.getX();
	double dy = a.origin.getY() - b.origin.getY();
	double dist = sqrt(pow(dx, 2) + pow(dy, 2));
	return dist;
}

void Shape::move(double dx, double dy)
{
	double ox = this->origin.getX();
	double oy = this->origin.getY();
	this->origin.setX(ox + dx);
	this->origin.setY(oy + dy);
}
