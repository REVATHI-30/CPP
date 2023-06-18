/*
  matrix multiplication using 2d arrays
*/

#include<iostream.h>
#include<conio.h>

void main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k;
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


 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    c[i][j]=0; //imp otherwise garbage value

    for(k=0;k<3;k++)
    {
     c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    }
  }
 }

 cout<<"\n\n matrix after multiplication:\n ";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<" "<<c[i][j];
  }
cout<<"\n\n";
}
 getch();

}