#include<iostream.h>
#include<conio.h>

void main()
{
int size,x[30],i,j;
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter elements of array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}


for(i=0;i<size;i++)
{
  for(j=i+1;j<size;)
  {
   if(x[j]<x[i])
   {
    j++;
   }
  }
}
cout<<"\n\n Descending order";

for(i=0;i<size;i++)
{
  for(j=i+1;j<size;)
  {
   if(x[j]>x[i])
   {
    j++;
   }
  }
}
cout<<"\n\nAscending order";


getch();
}

