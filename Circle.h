#pragma once
#ifndef CIRCLE_H
#define	CIRCLE_H

#define pi 3.14
#include <iostream>

using namespace std;

class Circle
{
private:
	double _x;
	double _y;
	double _r;

	double power(double a, int b)
	{
		double res = 1;
		for (int i = 0; i < b; i++)
		{
			res *= a;
		}
		return res;
	}
public:
	Circle();														// default constructor
	Circle(double x, double y, double r);
	~Circle();														// default destructor

	double GetArea();
	void Draw();
};



#endif // !CIRCLE_H