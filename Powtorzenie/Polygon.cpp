#include <iostream>

using namespace std;

class Polygon{
public:
	struct Point{
		float x;
		float y;
	};
private:
	Point *array;
	int size=4;
	int inside=0;
public:
	Polygon()
	{
		array= new Point[size];
		inside=0;
	}
	Polygon(int n)
	{
	
		size = (n%4>0) ? (n-n%4+4) : n;
	  	array=new Point[size];
		inside=0;  
	}
	
	int getSize()
	{
		return size;
	}
	
	int getInside()
	{
		return inside;
	}
	Polygon(const Polygon &polygon)
	{
		size = polygon.size;
		inside = polygon.inside;
		for(int i=0; i<size; i++)
		{
			array[i]=polygon.array[i];
		}
	}
	~Polygon()
	{
		cout<<"hasta la vista"<<endl;
	}
	void addPoint(Point point)
	{
		if(inside<size)
		{
			array[inside]=point;
			inside++;
			cout<<"W tablicy znajduje sie "<<inside<<" elemetow."<<endl;
		}
		else
		{
			size+=4;
			array=new Point[size];
			cout<<"zwiekszono rozmiar tablicy o 4 miejsca."<<endl;
		}
	}
	Polygon::Point &reference(int index)
	{
		return array[index];
	}
};


int main(){
	Polygon p1=Polygon();
	cout<<p1.getSize()<<endl;
	p1.addPoint(Polygon::Point{1,2});
	p1.addPoint(Polygon::Point{3,4});
	p1.addPoint(Polygon::Point{5,6});
	p1.addPoint(Polygon::Point{7,8});
	p1.addPoint(Polygon::Point{9,10});
	p1.addPoint(Polygon::Point{11,12});
	cout<<&p1.reference(1)<<endl;
	cout<<&p1.reference(1)<<endl;
	cout<<&p1.reference(3)<<endl;
	cout<<&p1.reference(2)<<endl;
	return 0;
}

