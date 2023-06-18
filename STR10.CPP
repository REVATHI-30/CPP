/*
   WAP to concat a string without using strcat().
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 char str1[20],str2[20];
 int len=0,i;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str1);

 cout<<"\n\n Enter a string:";
 gets(str2);

 len=strlen(str1);

 for(i=0;str2[i]!='\0';i++)
 {
 str1[len+i]=str2[i];
 }

 str1[len+i]='\0';

 cout<<"\n\n string after concatenation: \n "<<str1;

 getch();
}
