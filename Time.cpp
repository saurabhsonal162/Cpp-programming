/*Create a class called time that has separate int member data for hours, minutes, and 
seconds. One constructor should initialize this data to 0, and another should initialize it
 to fixed values. Another member function should display it, in 11:59:59 format. The final
 member function should add two objects of type time passed as arguments.
 A main() program should create two initialized time objects (should they be const?) and
 one that isn’t initialized. Then it should add the two initialized values together, leaving the
 result in the third time variable. Finally it should display the value of this third variable.
 Make appropriate member functions const.*/
 #include<iostream>
 using namespace std;
 class time
 {
   int hours, minutes, seconds;
   public:
   	time()
   	{
   		hours = 0;
   		minutes = 0;
   		seconds = 0;
	   }
	time(int h , int m , int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	   } 
	void display()
	{
		cout<<hours<<":"<<minutes<<":"<<seconds;
	  } 
	time add(time &t , time &t1)
	{
	 int total_sec = t.seconds+t1.seconds;
	 int carry_min = total_sec/60;
	 int remaining_sec = total_sec%60;
	 int total_min = t.minutes+t1.minutes+carry_min;
	 int carry_hrs = total_min/60;
	 int remaining_minutes = total_min%60;
	 int total_hrs = t.hours+t1.hours+carry_hrs;
	 return time(total_hrs, remaining_minutes, remaining_sec);
	 
	 } 
};
 main()
 {
 	time t(1,16,20);
 	time t1(2,7,4);
 	time t2;
 	t2=t2.add(t,t1);
 	t2.display();
 	
 }
