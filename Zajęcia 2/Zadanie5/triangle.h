#include "point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
	Point a;
	Point b;
	Point c;
public:
	Triangle(Point a, Point b, Point c);
	float d(Point p1, Point p2);
	float perimeter();
	float area();
};

#endif // POINT_H
