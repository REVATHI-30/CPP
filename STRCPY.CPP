/*
   Use strcpy to copy one string into another
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>  // this header file is for gets() and puts()
#include<string.h> // this header file is for string functions

void main()
{
 char str1[20],str2[20];
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str1);

 strcpy(str2,str1);

 cout<<"\n\n"<<str1;
 cout<<"\n\n"<<str2;

 getch();
}
