#include <iostream>
#include <string>
using namespace std;

class User{
private:
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

int main(){
	User u=User("Jan","secret");
	cout<<u.authorize("Jan","secret")<<endl;
	return 0;
}

