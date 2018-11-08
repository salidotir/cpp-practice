#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle: protected Shape
{
private:
	double _length;
	double _width;
public:
	Rectangle();
	
	Rectangle(double l, double w);

	~Rectangle();

	void SetProperties(double l, double w);

	void SetWidth(double w);

	void SetLength(double l);

	double GetLength();

	double GetWidth();

	double GetArea();

	void Draw();
};

#endif // !RECTANGLE_H