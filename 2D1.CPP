/*
  matrix addition using 2d arrays
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 clrscr();

 cout<<"\n\n Enter 9 numbers:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }

  cout<<"\n\n Enter 9 numbers:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>b[i][j];
  }
 }

  cout<<"\n\n sum:\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
   cout<<" "<<c[i][j];
  }
  cout<<"\n\n"; //for numbers to come in next line after first 3 nos
 }


 getch();

}
