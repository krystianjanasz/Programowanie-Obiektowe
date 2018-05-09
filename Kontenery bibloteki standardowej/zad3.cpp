#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void fun(list<string>::iterator i1, list<string>::iterator i2){
	for(list<string>::iterator it=i1;it!=i2;it++){
		cout<<*it<<endl;
	}
}

int main(){
	list<string> lista;
	lista.push_back("nom");
	lista.push_back("tak");
	lista.push_back("nie");
	lista.push_back("chyba");
	lista.push_back("na pewno");
	
	list<string>::iterator i1=lista.begin();
	list<string>::iterator i2=lista.end();
	advance(i1,1);
	advance(i2,-1);
	fun(i1,i2);
	return 0;
}

