/*Create a class called time that has separate int member data for hours, minutes, and seconds. 
One constructor should initialize this data to 0, and another should initialize it to fixed values. 
Another member function should display it, in 11:59:59 format and the overloaded + operator to add
two times should add two objects of type time passed as arguments.
A main() program should create two initialized time objects and one that isn’t initialized. 
Then it should add the two objects together, leaving the result in the third time object Finally it should display
the value of this third object*/
 
#include<iostream>
using namespace std;
class time
{
	int hours;
	int min;
	int sec;
	public:
		time()
		{
			hours=min=sec=0;
		}
		time(int h,int m,int s)
		{
			hours=h;
			min=m;
			sec=s;
		}
		void display()
{
cout<<hours<<":"<<min<<":"<<sec<<endl;
}
time operator +(time t2)
{
	time temp;
	temp.hours=hours+t2.hours;
	temp.min=min+t2.min;
	temp.sec=sec+t2.sec;
	return temp;
}
 }; 
 main()
 {
 	time t1(3,23,20);
 	t1.display();
 	time t2(2,20,20);
 	t2.display();
 	time t3;
 	t3=t1+t2;//call to overloded function
 	t3.display();
 }
