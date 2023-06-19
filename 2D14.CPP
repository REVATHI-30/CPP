/*
  find the max element in each row of the matrix.
 eg .  row 1 , max=3
       row 2 , max=4   and so on .
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j;
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
 int max=0;
  for(j=0;j<3;j++)
  {
   if(a[i][j]>max)
   {
     max=a[i][j];
   }
 }
 cout<<"\n\n max of row "<<i<<"=>"<<max;
 }
 getch();
}

