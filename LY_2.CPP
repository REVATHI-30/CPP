// leap year using logical operators

#include<iostream.h>
#include<conio.h>

void main()
{
 int year;
 clrscr();

cout<<"Enter a year :";
cin>>year;

if(year%4==0 && year%100==0 && year%400==0)
{
 cout<<"leap year";
}
else if(year%4==0 && year%100==0 && year%400!=0)
{
 cout<<"not a leap year";
}
else if(year%4==0 && year%100!=0)
{
 cout<<"leap year";
}
else
{
 cout<<"not a leap year";
}
getch();
}
