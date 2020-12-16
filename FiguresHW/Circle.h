#pragma once
#include "Point.h"
class Circle
{
public:
	Circle(const Point& center,const Point& radius);
	Circle(const int& x1, const int& y1, const int& x2, const int& y2);
	Circle() = default;
	const double getArea()const;
	const double getPerimeter()const;
	friend class Figures_Methods;
private:
	static constexpr double PI = 3.14;
	Point radius;
	Point center;
};

