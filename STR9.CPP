/*
   WAP to copy a string w/o using strcpy().
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 char str1[20],str2[20];
 int i;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str1);

 for(i=0;str1[i]!='\0';i++)
 {
  str2[i]=str1[i];
 }

 str2[i]='\0';

 cout<<"\n\n String after copying: "<<str2;

 getch();
}
