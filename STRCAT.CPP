/*
   Add one string to another
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>  // this header file is for gets() and puts()
#include<string.h> // this header file is for string functions

void main()
{
 char str1[20],str2[20];
 clrscr();

 cout<<"\n\n Enter a string1:";
 gets(str1);

 cout<<"\n\n Enter a string2:";
 gets(str2);

 strcat(str1,str2);

 cout<<"\n\n String after concatenation";
 cout<<"\n\n"<<str1;


 getch();
}