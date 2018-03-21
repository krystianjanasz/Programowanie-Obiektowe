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

int main(){
	User u=User("Jan","secret");
	cout<<u.authorize("Jan","secret")<<endl;
	cout<<endl;
	Student s=Student("Kamil","secret",3);
	return 0;
}
