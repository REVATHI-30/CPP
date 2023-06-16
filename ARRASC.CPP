//sort the given array in ascending and descending order

#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,size,x[30],temp;
clrscr();

cout<<"\n\n Enter the size of the array:";
cin>>size;

cout<<"\n\n Enter the elements of the array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

for(i=0;i<size;i++)
{
 for(j=i+1;j<size;j++)
 {
  if(x[j]<x[i])
  {
   temp=x[i];
   x[i]=x[j];
   x[j]=temp;
  }
 }
//after swapping we need to print that new array

cout<<"\n\n after sorting :";
for(j=0;j<size;j++)  //here we are using j instead of i because the outer loop is already an i loop
{
 cout<<" "<<x[j];  //this prints output after each j loop ends
}
}
getch();
}
