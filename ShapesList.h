#pragma once
#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <iostream>
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
    void AddShape(Shape* s)
    {
        _list.push_back(s);
        cout << "Shape added to list." << endl;
    }

    void RemoveShape(Shape* s)
    {
        for (auto iter = _list.begin(); iter != _list.end(); iter++) {
			if (*iter == s) {
				iter = find(_list.begin(), _list.end(), *s);
				_list.erase(iter);
                cout << "Shape removed from list." << endl;
				return;
			}
		}
        cout << "Could not find shape to remove." << endl;
    }

	int Size()
	{
		return _list.size();
	}

	int FindShape(Shape* s)
	{
		auto iter = find(_list.begin(), _list.end(), *s);
	}

	void Print()
	{
		cout << "Shapes List" << endl << endl;
		for (auto iter = _list.begin(); iter != _list.end(); iter++) {
			(*iter)->Draw();
		}
	}

	void Sort()
	{
		for (auto iter1 = _list.begin()+1; iter1 != _list.end(); iter1++) {
			for (auto iter2 = _list.begin()+1; iter2 != _list.end(); iter2++) {
				if ((*iter2)->FindArea() > (*(iter2 + 1))->FindArea()) {
					Shape* tmp = *iter1;
					*iter1 = *iter2;
					*iter2 = tmp;
				}
			}
		}
	}
};

#endif // !SHAPESLIST_H