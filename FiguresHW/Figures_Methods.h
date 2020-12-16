#pragma once
#include <iostream>
#include <vector>
#include <initializer_list>
#include <tuple>
#include "Triangle.h"
#include "Circle.h"
class Figures_Methods
{
public:
	static Triangle getBiggestTriangle(const initializer_list<Triangle> list);
	static Circle getCircleWithSmallerRadiusThanNumber(const double& num, initializer_list<Circle>& list);
	template <typename T>
	static constexpr tuple<int, int, int> getCountOfFiguresWithAreaNumbersInequality(const double &num,const initializer_list<T>& list);
	template <typename T> static void outInfoFigureList(const vector<T>& list);

private:
	friend class Figure_methods;
};

template<typename T>
inline constexpr tuple<int, int, int> Figures_Methods::getCountOfFiguresWithAreaNumbersInequality(const double& num, const initializer_list<T>& list)
{
	size_t count_more = 0;
	size_t count_smaller = 0;
	size_t count_same = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (num>(list.begin()+i)->getArea())
		{
			++count_more;
		}
		else if (num < (list.begin() + i)->getArea())
		{
			++count_smaller;
		}
		else {
			++count_same;
		}
	}
	return tuple<int, int, int>{count_more, count_smaller, count_same};
}

template<typename T>
inline void Figures_Methods::outInfoFigureList(const vector<T>& list)
{
	for (size_t i = 0; i < list.size(); i++)
	{
		(list.begin() + i)->print();
	}
}
