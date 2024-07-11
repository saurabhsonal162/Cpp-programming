#include<iostream>
using namespace std;
main()
{
	int investment_amount, no_of_year, total_money, i, x;
	cout<<"investment amount ";
	cin>>investment_amount;
	cout<<"\nno of year ";
	cin>>no_of_year;
	if(no_of_year<1)
	{
		cout<<"not allowed ";
	}
	else if(no_of_year>=1 && no_of_year<=30)
	{
		for(no_of_year=1;no_of_year<31;no_of_year++)
		{
		total_money = (investment_amount) + (investment_amount*0.8);	
		}
		cout<<"\ntotal money "<<total_money;
	}
	else
	{
		cout<<"\nnot allowed";
	}
}
