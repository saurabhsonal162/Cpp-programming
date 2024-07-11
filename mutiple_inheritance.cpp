//MULTIPLE INHERITANCE
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"\nI m vehicle class";
		}
};
class FourWheeler
{
	public:
		FourWheeler()
		{
			cout<<"\nI m fourwheeler";
		}
};
class CAR:public FourWheeler,public Vehicle
{
	
};
main()
{
	CAR c;
}
