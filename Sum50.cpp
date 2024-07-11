//Write an application that displays every integer value from 
//1 to 20 along with its squared value. 
//Write an application that sums the integers from 1 to 50 (that is, 1 + 2 + 3 . . . + 50) and
//displays the result. Save the file as Sum50.cpp
#include<iostream>
using namespace std;
main()
{
	int i , a ,sum = 0, square;
	//sum upto 50
	for(i=0;i<51;i++)
	{
		sum= sum+i;
		
	}
	cout<<"sum is equal to "<<sum;
	//square upto 20
	for(a=0;a<21;a++)
	{
		cout<<"\ninteger "<<a;
		square = a*a;
		cout<<"\nsquares are "<< square;
	}
	
}
