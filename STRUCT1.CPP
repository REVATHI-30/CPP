#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct teacher
{
 char tname[30];
 float salary;
};

struct student
{
 char name[30];
 int roll_no;
};

void main()
{
 student s;
 teacher t;

 clrscr();

 cout<<"\n\n Enter name:";
 gets(s.name);

 cout<<"\n\n Enter roll no: ";
 cin>>s.roll_no;

 getch();
}
