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
 int rollno;
 marks m;};
void main()
{
 student s;
 clrscr();

 cout<<"\n\n Enter the name:";
 gets(s.name);

 cout<<"\n\n Enter the rollno:";
 cin>>s.rollno;

 cout<<"\n\n Enter marks in physics:";
 cin>>s.m.p;

  cout<<"\n\n Enter marks in chemistry:";
 cin>>s.m.c;

  cout<<"\n\n Enter marks in maths:";
 cin>>s.m.m;

 cout<<"\n\n The total combined marks:";
 int total=(s.m.p+s.m.c+s.m.m);

 cout<<"  "<<total;

 getch();
}
/*
This program basically is to learn how to access the variables of marks
structure using the student structure.
We mention the object of marks structute inside the student structure.
*/

