#include "triangle.h"
#include <math.h>

Triangle::Triangle(Point a, Point b, Point c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}

float Triangle::d(Point p1, Point p2)
{
	return sqrt(pow((p1.getX()-p2.getX()),2.0)+pow((p1.getY()-p2.getY()),2.0));
}

float Triangle::perimeter()
{
	return d(a,b)+d(a,c)+d(b,c);
}

float Triangle::area()
{
	float p=perimeter()/2;
	return sqrt(p*(p-d(a,b))*(p-d(b,c))*(p-d(a,c)));
}

