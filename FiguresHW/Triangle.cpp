#include "Triangle.h"

const double Triangle::getArea() const
{
    double a = distance(leftBottom, frontTop);
    double b = distance(rightBottom, frontTop);
    double c = distance(leftBottom, rightBottom);
    double p = (a + b + c) / 2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    return S;
}

const double Triangle::getPerimeter() const
{
    return  distance(leftBottom, frontTop)+ distance(rightBottom, frontTop)+ distance(leftBottom, rightBottom);
}
