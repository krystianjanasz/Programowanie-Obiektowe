#include <iostream>

using namespace std;
template <class type>
type &small(type *p, type *q)
{
	type &temp=*p;
	for(type *i=p;i!=q;i++)
	{
		if(temp>*i)
			temp=*i;
	}
	return temp;
}
int main(){
	int tab[5]={3,2,1,4,5};
	int &wsk_n=small<int>(tab,&tab[4]);
	cout<<wsk_n<<endl;
	return 0;
}

