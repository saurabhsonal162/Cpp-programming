/*create two classes DM and DB which store the value of distances.
DM stores distance in meters and centimeters and DB in feet and inches
Write a program that can read values for the class objects and
add one object of DM with another object of DB.
Use a friend function to carry out the addition operation.
The object that stores the result may be DM or DB object depending on the units in 
which results are required.
The display should be in the format of feet and inches 
or meter and centimeter depending on the object on display*/
#include<iostream>
using namespace std;
class DB;
class DM 
{
  	int meter, centimeter;
  	public:
  		DM()
  		{
  			meter=10;
  			centimeter=20;
		  }
		  friend void add(DM,DB);
		  friend void display(DM);
	
};
class DB
{
	int feet, inches;
	public:
		DB()
		{
			feet= 23;
			inches= 12;
		}
		friend void add(DM, DB);
		friend void display(DB);
};
void add(DM d1, DB d2)
{
	int 
	
}
main()
{
	DM dm(2,3);
	DB db(4,4);
	add(dm,db);
	display(dm);
}
