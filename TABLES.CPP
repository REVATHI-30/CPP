// write a generalized program to print any tables

#include<iostream.h>
#include<conio.h>

void main()
{
int num,i=1;
clrscr();

cout<<"Enter the table number: ";
cin>>num;

while(i<=10)
{
cout<<"\n\n "<<num*i;
i++;
}

getch();
}
