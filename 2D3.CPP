/*
  matrix transpose using 2d arrays
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],b[3][3],i,j;
 clrscr();

 cout<<"\n\n Enter 9 numbers:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }

 cout<<"\n\n transpose:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   b[i][j]=a[j][i];

   cout<<" "<<b[i][j];
  }
  cout<<"\n\n";
 }
 getch();

}