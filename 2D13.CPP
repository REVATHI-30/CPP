/*
  sum of border elements.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,sum=0;
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
  if(i==0||i==2||j==0||j==2)
  {
   sum=sum+a[i][j];
  }
  }
 }

 cout<<"\n\n sum: "<<sum;

getch();
}
