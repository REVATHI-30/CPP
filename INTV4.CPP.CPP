/* 0  1  2  3  4  5
   10 20 30 40 50 60

   0  1  2  3  4  5
   40 50 60 10 20 30
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int size,i,j,temp,x[30];
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter the elements of array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

for(i=0;i<size/2;i++)
{
 temp=x[i];
 x[i]=x[i+3];
 x[i+3]=temp;

cout<<"\n\n";
for(j=0;j<size;j++)
{
 cout<<" "<<x[j];
}
}
getch();
}
