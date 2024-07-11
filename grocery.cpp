//Define a class named GroceryItem. Include private fields that hold an item’s stock
// number, price, quantity in stock, and total value. Write a public function named
// dataEntry()that calls four private functions. Three of the private functions prompt
// the user for keyboard input for a value for one of the data fields stock number, price,
// and quantity in stock. The function that sets the stock number requires the user to
// enter a value between 1000 and 9999 inclusive; continue to prompt the user until a
// valid stock number is entered. The functions that set the price and quantity in stock
// require non-negative values; continue to prompt the user until valid values are entered.
// Include a fourth private function that calculates the GroceryItem’s total value field
// (price times quantity in stock). Write a public function that displays a GroceryItem’s
// values. Finally, write a main()function that declares a GroceryItem object, assigns
// values to its fields, and uses the display function. Save the file as Grocery.
#include<iostream>
using namespace std;
class GroceryItem
{
	private:
		int stock_no, price, quantity, total_value;
		void stock()
		{
			cout<<"\n enter the value for stocks";
			
			cin>>stock_no;
			
			
		
		}
		void Price()
		{
			cout<<"\nenter he value of price";
			cin>>price;
		}
		void Quantity()
		{
			cout<<"\n enter the value of quantity";
			cin>>quantity;
		}
		void Value()
		{
			total_value= price*quantity;
			cout<<"\n total value--"<<total_value;
		}
		public:
			void dataEntry()
			{
			 stock();
			 Price();
			 Quantity();
			 Value();
			 	
			}
}g1;
main()
{
  g1.dataEntry();	
}
