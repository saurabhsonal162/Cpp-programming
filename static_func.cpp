/*create class account with non static memebrs as
account number and balance and static data member 
as rate of interest.get values from user
display the intrest for two objects for time period 
of 2 year and 3 year*/
#include<iostream>
using namespace std;
class account
{
int acc_num,balance;
static int rate;
public:
void getdata()//inline no return no arg
{
	cout<<"\nenter the values";
	cin>>acc_num>>balance;
	}	
	void display(int time)//no retun with arg
	{
		int i=(rate*balance*time)/100;
		cout<<"\nInterest is="<<i;
	}
};
int account::rate=5; //:: scope resolution
main()
{
	account a1,a2;
	a1.getdata();
	a2.getdata();
	a1.display(2);
	a2.display(3);
}
