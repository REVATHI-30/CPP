/* Write a program to check whether a year entered is leap year or not.
eg. 1900 --> not a leap year
    2000 --> leap year
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int year;
clrscr();

cout<<"Enter a year : ";
cin>>year;

if(year%4==0)
{
 if(year%100==0)
 {
  if(year%400==0)
  {
   cout<<"leap year";
  }
  else
  {
   cout<<"not a leap year";
  }
 }
 else
 {
  cout<<"leap year";
 }
}
else
{
cout<<"not a leap year";
}
getch();
}
