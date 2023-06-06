/* Percentage (per)
per<40 = fail
per<50 = D grade
per<60 = C grade
per<70 = B grade
per<80 = B+ grade
per<90 = A grade
per<=100 = A+ grade
else
Invalid input
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int marks;
clrscr();

cout<<"Enter the total marks : ";
cin>>marks;

if(marks<40)
{
 cout<<"FAIL";
}
else if(marks<50)
{
 cout<<"D grade";
}
else if(marks<60)
{
 cout<<"C grade";
}
else if(marks<70)
{
 cout<<"B grade";
}
else if(marks<80)
{
 cout<<"B+ grade";
}
else if(marks<90)
{
cout<<"A grade";
}
else if(marks<= 100)
{
 cout<<"A+ grade";
}
else
{
cout<<"Invalid input";
}
getch();
}
