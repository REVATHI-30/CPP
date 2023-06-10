#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,flag=1,num;
clrscr();

cout<<"The prime numbers are :\n\n";

for(num=2;num<=100;num++)
{
flag=1;

for(i=2;i<num;i++)
{
 if(num%i==0)
 {
  flag=2;
  break;
 }
}
if(flag==1)
{
cout<<" "<<num;
}
}
getch();
}
