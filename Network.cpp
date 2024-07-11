#include<iostream>
using namespace std;
class person
{
	public:
		char name[20];
		int code;
		void getdata()
		{
			cout<<"enter the name and code: ";
			cin>>name>>code;
		}
		void putdata()
		{
			cout<<"\nentered name was: "<<name;
			cout<<"\nentered code was: "<<code;
		}
};
class admin:virtual public person
{
	public:
		int experience;
		void getdata()
		{
			cout<<"\nenter the experience details: ";
			cin>>experience;
		}
		void putdata()
		{
			cout<<"\nexperience entered: "<<experience;
		}
};
class account:virtual public person
{
	public:
		int pay;
		void getdata()
		{
			cout<<"\nenter pay amount: ";
			cin>>pay;
		}
		void putdata()
		{
			cout<<"\npay is: "<<pay;
		}
};
class master:public admin, public account
{public:
	void display()
	{
		cout<<"\nThe name is: "<<name<<" Code: "<<code<<" Total experience: "<<experience<<" Pay entered: "<<pay;
	}
	
};
main()
{
	master m;
	m.person::getdata();
	m.admin::getdata();
	m.account::getdata();
	m.display();
}
