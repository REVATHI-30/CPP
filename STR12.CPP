/*
   Title case
   convert all the first letter of the words in a string to upper case
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
 char str[20];
 int i;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 str[0]=toupper(str[0]);

 for(i=1;i<strlen(str);i++)
 {
  if(str[i]==' ')
   {
     str[i+1]=toupper(str[i+1]);
   }
 }
 cout<<"\n\n final string: "<<str;

 getch();
}