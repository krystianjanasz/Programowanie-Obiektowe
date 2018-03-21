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
		string getLogin()
		{
			return login;
		}
};

class Student : public User{
private:
	int semestr;
	int indeks;
public:
	Student(string login, string password, int semestr,int indeks)
	: User(login,password), semestr(semestr) ,indeks(indeks)
	{}
	int	getIndeks()
	{
		return indeks;
	}

};

class Subject{
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
/*	int sprawdzarka10k(Student s,bool p)	To nie dzia�a.
	{
		for(int i=0;i<max_s;i++)
		{
			if(s.getIndeks()==stu[i]->getIndeks())
			{
				Student &referencja_stu=stu[i];
				p=true;
				break;
			}
			else
			{
				p=false;
				return 42;
			}
		}

	}
*/
};

int main(){
	User u=User("Jan","secret");
	cout<<u.authorize("Jan","secret")<<endl;
	cout<<endl;
	Student s=Student("Kamil","secret",3,10);
	Subject sub=Subject("Przyrka",4);
	sub.addStudent(&s);
	bool p;
//	cout<<sub.sprawdzarka10k(s,p)<<endl;
	return 0;
}
