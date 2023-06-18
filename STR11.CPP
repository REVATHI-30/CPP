/*
   Sort a string in ascending order.
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

 for(i=0;i<strlen(str);i++)
 {
  for(j=i+1;j<strlen(str);j++)
  {
   if(str[j]<str[i])
   {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
   }
  }
 }

 cout<<"\n\n string in ascending order: "<<str;

 getch();
}
