//function with default values/arguments

#include<iostream.h>
#include<conio.h>

void add(int a,int b=20,int c=30);

void main()
{
 clrscr();

 add(10);
 add(11,22);
 add(1,2,3);

 getch();
}

void add(int a,int b,int c)
{
 cout<<"\n\n Add="<<a+b+c;
}

