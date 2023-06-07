//prime number or not using flags

#include<iostream.h>
#include<conio.h>

void main()
{
int num,divisor,flag=1;
clrscr();

cout<<"\n\n Enter a number:";
cin>>num;

for(divisor=2;divisor<num;divisor++)
{
 if(num%divisor==0)
 {
  flag=2;
  break;
 }
}

if(flag==1)
{
cout<<"\n\n It is a prime number";
}
else
{
cout<<"\n\n It is not a prime number";
}

getch();
}
