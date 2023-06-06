/* using ternary operator write a program to find greater of 2 numbers.
(condition)?(true statement):(false statement);
*/
#include<iostream.h>
#include<conio.h>

void main()
{
int a,b,max; // store the output of ternary operator in variable max
clrscr();

cout<<"Enter 2 numbers:";
cin>>a>>b;

max=(a>b)?a:b;
cout<<"\n\n max= "<<max;

getch();
}
