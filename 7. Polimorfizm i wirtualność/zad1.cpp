#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person{
private:
	string name;
public:
	Person(string name){
		this->name=name;
	}
	string ident(){
		return name;
	}
	string getName(){
		return name;
	}
};

class Teacher : public Person{
private:
	string title;
public:
	Teacher(string name,string title) : Person(name) , title(title)
	{}
	string ident(){
	return getName()+" "+title;
	}
};

class Student : public Person{
public:
	int semestr;
	Student(string name,int semestr) : Person(name) , semestr(semestr)
	{}
	string ident(){
	return getName()+" "+to_string(semestr);
	}
};
int main(){
	Teacher t=Teacher("kopa","prof");
	cout<<t.ident()<<endl;
	return 0;
}

