#include<iostream>
using namespace std;
class figure
{
   int length, breadth, side;
   double radius, pi;
   public:
   	void area(int s)//pass by value
   	{
   	   side=s;
	   int areaofsquare= side*side;
	   cout<<"area of square"<<areaofsquare<<endl;	
	}
void area(int *l, int *b)//pass by address
{
	length =*l;
	breadth = *b;
	int areaofrec = length*breadth;
	cout<<"area of rectangle"<<areaofrec<<endl;
}
void area(double &r , double &pi)//pass by reference
{
   	
   	cout<<"area of circle"<<radius*radius*pi<<endl;
}
};
main()
{
   figure f1;
   f1.area(10);
   int a=10, b=20;
   f1.area(&a,&b);
   f1.area(3.14,2.32)
   	
}
