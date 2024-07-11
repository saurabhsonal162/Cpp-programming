//FUNCTION OVERRIDING(run time polymorphsim)
#include<iostream>
using namespace std;
class Parent
{
	public:
	void show()
	{
		cout<<"\nBase Class Function";
	}
};
class Child:public Parent
{
	public:
		void show()//function overriding
		{
			cout<<"\nChild class function";
			Parent::show();//call to parent class function
		}
};
main()
{
	Child c;
	c.show();
	c.Parent::show();//calling function of parent class using object of child class
	Parent p;
	p.show();//function of parent class
}
