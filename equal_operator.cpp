//binary operator
#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public:
		demo()
		{
			x=0;
			y=0;
		}
		demo(int a,int b)
		{
			x=a;
			y=b;
		}
	bool	operator ==(demo dd2)
		{
			if((x==dd2.x)&&(y==dd2.y))
			return 1;
			else 
			return 0;
		}
};
main()
{
	demo d1(2,3);
	demo d2(2,3);
	demo d3(12,3);
	if(d1==d2)
	{
		cout<<"\nequal ";
	}
	else
	cout<<"\nnot equal";
		if(d1==d3)
	{
		cout<<"\nequal ";
	}
	else
	cout<<"\nnot equal";
}
