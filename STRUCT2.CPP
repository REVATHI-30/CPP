//nested structure

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct marks
{
 int p,c,m;
};

struct student
{
 char name[30];
 int roll_no;
 marks m;
};

void main()
{
 student s;
 int total;
 clrscr();

  cout<<"\n\n Enter name:";
  gets(s.name);

  cout<<"\n\n Enter roll no.:";
  cin>>s.roll_no;

  cout<<"\n\n Enter marks for 3 subjects:";
  cin>>s.m.p>>s.m.c>>s.m.m;

  total=s.m.p+s.m.c+s.m.m;

  cout<<"\n\n Total marks: "<<total;

  getch();
 }
