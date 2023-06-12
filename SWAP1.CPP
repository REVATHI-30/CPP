//swap 2 numbers using temp variable

#include<iostream.h>
#include<conio.h>

void main()
{
int a=10,b=20,temp;
clrscr();

cout<<"\n\n The numbers before swappping are:";
cout<<"\n\n"<<a;
cout<<"\n\n"<<b;

temp=a;
a=b;
b=temp;

cout<<"\n\n The numbers after swapping are:";
cout<<"\n\n"<<a;
cout<<"\n\n"<<b;

getch();
}
