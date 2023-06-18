/*
   Compares 2 strings and if their difference is ASCII values is 0.
   Then the 2 strings are same.
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

 int i=strcmp(str1,str2);
 cout<<"\n\n The difference: "<<i;

 if(i==0)
 {
  cout<<"\n\n Strings are the same.";
 }
 else
 {
  cout<<"\n\n strings are not the same.";
 }

 getch();
}