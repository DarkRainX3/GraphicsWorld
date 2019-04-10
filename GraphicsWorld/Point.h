#pragma once
class Point
{
private:
	double x;
	double y;
	int id;
	static int _id;
	static int _count;
public:
	Point(double x, double y);
	Point(Point *a);
	~Point();
	Point& operator =(const Point &a);

	static double distance(Point& a, Point& b);
	void display();
	int counter();
	double distance(const Point& a);

	double getX() { return x; }
	double getY() { return y; }
	void setX(double x) { Point::x = x; }
	void setY(double y) { Point::y = y; }
};

