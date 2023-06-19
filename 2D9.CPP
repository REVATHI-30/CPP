/*
  matrix row swap.
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

 for(i=0;i<4;i++)
 {
  temp=a[0][i];
  a[0][i]=a[3][i];
  a[3][i]=temp;
 }
 cout<<"\n\n Matrix after row swap:\n\n";
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

