#pragma once
#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

class ShapesList
{
private:
    vector<Shape*> _list;

public:
    void AddShape(Shape & s)
    {
        _list.push_back(&s);
        cout << "Shape added to list." << endl;
    }

    void RemoveShapeBasedOnArea(double s)			// removes the first shape find in the list with area s		
    {
		int index;
		int flag = 1;
        for (auto iter = _list.begin(); iter != _list.end(); iter++) {
			if ((*iter)->GetArea() == s)
			{
				flag = 0;
				index = distance(_list.begin(), iter);
				_list.erase(iter);
                cout << "Shape on index " << index << " removed from list." << endl;
				break;
			}
		}
		if (flag == 1) {
			cout << "Could not find shape to remove." << endl;
		}
    }

	int Size()
	{
		return _list.size();
	}

	void FindShapesBasedOnArea(double a)
	{
		int index;
		for (auto iter = _list.begin(); iter != _list.end(); iter++) {
			if ((*iter)->GetArea() == a)
			{
				cout << endl << endl;
				int index = std::distance(_list.begin(), iter);
				cout << "index = " << index << endl;
				(*iter)->Draw();
				cout << endl << endl;
			}
		}
	}

	void Print()
	{
		cout << endl << endl << "Shapes List" << endl;
		for (auto iter = _list.begin(); iter != _list.end(); iter++) {
			(*iter)->Draw();
		}
	}

	struct {
		bool operator()(Shape* a, Shape* b) const
		{
			return a->GetArea() > b->GetArea();
		}
	} order;

	void Sort()
	{
		std::sort(_list.begin(), _list.end(), order);
	}

};

#endif // !SHAPESLIST_H