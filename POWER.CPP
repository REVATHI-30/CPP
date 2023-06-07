#include<iostream.h>
#include<conio.h>

void main()
{
int result=1,i=0,x,y;
clrscr();

cout<<"\n\n Enter a number: ";
cin>>x;

cout<<"\n\n Enter the power: ";
cin>>y;

while(i<y)
{
 result=(result)*(x);
 i++;
}
cout<<"\n\n X power Y is : "<<result;
getch();
}
