// global and local variables in C++
// :: scope resolution operator

#include<iostream.h>
#include<conio.h>

int a=100; //global

void main()
{
 int a=50;//local

 clrscr();

 cout<<"\n\n local: "<<a;
 cout<<"\n\n global:"<<::a;

 getch();
}

