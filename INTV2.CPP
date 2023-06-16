/* print this pattern
 1 2 3 4 5   6  7 8   9  10
 2 4 6 8 10 12 14 16 18 20
 .
 .
 10 .....................100
 */

#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();

for(i=1;i<=10;i++)
{
 for(j=1;j<=10;j++)
 {
  cout<<" "<<i*j;
 }
cout<<"\n\n";
}
getch();
}
