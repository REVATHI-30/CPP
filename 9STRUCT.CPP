// struct with pointers . Jusr to learn the syntax.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{
 char name[30];
 int rollno;
};

void main()
{
 student s;
 student *p; // p has adress of s object and *p will have access to
	     // values of s object ie, student.
 clrscr();

 p=&s;

 cout<<"\n\n Enter name:";
 gets(p->name);

 cout<<"\n\n Enter rollno:";
 cin>>p->rollno;

 getch();
}
