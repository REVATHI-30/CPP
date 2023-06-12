// find the min element inside the array

#include<iostream.h>
#include<conio.h>

void main()
{
int size,min,i,x[30];
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter the elements inside the array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

min=x[0];

for(i=0;i<size;i++)
{
 if(x[i]<min)
 {
  min=x[i];
 }
}

cout<<"\n\n Min="<<min;

getch();
}

