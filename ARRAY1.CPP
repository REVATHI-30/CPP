//print all the elements of an array

#include<iostream.h>
#include<conio.h>

void main()
{
int x[5],i; // if array size is 5 then it can hold 5 elements and index are 0-->4
clrscr();

cout<<"\n\n Enter the elements of an array :";
for(i=0;i<5;i++)
{
 cin>>x[i];
}

for(i=0;i<5;i++)
{
 cout<<"\n\n"<<x[i];
}

getch();
}

