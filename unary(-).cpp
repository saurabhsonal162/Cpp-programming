//overload the unary - operator
#include<iostream> 
using namespace std; 
class demo 
{ 
	int x,y,z; 
	public: 
		demo(int a,int b,int c) 
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
		void operator -() 
		{ 
			x=-x; 
			y=-y; 
			z=-z; 
		} 
		void show() 
		{ 
			cout<<x<<"\t"<<y<<"\t"<<z<<endl; 
		} 
}; 
main() 
{ 
	demo d1(5,6,7); 
	d1.show(); 
	-d1;//invoke the operator overloding function 
	d1.show(); 
	demo d2; 
	d2.show(); 
	-d2;//invoke the operator overloding function 
	d2.show(); 
	 
}
