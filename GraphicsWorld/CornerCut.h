#pragma once
#include "Circle.h"
#include "Rectangle.h"
class CornerCut :
	public Circle, public Rectangle
{
private:

public:
	CornerCut();
	~CornerCut();
};

