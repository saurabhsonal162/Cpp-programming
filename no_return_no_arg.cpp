#include<iostream>
using namespace std;
class demo
{ 
private:
	int x,y;
	public:
	
		void value()//no return no argument
		{
			cout<<"\nenter the vcalue of x and y";
			cin>>x>>y;
			int z=x+y;
			cout<<"\nsum is "<<z;
		}
		};
		main()
		{
			demo d;
			d.value();
		}
