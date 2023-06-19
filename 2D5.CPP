/*
  matrix diagonal sum by using single for loop
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,sum1=0,sum2=0;
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
  sum1=sum1+a[i][i];

  sum2=sum2+a[i][2-i];
 }

 cout<<"\n\n The forward diagonal sum: "<<sum1;
 cout<<"\n\n The backward diagonal sum: "<<sum2;

 getch();
 }
