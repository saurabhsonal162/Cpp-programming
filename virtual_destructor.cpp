#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"\nBase Constructor";
		}
		virtual ~Base()
		{
			cout<<"\nBase Destroyed";
		}
};
class Child1:public Base
{
	public:
		Child1()
		{
			cout<<"\nCHILD-1 Created";
		}
		~Child1()
		{
			cout<<"\nCHILD-1 Destroyed";
		}
};
class Child2:public Child1
{
	public:
		Child2()
		{
			cout<<"\nI m CHILD-2";
		}
		~Child2()
		{
			cout<<"\nCHILD-2 destroyed";
		}
};
main()
{
	Base *ptr;
	ptr=new Child2;
	cout<<"\nend of program";
	delete ptr;
}
