#include <iostream>
#include <vector>

using namespace std;

class Point{
private:
	float x;
	float y;
public:
	Point(float x, float y) : x(x), y(y)
	{}
	float getX(){
		return x;
	}
	float getY(){
		return y;
	}
};

vector <Point> fun(vector<Point>& v, Point lg, Point pd){
	vector <Point> temp;
	for(int i=0; i<v.size();i++)
	{
		if(v[i].getX() >= lg.getX() && v[i].getX() <= pd.getX())
		{
			if(v[i].getY() <= lg.getY() && v[i].getY() >= pd.getY())
			temp.push_back(v[i]);
		}
	}
	return temp;
}
int main(){
	vector<Point> wektor;
	wektor.push_back(Point(1.1, 1.1));
	wektor.push_back(Point(2.0, 2.0));
	wektor.push_back(Point(0.5, 3.1));
	wektor.push_back(Point(4.0, 3.4));
	wektor.push_back(Point(4.0, 5.5));
	
	vector <Point> wynik = fun(wektor,Point(0.0,4.0),Point(4.0,0.0));
	for(int i=0; i<wynik.size();i++)
	{
		cout<<wynik[i].getX()<<" "<<wynik[i].getY()<<endl;
	}
	return 0;
}

