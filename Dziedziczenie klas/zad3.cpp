#include <iostream>
#include <string>
using namespace std;

class User{
protected:
		string login;
		string password;
public:
		User(string login, string password)
		{
			this->login=login;
			this->password=password;
		}
		bool authorize(string log, string pass)
		{
			if(log==login && pass==password)
				return true;
			else 
				return false;
		}
};

class Student : public User {
private:
	int semestr;
public:
	Student(string login, string password, int semestr)
	: User(login,password), semestr(semestr)
	{}

};

class Subject
{
private:
	string nazwa;
	int max_s;
	Student *stu[100];
	int ile=0;
public:
	Subject(string nazwa, int max_s)
	{
		this->nazwa=nazwa;
		this->max_s=max_s;
	}
	bool addStudent(Student *s)
	{
		if(ile<max_s)
		{
			stu[ile]=s;
			ile++;
			return true;
		}
		else
			return false;
	}

};

int main(){
	User u=User("Jan","secret");
	cout<<u.authorize("Jan","secret")<<endl;
	cout<<endl;
	Student s=Student("Kamil","secret",3);
	Subject sub=Subject("Przyrka",4);
	for(int i=0;i<5;i++)
	{
		cout<<sub.addStudent(&s);
	}
	return 0;
}
