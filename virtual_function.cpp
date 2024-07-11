/*Imagine a publishing company that markets both book and audiocassette versions of its works. 
Create a class publication that stores the title (a string) and price (type float) of a publication.  
From this class derive two classes: book, which adds a page count (type int), and tape, 
which adds a playing time in minutes (type float). Each of these three 
classes should have a getdata() function to get its data from the user at the keyboard, 
and a putdata() function to display its data. getdata()and putdata must be pure virtual function in base class. 
Write a main() program to test the book and tape classes by creating instances of them, 
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
#include<iostream>
using namespace std;
class publication
{
	public:
		string title;
		float price;
		virtual void getdata()=0;
		virtual void putdata()=0;
	
};
class book:public publication
{
	public:
		int count=0;
		void getdata()
		{
			cout<<"enter the name of the book :";
			cin>>title;
			count+=1;
			
			
		}
		void putdata()
		{
			cout<<"the name of the book is :"<<title;
			cout<<"total count: "<<count;
		}
};
class tape:public publication
{
	public:
		
	void getdata()
		{
			cout<<"enter the name of the book :";
			cin>>title;
			count+=1;
			
			
		}
		void putdata()
		{
			cout<<"the name of the book is :"<<title;
			cout<<"total count: "<<count;	
};
main()
{
	
}
