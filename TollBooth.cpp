/* Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 100/-
 toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
 track of the number of cars that have gone by, and of the total amount of money collected.
  Model this tollbooth with a class called tollBooth. The two data items are a type
  int to hold the total number of cars, and a type double to hold the total amount
 of money collected. A constructor initializes both of these to 0. A member function called
 payingCar() increments the car total and adds 100/- to the cash total. Another function,
 called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
 member function called display() displays the two totals. Make appropriate member
 functions const.*/
 #include<iostream>
 using namespace std;
 class tollBooth
 { 
     int no_of_cars;
     double total_money;
     public:
     	tollBooth()
     	{
     	no_of_cars = 0;
		 total_money = 0;	
		 }
		 void payingCar()
		{
			no_of_cars++;
			total_money = total_money + 100;
			
		 } 
		 void nopayCar()
		 {
		 	no_of_cars++;
		 }
		 void display()
		 {
		 	cout<<"no of cars"<<no_of_cars;
		 	cout<<"\ntotal money collected"<<total_money;
		 }
};
main()
{
	tollBooth t1;
	t1.payingCar();
	t1.payingCar();
	t1.nopayCar();
	t1.nopayCar();
	t1.payingCar();
	t1.display();
}

















