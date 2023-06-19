/*
  print the upper triangle
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
 cout<<"\n\n The upper triangle: \n\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    if(i<=j)
    {
     cout<<" "<<a[i][j];
     }

    else
    {
     cout<<"  ";
    }
  }
 cout<<"\n\n";
 }

 getch();
 }
