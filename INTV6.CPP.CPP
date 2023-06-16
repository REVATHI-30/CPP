/* 0   1  2  3  4 5
   10 20 30 40 50 60

   0  1  2  3  4  5
   20 10 40 30 60 50

in this case the size of array should be even and we should swap neighbours
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int size,x[30],i,j,temp;
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter the elements of array:";
for(i=0;i<size;i++)
{
cin>>x[i];
}

for(i=0;i<size;i=i+2)
{
 temp=x[i];
 x[i]=x[i+1];
 x[i+1]=temp;
}

cout<<"\n\n The output is:";

for(j=0;j<size;j++)
{
 cout<<" "<<x[j];
}
getch();
}



