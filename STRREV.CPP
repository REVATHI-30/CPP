/*
   Reverse a whole string
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>  // this header file is for gets() and puts()
#include<string.h> // this header file is for string functions

void main()
{
 char str1[20];
 clrscr();

 cout<<"\n\n Enter a string1:";
 gets(str1);

 strrev(str1);

 cout<<"\n\n String after reverse: ";
 cout<<"\n\n"<<str1;


 getch();
}