/*
   change the whole string to upper case.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>  // this header file is for gets() and puts()
#include<string.h> // this header file is for string functions
#include<ctype.h> // this header file is for isupper(),islower(),strupr() and strlwr()

void main()
{
 char str1[20];
 clrscr();

 cout<<"\n\n Enter a string1:";
 gets(str1);

 strupr(str1);

 cout<<"\n\n String after conversion";
 cout<<"\n\n"<<str1;


 getch();
}