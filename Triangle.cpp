#include "Triangle.h"

Triangle::Triangle() {}
	
Triangle::Triangle(double h, double b)
{
    _height = h;
    _base = b;
}

Triangle::~Triangle() {}

void Triangle::SetProperties(double h, double b)
{
    _height = h;
    _base = b;
}

void Triangle::SetBase(double b)
{
    _base = b;
}

void Triangle::SetHeight(double h)
{
    _height = h;
}

double Triangle::GetBase()
{
    return _base;
}

double Triangle::GetHeight()
{
    return _height;
}

double Triangle::GetArea()
{
    return (_base*_height)/2;
}

void Triangle::Draw()
{
    cout << "***************************" << endl;
	cout << "This is a triangle as below:" << endl;
	cout << "height : " << _height << "	" << "base : " << _base << endl;
	cout << "***************************" << endl;
}