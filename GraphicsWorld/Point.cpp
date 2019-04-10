#include "pch.h"
#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;

int Point::_id = 1001;
int Point::_count = 0;

Point::Point(double x, double y)
{
	++_count;
	id = _id++;
	this->x = x;
	this->y = y;
}

Point::Point(Point * a)
{
	this->x = a->getX();
	this->y = a->getY();
	++_count;
	id = _id++;
}


Point::~Point()
{
	--_count;
}

Point & Point::operator=(const Point & a)
{
	x = a.x;
	y = a.y;
	return *this;
}

double Point::distance(Point& a, Point& b)
{
	double dx = a.getX() - b.getX();
	double dy = a.getY() - b.getY();
	double dist = sqrt(pow(dx, 2) + pow(dy, 2));
	return dist;
}

void Point::display()
{
	cout << "X-coordinate: " << x << endl;
	cout << "Y-coordinate: " << y << endl;
	cout << "ID: " << id << endl;
}

int Point::counter()
{
	return _count;
}

double Point::distance(const Point& a)
{
	double dx = this->x - a.x;
	double dy = this->y - a.y;
	double dist = sqrt(pow(dx, 2) + pow(dy, 2));
	return dist;
}
