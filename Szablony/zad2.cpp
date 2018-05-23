#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <class type>
type &small(type *p, type *q)
{
	type temp=*p;
	for(type *i=p;i!=q;i++)
	{
		if(temp>*i)
			temp=*i;
	}
	return temp;
}
template<>
string &small<string>(string *p, string *q)
{
	string *temp=p;
	for(string *i=p;i!=q;i++)
	{
		
	}	
	return *temp;
}
int main(){
	int tab[5]={3,2,1,4,5};
	int &wsk_n=small<int>(tab,&tab[4]);
	cout<<wsk_n<<endl;
	
	float tab2[5]={3.5,2.2,1.9,4.1,4.2};
	float &wsk_nf=small<float>(tab2,&tab2[4]);
	cout<<wsk_nf<<endl;
	
	string tab3[4]={"ja","jo","ik","aa"};
	string &wsk_ns=small<string>(tab3,&tab3[3]);
	cout<<wsk_ns<<endl;
	return 0;
}
