/*
  user defined function
  type 1- No argument and No return type
*/

#include<iostream.h>
#include<conio.h>

void add();   // function declaration or prototype

void main()
{
 clrscr();

 add();   //function calling

 getch();
}

void add()  // function definition
{
 int a,b;

 cout<<"\n\n Enter 2 nums:";
 cin>>a>>b;

 cout<<"\n\n Add="<<a+b;
}

