//HIERARCHICAL INHERITANCE
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"\nVehicle Class";
		}
};
class Car:public Vehicle
{
	public:
		Car()
		{
			cout<<"\nCar Class";
		}
};
class Bus:public Vehicle
{
	public:
		Bus()
		{
			cout<<"\nBus Class";
		}
};
main()
{
	Car c;
	Bus b;
}
