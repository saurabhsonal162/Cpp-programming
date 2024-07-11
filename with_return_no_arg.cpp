#include<iostream>
using namespace std;
class demo
{ 
private:
	int x,y;
	public:
	int sum()//with return no arguments
	{
		cout<<"\nEnter two values";
		cin>>x>>y;
		int z=x+y;
		return z;
	}
	int sub(int a,int b)//with return with arguments
	
	{
		x=a;
		y=b;
		int s=x-y;
		return s;
	}
};
main()
{
	demo d;
int s=d.sum();//with return and without arguments
int minus=d.sub(20,10);//with return and with argument
}
