/*
 This program is to understand the syntax of creating class,
 public and private parts of class.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
 char name[30]; //private
 int rollno;    //private

 public:
  void getdata()
  {
   cout<<"\n\n Enter name:";
   gets(name);

   cout<<"\n\n Enter rollno:";
   cin>>rollno;
  }

  void putdata()
  {
   cout<<"\n\n Name:"<<name;
   cout<<"\n\n Rollno:"<<rollno;
  }
};

void main()
{
 student s;   //since the scope of getdata() & putdata() functions
 clrscr();   //are only within the class therefore we create s object to access these function in main() function

 s.getdata();
 s.putdata();

 getch();
}

