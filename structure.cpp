//A phone number, such as (212) 767-8900, 
//can be thought of as having three parts: the
//area code (212), the exchange (767), and the number (8900).
//Write a program that uses a structure to store these three parts 
//of a phone number separately. Call the structure
//phone. Create two structure variables of type phone.
//Initialize one, and have the user
//input a number for the other one. 
//Then display both numbers. The interchange might
//look like this:
//Enter your area code, exchange, and number: 415 555 1212
//My number is (212) 767-8900
//Your number is (415) 555-1212*/

#include<iostream>
using namespace std;
struct phone{
	int area_code;
	int exchange;
	int number;
}p1,p2;
main()
{
	p1={ 212 , 767 , 8900};
	cout<<"area code--"<<p1.area_code<<" exchange--"<<p1.exchange<<" number--"<<p1.number;
	cout<<"\n\narea";
	cin>>p2.area_code;
	cout<<"\nexchange";
	cin>>p2.exchange;
	cout<<"\nnumber";
	cin>>p2.number;
	cout<<"\narea"<<p2.area_code<<"\nexchange"<<p2.exchange<<"\nnumber"<<p2.number;
	
	
	
	
}
