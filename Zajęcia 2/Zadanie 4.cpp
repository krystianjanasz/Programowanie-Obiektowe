#include <iostream>
#include <math.h>

using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y)
	{
		this->x=x;
		this->y=y;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	void move(Point t)
	{
		x=getX()+t.getX();
		y=getY()+t.getY();
	}
};

float d(Point p1, Point p2)//musia³em nazwaæ j¹ "d" poniewa¿, gdy nazywa³¹ siê "distance" wywala³o b³¹d.
{
	return sqrt(pow((p1.getX()-p2.getX()),2.0)+pow((p1.getY()-p2.getY()),2.0));
}

int main()
{
	Point p=Point(3,4);
	Point t=Point(5,5);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	p.move(t);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	cout<<"odleglosc = "<<d(p,t)<<endl;
	return 0;
}

