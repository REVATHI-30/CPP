/*
   find length of a string.( It doesn't include the null character)
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


 int i= strlen(str1);

 cout<<"\n\n length of the string: ";
 cout<<"\n\n"<<i;


 getch();
}