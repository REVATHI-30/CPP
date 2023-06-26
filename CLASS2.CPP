/*
 take input info from user and print them by using
 class but defining the functions outside the class.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
 char name[30];
 int rollno;

 public:
  void getdata();
  void putdata();
};

// While defining the function outside we should use ::

void student::getdata()
{
 cout<<"\n\n Enter name:";
 gets(name);

 cout<<"\n\n Enter rollno:";
 cin>>rollno;
}

void student::putdata()
{
 cout<<"\n\n name:"<<name;
 cout<<"\n\n rollno:"<<rollno;
}

void main()
{
 clrscr();
 student s;

 s.getdata();
 s.putdata();

 getch();
}

