/*Imagine a publishing company that markets both book and audiocassette versions of its
 works. Create a class publication that stores the title (a string) and price (type float)
 of a publication. From this class derive two classes: book, which adds a page count (type
 int), and tape, which adds a playing time in minutes (type float). Each of these three
 classes should have a getdata() function to get its data from the user at the keyboard,
 and a putdata() function to display its data.
 Write a main() program to test the book and tape classes by creating instances of them,
 asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
 #include<iostream>
 using namespace std;
 class publication
 {
 	protected:
 		char title[20];
 	    float price;
 	    public:
 	    	void getdata()
 	    	{
 	    		cout<<"enter title and price: ";
 	    		cin>>title>>price;
			 }
			 void putdata()
			 {
			 	cout<<"\ntitle of the book selected is :"<<title<<"\nprice of book: "<<price;
			 }
};
class book: public publication
{
	public:
		int count;
		void getdata()
		{
			cout<<"\n enter the page count: ";
			cin>>count;
		}
		void putdata()
		{
			cout<<"total page counted is: "<<count;
		}
		
};
class tape:public publication
{
	public:
		float play_time;
		void getdata()
		{
			cout<<"enter the play time listened: ";
			cin>>play_time;
		}
	    void putdata()
	    {
	    	cout<<"total play time listened: ";
	    	cin>>play_time;
		}
};
main()
{
	tape t;
	book b;
	b.publication::getdata();
	b.publication::putdata();
	b.getdata();
	b.putdata();
	
}
