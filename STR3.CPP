/*
    count the number of vowels in a string.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 char str[20];
 int count=0,i;  // otherwise it'll start from garbage value.
 clrscr();

 cout<<"\n\n Enter a string:";
 gets(str);

 for(i=0;i<strlen(str);i++)
 switch(str[i])
 {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
	    count++;
  }

  cout<<"\n\n The number of vowels: "<<count;

 getch();
}