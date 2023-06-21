/*
 User defined functions
 Type 2- argument with no return type
*/

#include<iostream.h>
#include<conio.h>

void add(int,int); //declaration with argument

void main()
{
 int a,b;
 clrscr();

 cout<<"\n\n Enter 2 nums:";
 cin>>a>>b;

 add(a,b); // Actual parameters

 getch();
}

void add( int x, int y)
{
 int z;
 z=x+y;
 cout<<"\n\n Sum:"<<z;
}

