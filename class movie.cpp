#include<iostream>
using namespace std;
class Movie
{
	private:
	    char title[20];
	    int year;
	    char director_name[20];
	public:
	    void setTitle()//inline function
		{
		   cout<<"enter the title ";
		   cin>>title;	
		}
		void setYear()
		{
		   cout<<"enter the year ";
		   cin>>year;	
		}
		void setDirector()
		{
		   cout<<"enter the name of the director ";
		   cin>>director_name;	
		} 
		void display()
		{
			cout<<"the movie details are-- ";
			cout<<"Title is-- "<<title<<" release year is-- "<<year<<" director name is-- "<<director_name;
		}    
}m1;
main()
{
    m1.setTitle();
    m1.setDirector();
    m1.setYear();
    m1.display();
    
}
