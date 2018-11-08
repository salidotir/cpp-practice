#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(double l, double w)
{
	if (l > w)
	{
		_length = l;
		_width = w;
	}
	else {
		cout << "Width can not be less than length. Failed to make instance." << endl;
	}
}

Rectangle::~Rectangle() {}

void Rectangle::SetProperties(double l, double w)
{
	if (l > w) {
		_length = l;
		_width = w;
	}
	cout << "Width can not be less than length. Could not set property." << endl;
}

void Rectangle::SetWidth(double w)
{
	if(w < _length)
	{
		_width = w;
		return;
	}
	cout << "Width can not be less than length. Could not set width." << endl;
}

void Rectangle::SetLength(double l)
{
	if(l > _width){
		_length = l;
		return;
	}
	cout << "Width can not be less than length. Could not set length." << endl;
}

double Rectangle::GetLength()
{
	return _length;
}

double Rectangle::GetWidth()
{
	return _width;
}

double Rectangle::GetArea()
{
	return _length*_width;
}

void Rectangle::Draw()
{
	cout << "***************************" << endl;
	cout << "This is a rectangle as below:" << endl;
	cout << "length : " << _length << "	" << "width : " << _width << endl;
	cout << "***************************" << endl;
}