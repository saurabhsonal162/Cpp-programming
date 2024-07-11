/*Assume that a bank maintains savings accounts for customers. The savings account provides an interest
and withdrawal facility.Create a class account that stores the customer name,
and account number and from this derive a savings account to make it more specific to its requirement.
Include necessary member functions to achieve the following task
a)accept the deposit from the customer and update the balance
b)display the balance
c)compute interest
d)deposit interest*/
#include<iostream>
using namespace std;
class account
{
	protected:
		char name[20];
		int acc_no;
		public:
			void info()
			{
				cout<<"Enter your name"<<endl;
				cin>>name;
				cout<<"Enter your account number"<<endl;
				cin>>acc_no;
			}
};
class saving_acc : public account
{
	public:
		int a , b, c,rate,time, interest;
		void deposit()
		{
			c=0;
			cout<<"\nenter the amount to be deposited ";
			cin>>a;
			b=a+c;
		}
	void display()
	{
		cout<<"\nupdated balance is:";
		cout<<b;
	}
	void compute_interest()
	{
	 	cout<<"\nenter rate%:";
	 	cin>>rate;
	 	cout<<"\nenter time:";
	 	cin>>time;
	 	interest = (b*rate*time)/100;
	 	
	}
	void deposit_interest()
	{
		cout<<"\ninterest is:";
		cout<<interest;
	}
};
main()
{
	saving_acc s;
	s.info();
	s.deposit();
	s.display();
	s.compute_interest();
	s.deposit_interest();
}
