#include "Circle.h"

Circle::Circle(const Point& center, const Point& radius)
	:center(center),radius(radius)
{
}

Circle::Circle(const int& x1, const int& y1,const int& x2,const int& y2)
	:center(x1,y1),radius(x2,y2)
{
}

const double Circle::getArea() const
{
	return PI*pow(distance(center,radius),2);
}

const double Circle::getPerimeter() const
{
	return abs(distance(center,radius))*PI;
}
