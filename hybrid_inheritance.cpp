//HYBRID iNHERITANCE
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
class Fare
{
	public:
		Fare()
		{
			cout<<"\nFare Class";
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
class Bus:public Vehicle,public Fare
{
	
};
main()
{
	Bus b;
	Car c;
}
