#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> fun(vector<int> int1, vector<int> int2){
	vector<int> temp;
	for(int i=0;i<int1.size();i++)
	{
		temp.push_back(int1[i]);
	}
	for(int i=0;i<int2.size();i++)
	{
		temp.push_back(int2[i]);
	}
	sort(temp.begin(),temp.end());
	return temp;
	
}
int main(){
	vector<int> int1;
	vector<int> int2;
	for(int i=0;i<5;i++)
	{
		int1.push_back(i+2);
	}
	for(int i=0;i<5;i++)
	{
		cout<<int1[i]<<" ";
	}
	
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		int2.push_back(i+6);
	}
	for(int i=0;i<5;i++)
	{
		cout<<int2[i]<<" ";
	}
	cout<<endl;	
	vector<int> int3=fun(int1,int2);
	for(int i=0;i<int3.size();i++)
	{
		cout<<int3[i]<<" ";
	}
	return 0;
}

