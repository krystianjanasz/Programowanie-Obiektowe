#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y) : x(x) ,y(y)
	{}
	float getX(){
		return x;
	}
		
	float getY(){
		return y;
	}
	~Point()
	{}

};

bool sortX(Point p, Point p2) {
	return p.getX() < p2.getX();
}

bool sortY(Point p, Point p2) {
	return p.getY() < p2.getY();
}

int main(){
	vector<Point> v;
	Point p(7,9);
	Point p2(2,5);
	v.push_back(p);
	v.push_back(p2);
	sort(v.begin(), v.end(), sortX);
	sort(v.begin(), v.end(), sortY);
	
	for (int i = 0; i < v.size(); i++){
		cout<<v[i].getX()<<" "<<v[i].getY()<<endl;
	}
	return 0;
}

