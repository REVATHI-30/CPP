//swap 2 numbers without using a third variable

#include<iostream.h>
#include<conio.h>

void main()
{
int a=10,b=20;
clrscr();

cout<<"\n\n The numbers before swappping are:";
cout<<"\n\n"<<a;
cout<<"\n\n"<<b;

a=a+b;
b=a-b;
a=a-b;

cout<<"\n\n The numbers after swapping are:";
cout<<"\n\n"<<a;
cout<<"\n\n"<<b;

getch();
}
