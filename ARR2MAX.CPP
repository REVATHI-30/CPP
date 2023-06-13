// program to find largest and second largest element in an array
#include<iostream.h>
#include<conio.h>

void main()
{
int x[30],max1,max2,i,size;
clrscr();

cout<<"\n\n Enter size of the array: ";
cin>>size;

cout<<"\n\n Enter the elements of an array: ";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

max1=0;

for(i=0;i<size;i++)
{
 if(x[i]>max1)
 {
  max1=x[i];
 }
}

max2=0;

for(i=0;i<size;i++)
{
 if(x[i]>max2 && x[i]!=max1)
 {
   max2=x[i];
 }
}

cout<<"\n\n first largest number is :"<<max1;
cout<<"\n\n second largest number is :"<<max2;

getch();
}
