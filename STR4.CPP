/*
   Convert all the letters in uppercase to lowercase or
   letters in lowercase to uppercase.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
 char str[20],i;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 for(i=0;i<strlen(str);i++)
{
 if(isupper(str[i]))
 {
  str[i]=tolower(str[i]);
 }
 else if(islower(str[i]))
 {
  str[i]=toupper(str[i]);
 }
}

 cout<<" "<<str;

 getch();
}
