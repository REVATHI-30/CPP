/*
   WAP to reverse a string w/o using strrev()
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 char str[20],temp;
 int i,j;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 int len=strlen(str);

 for(i=0,j=len-1;i<len/2;i++,j--)
 {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
 }

 cout<<"\n\n String after reverse: "<<str;
 getch();
}