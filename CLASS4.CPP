/*
 print the details of the students whose marks are greater than
 100 by using class and functions.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
 char name[30];
 int rollno;
 int marks;
 public:

 void getdata()
 {
  cout<<"\n\n Enter name:";
  gets(name);

  cout<<"\n\n Enter rollno:";
  cin>>rollno;

  cout<<"\n\n Enter marks:";
  cin>>marks;
 }

 void putdata()
 {
  cout<<"\n\n name:"<<name;
  cout<<"\n\n roll no:"<<rollno;
  cout<<"\n\n marks:"<<marks;
 }

 int getmarks()
{                 // this makes the marks accessible in main function.
 return marks;    // marks was initially a private variable now through this function we can access it as public variable.
}

};

void main()
{

 student s[3];
 int i;
 clrscr();

 for(i=0;i<3;i++)
 {
  s[i].getdata();
 }

 for(i=0;i<3;i++)
 {
  if(s[i].getmarks()>=100)
  {
   s[i].putdata();
  }
 }
 getch();
}