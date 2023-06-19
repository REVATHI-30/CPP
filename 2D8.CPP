/*
  matrix transpose without using another matrix
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],b[3][3],i,j,temp;
 clrscr();

 cout<<"\n\n Enter 9 numbers:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  if(i>j) //in absence of this loop, 01 and 10 for both conditions loop will run and swap. at the end original array will be printed.
  {
   temp=a[i][j];
   a[i][j]=a[j][i];
   a[j][i]=temp;}
  }
 }
 cout<<"\n\n Matrix after transpose:\n\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<" "<<a[i][j];
  }
 cout<<"\n\n";
 }

 getch();
}
