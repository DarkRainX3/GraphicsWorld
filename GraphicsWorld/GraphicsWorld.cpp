// GraphicsWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
using namespace std;
void run() {
	// =================================== PART 1 =======================================
	cout << "\nThis program has been written by: student name(s).";
	cout << "\nSubmitted at: 11:00 pm, February 3 , 2008\n";
	cout << "\nTesting Functions in class Point:" << endl;
	Point m(6, 8);
	Point n(6, 8);
	n.setX(9);
	m.display();
	n.display();
	cout << "\nThe distance between two points m and n is: " << m.distance(n);
		// Testing the second version of the function distance.
		// Put the necessary code in this place
	cout << "\nTesting Functions in class Square:" << endl;
	Square s(5, 7, 12, "SQUARE - S");
	s.display();
	cout << "the area of " << s.getName() << " is: " << s.area() << "\n";
	cout << "the perimeter of " << s.getName() << " is: " << s.perimeter() << "\n";
	cout << "\nTesting Functions in class Rectangle:" << endl;
	Rectangle a(5, 7, 12, 15, "RECTANGLE A");
	a.display();
	Rectangle b(16, 7, 8, 9, "RECTANGLE B");
	b.display();
	cout << "the area of " << a.getName() << " is: " << a.area() << "\n";
	cout << "the perimeter of " << a.getName() << " is: " << a.perimeter() << "\n";
	double d = a.distance(b);
	cout << "\nThe distance between two rectangles is: " << d;
	cout << "\nTesting copy constructor in class Rectangle:" << endl;
	Rectangle rec1 = a;
	rec1.display();
	cout << "\nTesting assignment operator in class Rectangle:" << endl;
	Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
	rec2 = a;
	rec2.display();
	cout << "\nTesting Functions in class Circle:" << endl;
	Circle c(3, 5, 9, "CIRCLE C");
	c.display();
	cout << "the area of " << c.getName() << " is: " << c.area() << endl;
	cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
	d = a.distance(c);
	cout << "\nThe distance between rectangle a and circle c is: " << d;
	// YOU MAY ADD ADDITIONAL CODE HERE, IF NEEDED
}

int main()
{
	//Point a = Point(12, 13);
	//Point b = Point(15, 1);
	//a.setX(55);
	//b.setY(44);
	//a.display();
	//b.display();
	//cout << b.getX() << endl;
	//Point c = Point(1,2);
	//c.display();
	//Point *d = new Point(11,14);
	//d->setX(99);
	//d->display();
	//cout << d->counter() << " " << b.counter() << endl;
	//delete(d);
	//cout << Point::distance(a,b) <<" "<< a.distance(&b)<<endl;
	//Point e = Point(1,1);
	//e = a;
	//e.display();
	//cout << a.counter() << " "<<b.counter()<<endl;
	//*******************************************************************//
	char r[] = "imsquare";
	char f[] = "rectangle";
	Square s = Square(1.0, 1.0,6.0, r);
	s.display();
	s.move(4, -5);
	s.display();
	printf("%s + area is: %f perimeter is: %f\n",s.getName(),s.area(),s.perimeter());
	Rectangle re = Rectangle(1.0, 1.0, 1.0, 7.0, f);
	re.display();
	printf("%s + area is: %f perimeter is: %f\n", re.getName(), re.area(), re.perimeter());
	Point temp = re.getOrigin();
	temp.display();
	//*******************************************************************//

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
