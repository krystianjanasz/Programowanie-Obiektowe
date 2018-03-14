#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string napis;
	cout<<"Prosze podac napis:"<<endl;
	getline(cin,napis);
	int dlugosc=napis.length();
	
	char pierwsza='z';
	char ostatnia='a';
	for(int i=0;i<dlugosc-1;i++)
	{
		if(napis[i]>ostatnia && napis[i]!=' ') ostatnia=napis[i];
		if(napis[i]<pierwsza && napis[i]!=' ') pierwsza=napis[i];
	}
	cout<<"Najwczesniejsza litera alfabetu w tym napisie to: "<<pierwsza<<endl;
	cout<<"Najpozniejsza litera alfabetu w tym napisie to: "<<ostatnia<<endl;
	return 0;
}

