/*
   print the number of times each character repeats itself in a string
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 char str[20];
 int count,i,j;
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 for(i=0;i<strlen(str);i++)
 {
   for(j=i+1;j<strlen(str);j++)
   {
     count=1;

     if(str[i]==str[j])
     {
      count++;
      str[j]='*';
     }
   }

   if(str[i]!='*')
   {
    cout<<"\n\n"<<str[i]<<"="<<count;
   }
 }
 getch();
}
