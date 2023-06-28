// program to understand default and parameterized constructor

#include<iostream.h>
#include<conio.h>

class A
{
  int a,b;

  public:

  A()   //default constructor
  {
   a=10;
   b=20;
  }

  A(int x,int y) //parameterized constructor
  {
   a=x;
   b=y;
  }

  void show()
  {
   cout<<" \n\n a:"<<a;
   cout<<"\n\n b:"<<b;
  }
};

void main()
{
 clrscr();

 A obj;  // this object calls default constructor
 obj.show();

 A obj1(11,12);// we can't use same object for parameterized
 obj1.show();      // parameters are passes along with object itself

 A obj2(110,20);
 obj2.show();

 getch();
}
