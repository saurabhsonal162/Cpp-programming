#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int hourly_wage, no_of_hour_work, withholding, weekly_pay;
	cout<<"enter hourly wage";
	cin>>hourly_wage;
	cout<<"enter no of hour";
	cin>>no_of_hour_work;
	cout<<"enter the withholding percentage";
	cin>>withholding;
	
	weekly_pay = (hourly_wage * no_of_hour_work) - withholding ;
	cout<<"weekly pay is"<< weekly_pay ;
	
