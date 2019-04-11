#pragma once
#include "Shape.h"
class Square :
	virtual public Shape
{
private:
	double side_a;
public:
	Square(int x, int y, int a, const char *b);
	~Square();
	//Square(double x, double y, double a, char * b);
	//Square(Square& a);
	//Square& operator =(Square &a);

	double area();
	double perimeter();
	void display();

	double getSideA();
	void setSideA(double a);
};

