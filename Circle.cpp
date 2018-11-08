#include "Circle.h"


Circle::Circle() {}														// default constructor
Circle::Circle(double x, double y, double r) :_x(x), _y(y), _r(r) {}
Circle::~Circle() {}													// default destructor

double Circle::GetArea()
{
	return pi*power(_r, 2);
}

void Circle::Draw()
{
	cout << "***************************" << endl;
	cout << "This is a circle as below:" << endl;
	cout << "radius : " << _r << "	" << "center : (" << _x << "," << _y << ")" << endl;
	cout << "***************************" << endl;
}
