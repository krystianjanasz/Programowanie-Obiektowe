#include <iostream>
#include <math.h>
using namespace std;

namespace poly{
	
class RegularPolyhedron{
private:	
	float dlugosc_bok;
	float pole_pod;
	float wysokosc;
	int ilosc_bok;
	
public:	
	RegularPolyhedron(float dlugosc_bok,int ilosc_bok,float wysokosc)
	{
		this->dlugosc_bok=dlugosc_bok;
		this->ilosc_bok=ilosc_bok;
		this->wysokosc=wysokosc;
		
		pole_pod=(pow(dlugosc_bok,2)*ilosc_bok)/(4*tan(M_PI/ilosc_bok));
	}
	virtual float volume()=0;
	
protected:	
	float getPole_pod()
	{
		return pole_pod;
	}
	float getWysokosc()
	{
		return wysokosc;
	}
	
};

class RegularPrism : public RegularPolyhedron{
public:
	RegularPrism(float dlugosc_bok,int ilosc_bok,float wysokosc) : RegularPolyhedron(dlugosc_bok,ilosc_bok,wysokosc)
	{}
	float volume()
	{
		return getPole_pod()/getWysokosc();
	}
};

class RegularPyramid : public RegularPolyhedron{
public:
	RegularPyramid(float dlugosc_bok,int ilosc_bok,float wysokosc) : RegularPolyhedron(dlugosc_bok,ilosc_bok,wysokosc)
	{}
	float volume()
	{
		return (1.0/3.0)*getPole_pod()*getWysokosc();
	}
};
};

int main(){
	poly::RegularPrism a = poly::RegularPrism(5,4,6);
	poly::RegularPyramid b = poly::RegularPyramid(5,3,8);
	cout<<a.volume()<<endl;
	cout<<b.volume()<<endl;	
	return 0;
}

