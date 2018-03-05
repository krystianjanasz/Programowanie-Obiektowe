#include <iostream>
#include <math.h>
#include "triangle.h"

using namespace std;

int main()
{
	Triangle t=Triangle(Point(-3,1),Point(0,-2),Point(2,4));
	cout<<"Pole:"<<t.area()<<endl;
	cout<<"Obwod: "<<t.perimeter()<<endl;
	return 0;
}

