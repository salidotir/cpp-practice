#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Shape
{
private:
	double	_area;
public:
	virtual double FindArea() = 0;
	virtual	void Draw() = 0;
};

#endif // !SHAPE_H