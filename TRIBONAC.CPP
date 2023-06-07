#include<iostream.h>
#include<conio.h>

void main()
{
int a=0,b=0,c=1,d=0,n,i=1; //d is initialised with 0 to avoid any garbage value to be stored in that variable
clrscr();

cout<<"Enter a number : ";
cin>>n;

if(n>=1)
{
cout<<"\n\n"<<a;
}
if(n>=2)
{
cout<<" "<<b;
}
if(n>=3)
{
cout<<" "<<c;
}

while(i<=n-3)
{
d=a+b+c;
cout<<" "<<d;

a=b;
b=c;
c=d;

i++;
}
getch();
}
