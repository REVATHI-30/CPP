// 5!=5*4*3*2*1

#include<iostream.h>
#include<conio.h>

void main()
{
int num,i,result=1;//we don't have to initialise i to avoid garbage because we are only going to do i++
clrscr();

cout<<"\n\n Enter a number:";
cin>>num;

for(i=num;i>=1;i--)
{
 result=result*i;
}

cout<<"\n\n Factorial: "<<result;
getch();
}
