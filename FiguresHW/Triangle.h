#pragma once
#include "Point.h"
class Triangle
{
public:
	Triangle(const Point& leftBottom, const Point& rightBottom,const Point& frontTop)
		: leftBottom(leftBottom), rightBottom(rightBottom), frontTop(frontTop){

	}
	Triangle(int x1, int y1, int x2, int y2,int x3,int y3)
		:leftBottom(x1, y1), rightBottom(x2, y2), frontTop(x3,y3)
	{}
	Triangle() = default;
	void print()const {
		cout << "Triangle" << endl;
		cout << "LeftBottom: ";
		leftBottom.print();
		cout << "Right Bottom: ";
		rightBottom.print();
		cout << "Front: ";
		frontTop.print();
		
	}
	const double getArea()const;
	const double getPerimeter()const;
private:
	Point leftBottom, rightBottom, frontTop;
};

