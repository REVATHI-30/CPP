/*
   WAP to find the length of a string w/o using strlen()
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 char str[20];
 int len=0,i;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }

 cout<<"\n\n Length="<<len;

 getch();
}