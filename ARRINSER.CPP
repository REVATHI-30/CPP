//Insert a number inside a sorted array

#include<iostream.h>
#include<conio.h>

void main()
{
int size,num,i,pos=size,x[30];
clrscr();

cout<<"\n\n Enter size of the array :";
cin>>size;

cout<<"\n\n Enter the elements of the array :";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

cout<<"\n\n Enter a number to be inserted:";
cin>>num;

for(i=0;i<size;i++)
{
 if(num<x[i])
 {
  pos=i;
  break;
 }
}

//for shifting downwards

for(i=size;i>pos;i--)
{
 x[i]=x[i-1];
}

x[pos]=num;

cout<<"\n\n list after insertion:";

for(i=0;i<=size;i++)
{
cout<<" "<<x[i];
}
getch();
}

