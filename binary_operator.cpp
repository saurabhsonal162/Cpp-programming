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
		void show()
		{
			cout<<x<<"\t"<<y<<endl;
		}
		demo operator +(demo dd2)
		{
			demo temp;
			temp.x=x+dd2.x;
			temp.y=y+dd2.y;
			return temp;
		}
		void operator -(demo dd2)
		{
			demo temp;
			temp.x=x-dd2.x;
			temp.y=y-dd2.y;
			temp.show();
		}
		
		
		
};
main()
{
	demo d1(10,20);
	demo d2(5,5);
	demo d3;
	d1-d2;
	/*d3.show();
	d3=d1+d2;//invoking operator overloding function
	d3.show();*/
	
} 
