//Write a program in which you declare variables that will hold an hourly wage and
//number of hours worked. Prompt the user to enter values for hourly rate and hours
//worked. Compute and display gross weekly pay, which is calculated as hours times rate
//for the first 40 hours, plus hours times 1.5 times the rate for any hours over 40. Also display net pay,
//which is gross pay minus withholding; withholding is calculated as 28 percent
//of gross pay if gross pay is over $1000, 21% of gross pay if gross pay is not over $1000
//but is over $600, and 10% of gross pay if gross pay is not over $600. Save the file as
//OvertimeAndNet.cpp.
#include<iostream>
using namespace std;
main()
{
int hourly_wage, no_of_hours, gross_weekly_pay, withholding, net_pay;
cout<<"enter hourly wage ";
cin>>hourly_wage;
cout<<"\nenter no of hours worked ";
cin>>no_of_hours;

if(no_of_hours<40)
{
 gross_weekly_pay = hourly_wage * no_of_hours;
 cout<<"\ngross weekly pay "<<gross_weekly_pay;	
}	
else
{
	gross_weekly_pay = (hourly_wage * no_of_hours) + ((no_of_hours - 40)* hourly_wage*1.5);
	cout<<"\ngross weekly pay "<<gross_weekly_pay;
}

if(gross_weekly_pay>=1000)
{
	withholding = (gross_weekly_pay * 28)/100;
    net_pay = gross_weekly_pay - withholding;
    cout<<"\nnet_pay "<<net_pay;
}
else if(gross_weekly_pay>=600 && gross_weekly_pay<1000)
{
	withholding = (gross_weekly_pay * 21)/100;
    net_pay = gross_weekly_pay - withholding;
    cout<<"\nnet pay "<<net_pay;
}
else
{
	withholding = (gross_weekly_pay * 10)/100;
    net_pay = gross_weekly_pay - withholding;
    cout<<"\nnet pay "<<net_pay;
}

}
