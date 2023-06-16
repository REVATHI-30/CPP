//show how goto keyword works

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
cout<<"\n\n statement 1";

goto a;

cout<<"\n\n statement 2";
a:
cout<<"\n\n statement 3";

getch();
}
