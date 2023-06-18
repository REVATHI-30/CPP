/*
 Check string is a palindrome or not w/o using strcmp()
 idea:
 Compare the string by i++ j-- till length/2

*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 char str[20],temp[20],i,j,len,flag=1;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }

 for(i=0,j=len-1;i<len/2;i++,j--)
 {
   if(str[i]!=str[j])
   {
    flag=2;
    break;
   }
 }
 if(flag==2)
 {
  cout<<"\n\n not a palindrome.";
 }
 else
 {
  cout<<"\n\n It is a palindrome.";
 }

 getch();
}
