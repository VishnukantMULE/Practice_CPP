// Encapsulation

// Encapsulation means binding data and method withing a class provide
// control over the accessability and it prevents external code from
// directly modifying internal data of an object



#include<bits/stdc++.h>
using namespace std;
class person
{
private:
	string name="vishnukant";
	int age;
public:
	void getName()
	{
		cout<<"Name is :"<<name<<endl;
	}
	int setage(int ag)
	{
		age=ag;
		cout<<"age set is " <<age<<endl;
		return 0;
	}
};
int main()
{
	person vishnu;
	vishnu.getName();
	vishnu.setage(21);

	return 0;
}
