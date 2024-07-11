#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		demo()
		{
			x=20;
		}
		void decrement()
		{
			x--;
		}
		void show()
		{
			cout<<x<<endl;
		}
		void operator --()//overloding function
		{
			cout<<"i m ++ operator overloading"<<endl;
			x=x-10;//x=x-10;
		}
		void operator --(int)//post overloding function
		{
			cout<<"i m post decrement"<<endl;
		}
		
		
		
		
};
main()
{
	demo d1,d2;
	d1.show();
	
	--d1;//call the operator overloding function
	d2--;
	d1.show();
	
}
