#include<iostream.h>
#include<conio.h>

int add(int,int);

void main()
{
 int a,b;

 clrscr();

 cout<<"\n\n Enter 2 nos:";
 cin>>a>>b;

 int c=add(a,b);

 cout<<"\n\n Sum:"<<c;

 getch();
 }

 int add(int x,int y)
 {
  int z;
  z=x+y;
  return z;
 }
