#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void draw()
	{
		cout<<"Drawing a shape";
	}

};
class circle:public shape
{
	public:
		void draw()
		{
			cout<<"Drawing a circle";
		}
};
class rectangle:public shape
{
	public:
		void draw()
	{
		cout<<"\nDrawing a rectangle";
	}
};
main()
{
	shape s;
	shape *ptr;
	circle c;
	rectangle r;
	ptr=&c;
	ptr->draw();
	ptr=&r;
	ptr->draw();
}
