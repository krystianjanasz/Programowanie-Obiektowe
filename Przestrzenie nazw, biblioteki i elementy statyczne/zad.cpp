#include <iostream>

using namespace std;

namespace pt{
	
class Point{
private:
	int x;
	int y;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	
	Point ()
	{
		this->x=0;
		this->y=0;
	}
	Point(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
};
}

class Point3D : public pt::Point{
private:
	int z;
public:
	int getZ()
	{
		return z;
	}
	
	Point3D()
	{
		this->z=0;
	}
	Point3D(int x, int y, int z) : pt::Point(z,y), z(z)
	{}
};

class Polygon{
public:
	pt::Point *array;
	int size;
public:
	Polygon(int size)
	{
		this->size=size;
		array = new pt::Point[this->size];
	}
	static Polygon triangle(pt::Point p1, pt::Point p2, pt::Point p3)
	{
		Polygon t=Polygon(3);
		t.array[0]=p1;
		t.array[1]=p2;
		t.array[2]=p3;
		return t;
	}
};

int main(){
	Point3D p3d=Point3D();
	pt::Point p1=pt::Point();
	pt::Point p2=pt::Point();
	pt::Point p3=pt::Point();
	Polygon q=Polygon(4);
	Polygon t=q.triangle(p1,p2,p3);
	cout<<p3d.getX()<<" "<<p3d.getY()<<" "<<p3d.getZ()<<endl;
	return 0;
}

