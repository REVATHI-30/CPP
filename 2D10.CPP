/*
  column swap in a matrix.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[4][4],i,j,temp;
 clrscr();

 cout<<"\n\n Enter 9 numbers:\n";
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   cin>>a[i][j];
  }
 }

 cout<<"\n\n Matrix after column swap:\n\n";

 for(i=0;i<4;i++)
 {   // since of the i or j is fixed we need only one loop not 2.
   temp=a[i][0];
   a[i][0]=a[i][3];
   a[i][3]=temp;

 }

 for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
   cout<<" "<<a[i][j];
  }
 cout<<"\n\n";
}
getch();
}

