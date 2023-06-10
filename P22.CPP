#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,a;
clrscr();

for(i=1;i<=4;i++)
{
 for(j=i;j>=1;j--)
 {
  cout<<" "<<j;
 }

a=2;
for(j=(i-1);j>=1;j--)
{
 cout<<" "<<a++;
 }
 cout<<"\n\n";
}
getch();
}

