/* 1
   01
   101
   0101
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();

for(i=1;i<=4;i++)
{
 for(j=1;j<=i;j++)
 {
  if(i%2==1 && j%2==1 || i%2==0 && j%2==0)
  {
   cout<<" "<<1;
  }
  else
  {
   cout<<" "<<0;
  }
 }
cout<<"\n\n";
}
getch();
}
