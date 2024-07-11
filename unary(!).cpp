// overload the unary ! operator
#include<iostream>>
using namespace std;
class demo
{
	int x,y,z;
	public:
	demo(int a, int b, int c)
	{
		x=a;
		y=b;
		z=c;
	}
	demo()
	{
		x=10;
		y=20;
		z=30;
	}
	void operator !() 
		{ 
			x=!x; 
			y=!y; 
			z=!z;
		}
	void show() 
		{ 
			cout<<x<<"\t"<<y<<"\t"<<z<<endl; 
		} 
};
main()
{
	demo d1(); 
	d1.show(); 
	!d1;
	d1.show();
}
