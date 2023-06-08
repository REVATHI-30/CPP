#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
char ch;

clrscr();

for(i=1;i<=5;i++)
{
 ch='A';  // everytime i increments the j prints A first.

 for(j=1;j<=i;j++) // when i=2 it check whether 1<=2 true then after j++ 2<=2.
 {
  cout<<" "<<ch;
//ch is going to be printed 2 times. But if you don't do ch++ A will get printed twice.
  ch++;
 }
cout<<"\n\n";
}
getch();
}
