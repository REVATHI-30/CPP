#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();

for(i=5;i>=1;i--)
{
 for(j=i;j<=5;j++)
 {
  cout<<" "<<j;
 }
 for(j=1;j<i;j++)
 {
 cout<<" 5";
 }
cout<<"\n\n";
}
getch();
}
