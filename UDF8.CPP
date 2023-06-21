//Reference variable in c++

#include<iostream.h>
#include<conio.h>

void main()
{
 int x=100;
 clrscr();

 int &y=x;

 cout<<"\n\n y="<<y;

 y=123;

 cout<<"\n\n x="<<x;
 getch();
}
