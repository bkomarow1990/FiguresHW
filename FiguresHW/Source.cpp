#include <iostream>
#include <initializer_list>
#include <tuple>
#include "Triangle.h"
#include "Figures_Methods.h"
#include "Rectangle.h"
using namespace std;
int main() {
	Triangle triangle1(0, 0, 5, 0, 3, 5);
	triangle1.print();
	cout << triangle1.getArea() << endl;
	cout<< triangle1.getPerimeter() << endl;
	Triangle triangle2(1,5,6,-4,-2,1);
	triangle2.print();
	cout << triangle2.getArea() << endl;
	cout << triangle2.getPerimeter() << endl;
	cout << "======Static methods======" << endl;
	cout << "======Biggest Area======" << endl;
	initializer_list<Triangle> list({Triangle(0,0,3,5,2,3),Triangle(0,5,3,10,2,3) });
	cout<<"Area1: "<<list.begin()->getArea()<<endl;
	cout<<"Area2: "<<(list.begin()+1)->getArea()<<endl;
	cout << "Biggest area: "<<endl;
	Figures_Methods::getBiggestTriangle(list).print();
	cout << "With area: ";
	cout<<Figures_Methods::getBiggestTriangle(list).getArea() << endl;
	cout << "======getCountOfFiguresWithAreaNumbersInequality======" << endl;
	initializer_list<Circle> circle_list({Circle(0,0,3,3),Circle(0,0,4,5),Circle(1,1,8,3), Circle(1,1,8,3) });
	cout << get<1>(Figures_Methods::getCountOfFiguresWithAreaNumbersInequality(1.0, initializer_list<Circle>({ Circle(0,0,3,3),Circle(0,0,4,5),Circle(1,1,8,3), Circle(1,1,8,3) }))) << endl;
	cout << get<1>(Figures_Methods::getCountOfFiguresWithAreaNumbersInequality(1.0, list)) << endl;
// i עה
	cout << "======Out info about figures list======" << endl;
	vector<Rectangle> rect_vector{Rectangle(0,0,3,3),Rectangle(2,2,10,15)};
	Figures_Methods::outInfoFigureList(rect_vector);
	return 0;

}