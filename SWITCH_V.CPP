/* Switch case with character
Write a program to find a character entered is a vowel or not.
(Consider both uppercase and lowercase)
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
char ch;
clrscr();

cout<<"\n\n Enter a character: ";
ch=getchar();

switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
	cout<<"\n\n It is a vowel";
	break;

default:
 cout<<"\n\n It is not a vowel";
 }
getch();
}
