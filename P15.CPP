#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();

for(i=5;i>=1;i--)
{
 if(i%2==1)
 {
  for(j=1;j<=i;j++)
  {
   cout<<" "<<j;
  }
 }
 else
 {
  for(j=i;j>=1;j--)
  {
   cout<<" "<<j;
  }
 }
cout<<"\n\n";
}
getch();
}
