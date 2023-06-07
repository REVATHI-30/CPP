#include<iostream.h>
#include<conio.h>

void main()
{
int num,i=0;// 0 is used for variables using which we are going to perform operations
clrscr();

cout<<"\n\n Enter a number: ";
cin>>num;

while(num>0)
{
i++;
num=num/10;
}
// cout is after the loop because we only want the count to be printed once
cout<<"\n\n count: "<<i;
getch();
}
