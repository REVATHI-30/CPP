/* 1
   2 4
   1 3 5
   2 4 6 8
   1 3 5 7 9
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,a=1,b=4;
clrscr();

for(i=1;i<=5;i++)
{
 if(i%2==1)
 {
   for(j=1;j<=a;j=j+2)
   {
    cout<<" "<<j;
   }
   a=a+4;
 }
 if(i%2==0)
 {
  for(j=2;j<=b;j=j+2)
  {
   cout<<" "<<j;
  }
  b=b+4;
 }
cout<<"\n\n";
}
getch();
}
