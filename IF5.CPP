/* Get a character as an input from the user and check whether character entered is :
'A' --> UPPER CASE
'a' --> lower case
'4' --> Digit
'$' --> special character
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
char ch;
clrscr();

cout<<"Enter a character:";
ch=getchar();

if(ch>='A' && ch<='Z')
{
 cout<<"UPPER CASE";
}
else if(ch>='a' && ch<='z')
{
 cout<<"LOWER CASE";
}
else if(ch>='0' && ch<='9')
{
 cout<<"DIGIT";
}
else
{
 cout<<"SPECIAL CHARACTER";
}
getch();
}
