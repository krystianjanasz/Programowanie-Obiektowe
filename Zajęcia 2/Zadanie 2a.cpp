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
	void move(float a, float b)
	{
		x=getX()+a;
		y=getY()+b;
	}
};

int main()
{
	Point p=Point(3,4);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	p.move(4,3);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;
	return 0;
}

