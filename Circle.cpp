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

void Circle::SetProperties(double x, double y, double r)
{
	_x = x;
	_y = y;
	_r = r;
}

void Circle::SetX(double x)
{
	_x = x;
}

void Circle::SetY(double y)
{
	_y = y;
}

void Circle::SetR(double r)
{
	_r = r;
}

double Circle::GetX()
{
	return _x;
}

double Circle::GetY()
{
	return _y;
}

double Circle::GetR()
{
	return _r;
}