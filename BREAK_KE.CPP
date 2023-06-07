/* BREAK KEYWORD
initial goal is to print numbers 1 to 10.
But add a break condition at num 5
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int i;
clrscr();

for(i=1;i<=10;i++)
{
 if(i==5)
 {
 break;
 }

cout<<" "<<i;
}

getch();
}

