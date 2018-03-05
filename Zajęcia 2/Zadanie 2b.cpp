#include <iostream>

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

int main()
{
	Point p=Point(3,4);
	Point t=Point(5,5);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	p.move(t);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	return 0;
}

