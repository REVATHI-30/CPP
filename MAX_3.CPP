//use ternary operator to find the greater of 3 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
int a,b,c,max;
clrscr();

cout<<"\n\n Enter any 3 numbers:";
cin>>a>>b>>c;

max=(a>b && a>c)?a: (b>c)?b:c;
cout<<"\n\n Max="<<max;

getch();
}
