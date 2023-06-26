// function overloading in same class

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class sum
{
  public:

  void add(int a,int b)
  {
   cout<<"\n\n Add:"<<a+b;
  }

  void add(float a,float b)
  {
   cout<<"\n\n Add:"<<a+b;
  }

  void add(int x, int y, int z)
  {
   cout<<"\n\n Add:"<<x+y+z;
  }
};

void main()
{
 clrscr();

 sum s;

 s.add(10,20);
 s.add(23,34,51);
 s.add(20.2f,30.22f);

getch();
}
