#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	fstream plik;
	plik.open("plik.txt",ios::in);
	if(plik.good()==false)
	{
		cout<<"Nie ma pliku."<<endl;
		exit(0);
	}
	string napis="ma";
	string wyraz;
	int licznik=0;

	return 0;
}

