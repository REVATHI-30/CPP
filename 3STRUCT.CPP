#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{
 char name[30];
 int rollno;
 int marks;
};

void main()
{ int i;
  student s[3];
  clrscr();
  for(i=0;i<3;i++)
  {
   cout<<"\n\n Enter name:";
   gets(s[i].name);

   cout<<"\n\n Enter rollno:";
   cin>>s[i].rollno;

   cout<<"\n\n Enter marks:";
   cin>>s[i].marks;
  }

  for(i=0;i<3;i++)
  {
   if(s[i].marks>=100)
   {
    cout<<"\n\n name:"<<s[i].name;
    cout<<"\n\n rollno:"<<s[i].rollno;
    cout<<"\n\n marks:"<<s[i].marks;
   }
 }

getch();
}
