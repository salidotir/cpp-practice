#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
private:
	double _length;
	double _width;
public:
	Rectangle();
	Rectangle(double l, double w)
	{
		if (l > w)
		{
			_length = l;
			_width = w;
		}
		else {
			cout << "Width can not be less than length. Please try again." << endl;
			Rectangle::~Rectangle();
		}
	}
	~Rectangle();

	void SetProperties()
	{
		double l;
		double w;
		int flag = 1;
		while (flag == 1)
		{
			cout << "PLease enter length : ";
			cin >> l;
			cout << endl;
			cout << "Please enter width : ";
			cin >> w;
			if (l > w) {
				flag = 0;
				_length = l;
				_width = w;
			}
			else {
				cout << "Width can not be less than length. Please try again." << endl;
			}
		}
	}

	

	double GetArea()
	{
		return _length*_width;
	}

	void Draw()
	{
		cout << "***************************" << endl;
		cout << "This is a rectangle as below:" << endl;
		cout << "length : " << _length << "	" << "width : " << _width << endl;
		cout << "***************************" << endl;
	}
};



#endif // !RECTANGLE_H