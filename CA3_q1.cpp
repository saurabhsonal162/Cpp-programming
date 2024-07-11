#include<iostream>
using namespace std;
class complex
{
	public:
		int real1,imag1 ,real2, imag2;
		int a , b;
		complex()
		{
			cin>>real1>>imag1>>real2>>imag2;
			a=real1 + real2;
			b=imag1 + imag2;
			cout<<a<<" "<<b;
		}
		
};
main()
{
	complex();
}
