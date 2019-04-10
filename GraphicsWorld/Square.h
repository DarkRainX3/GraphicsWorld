#pragma once
#include "Shape.h"
class Square :
	public Shape
{
private:
	double side_a;
public:
	Square(double x, double y, double a, char * b);
	Square(int x, int y, int a, const char[]);
	~Square();
	double area();
	double perimeter();
	void display();

	double getSideA();
	void setSideA(double a);
};

