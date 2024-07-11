#include<iostream>
using namespace std;
class shape
{
	public:
		int l1,l2;
	virtual	void parameter()
		{
			cout<<"enter the value to calculate parameter: ";
			cin>>l1>>l2;
		}
	virtual	void area()
		{
			cout<<"\nenter the value to calculate Area : ";
			cin>>l1>>l2;
		}
};
class square:public shape
{
	public:
		void parameter()
		{
			cout<<"parameter of square is :"<<4*l1;
		}
		void area()
		{
			cout<<"area of square is : "<<l1*l2;
		}
};
class rectangle:public shape
{
	public:
		void parameter()
		{
			cout<<"parameter of rectangle is :"<<2*(l1+l2);
		}
		void area()
		{
			cout<<"area of rectangle is : "<<l1*l2;
		}
};
main()
{
	shape *ptr;
	shape s;
	s.parameter();
	s.area();
	square s1;
	rectangle r;
	ptr=&s1;
	ptr->parameter();
	ptr->area();
	ptr=&r;
	ptr->parameter();
	ptr->area();
	
}

