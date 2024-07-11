#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample()//default
		{
			a=10;
			b=20;
		}
		sample(int x,int y)//parameterised
		{
			a=x;
			b=y;
		}
		sample(sample &s2)//copy constructor
		{
			a=s2.a;
			b=s2.b;
		}
		void display()
		{
			cout<<"\na="<<a<<"\t"<<"b="<<b;
		}
};
main()
{
	sample s;//calling default const
	s.display();
	sample s1(100,200);//calling parameterised
	s1.display();
	sample s3(s);//calling copy constructor
	s3.display();
	sample s4(s1);
	s4.display();
}
