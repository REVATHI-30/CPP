/*
   check if an entered string is palindrome or not.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 char str[20],temp[20];
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 strcpy(temp,str);

 strrev(str);

 if(strcmp(temp,str)==0)  // str == temp is also a comparison operator it requires strcmp()
 {
  cout<<"\n\n The string is a palindrome.";
 }
 else
 {
  cout<<"\n\n The string is not a palindrome.";
 }

 getch();
}