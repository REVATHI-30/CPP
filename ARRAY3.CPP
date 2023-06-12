//program to find the max element inside the array.

#include<iostream.h>
#include<conio.h>

void main()
{
int size,i,max,x[30];
clrscr();

cout<<"Enter the size of array:";
cin>>size;

cout<<"Enter the elements of the array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

max=x[0];

for(i=1;i<size;i++)
{
 if(x[i]>max)
 {
  max=x[i];
 }
}

cout<<"\n\n max="<<max;

getch();
}
