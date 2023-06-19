/*
  sort each row of a matrix in ascending order.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,k,temp;
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
  for(k=0;k<3;k++)
  {
   for(j=k+1;j<3;j++)
   {
    if(a[i][j]<a[i][k])
    {
      temp=a[i][j];
      a[i][j]=a[i][k];
      a[i][k]=temp;
    }
   }
  }
 }
 cout<<"\n\n matrix after sorting each row: \n";
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
