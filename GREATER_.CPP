/* Write a program to find the greater of 3 numbers.
Do this by using logical operators.

false && true --> in AND if the first is false it won't check the second condition.
true || false --> in OR if the first is true then the answer is anyway true. So it won't check the second condition.

*/

#include<iostream.h> // input and output functions like cin and cout
#include<conio.h> // include clrscr() and getch()

void main()
{
int a,b,c;
clrscr();

cout<<"Enter 3 numbers:";
cin>>a>>b>>c;

if(a>b && a>c)
{
 cout<<"\n\n max="<<a;
}
else if(b>c)
{
 cout<<"\n\n max="<<b;
}
else
{
 cout<<"\n\n max="<<c;
}
getch();
}
