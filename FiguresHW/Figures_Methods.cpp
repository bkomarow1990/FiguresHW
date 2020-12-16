#include "Figures_Methods.h"

Triangle Figures_Methods::getBiggestTriangle(const initializer_list<Triangle> list)
{
    Triangle max = *(list.begin());
	for (int i = 1; i < list.size(); i++)
	{
		if (max.getArea()<(list.begin()+i)->getArea())
		{
			max = *(list.begin() + i);
		}
	}
    return max;
}

Circle Figures_Methods::getCircleWithSmallerRadiusThanNumber(const double& num, initializer_list<Circle>& list)
{
	for (size_t i = 0; i < list.size(); i++)
	{
	
		if (distance((list.begin()+i)->center,(list.begin()+i)->radius)<num)
		{
			return *(list.begin() + i);
		}
			Circle circle;
			return circle;
	}
}
