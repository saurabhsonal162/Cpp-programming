#include<iostream>
using namespace std;
class demo
{ 
private:
	int x,y;
	public:
	void value(int a,int b)//without return type with arguments
	{
		//int z=a+b;//correct
		x=a;
		y=b;
	}
	void sum()
	{
	int z=x+y;
	cout<<"sum is "<<z;
	}
		
		};
		main()
		{
			demo d;
		//	d.value();//error
			d.value(10,20);
		}
