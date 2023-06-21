// Call by value

#include<iostream.h>
#include<conio.h>

void swap(int,int);

void main()
{
 int a=10,b=20;
 clrscr();

 cout<<"\n\n Values before swap:";
 cout<<"\n\n a="<<a;
 cout<<"\n\n b="<<b;

 swap(a,b);

 getch();
}

void swap(int x,int y)
{
 int temp;

 temp=x;
 x=y;
 y=temp;

 cout<<"\n\n values after swap:";
 cout<<"\n\n x="<<x;
 cout<<"\n\n y="<<y;
}

