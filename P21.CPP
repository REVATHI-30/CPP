#include<iostream.h>
#include<conio.h>

void main()
{
int i,sp,j,a=8;
clrscr();

for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
 {
  cout<<" "<<j;
 }
 for(sp=1;sp<=a;sp++)
 {
  cout<<"  ";
 }
 a=a-2;

 for(j=i;j>=1;j--)
 {
  cout<<" "<<j;
 }
cout<<"\n\n";
}
getch();
}

