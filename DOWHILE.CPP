//print numbers 1-->5 using do while loop

#include<iostream.h>
#include<conio.h>

void main()
{
int i=1;
clrscr();

do
{
cout<<"\n\n"<<i;
i++;
}while(i<=5);   // note that semicolon after condition is imp in case of do while loop

getch();
}