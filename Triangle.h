#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Shape.h"

using namespace std;

class Triangle: protected Shape
{
private:
	double _height;
	double _base;
public:
	Triangle();
	
	Triangle(double h, double b);

	~Triangle();

	void SetProperties(double h, double b);

	void SetBase(double b);

	void SetHeight(double h);

	double GetBase();

	double GetHeight();

	double GetArea();

	void Draw();
};

#endif // !TRIANGLE_H