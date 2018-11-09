#include <iostream>
#include "ShapesList.h"

using namespace std;

int main()
{
	Circle c(2, 3, 4);
	Triangle t(3, 4);
	Rectangle r(6, 5);

	ShapesList _shapes;
	_shapes.AddShape(c);
	_shapes.AddShape(t);
	_shapes.AddShape(r);

//	_shapes.Print();
	_shapes.Sort();
//	_shapes.Print();

	_shapes.FindShapesBasedOnArea(30);
	_shapes.RemoveShapeBasedOnArea(30);
	_shapes.Print();

	return 0;
}