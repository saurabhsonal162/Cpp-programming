#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
private:
        int length,breadth;
         friend int area(Rectangle r1) ;
public:
       Rectangle ()
       {
           length=12;
           breadth=6;
       }    
};      
int area(Rectangle r1)
       {
           return(r1.length * r1.breadth); 
       }      
int main()
{
Rectangle r;
 cout<<"area is: "<<area(r);
}
