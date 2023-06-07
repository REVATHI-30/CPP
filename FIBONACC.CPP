#include<iostream.h>
#include<conio.h>

void main()
{
int a=0,b=1,c=0;
clrscr();

cout<<"\n\n Fibonacci series :";

cout<<"\n\n"<<a;
cout<<" "<<b;

while(c<=100)
{
 c=a+b;
 cout<<" "<<c;

 a=b;
 b=c;
}
getch();
}
