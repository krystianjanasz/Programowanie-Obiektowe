#include <iostream>
#include <string>

using namespace std;

int main(){
	string napis1="Ala ma kota";
	string napis2="Ala";
	string napis3="Tomek";
	cout<<napis1<<endl;
	
	size_t pozycja=napis1.find(napis2);
	int n2l=napis2.length();
	napis1.replace(pozycja,n2l,napis3);

	cout<<napis1<<endl;
	return 0;
}

