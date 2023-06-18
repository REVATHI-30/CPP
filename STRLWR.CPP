/*
   convert the whole string to lower case
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>  // this header file is for gets() and puts()
#include<string.h> // this header file is for string functions
#include<ctype.h> // this header file is for strupr(),strlwr() etc.

void main()
{
 char str1[20];
 clrscr();

 cout<<"\n\n Enter a string1:";
 gets(str1);

 strlwr(str1);

 cout<<"\n\n String after conversion: ";
 cout<<"\n\n"<<str1;


 getch();
}