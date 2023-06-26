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
{
 student s[3],temp;
 int i,j;
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
  for(j=i+1;j<3;j++)
  {
   if(s[i].marks>s[j].marks)
   {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
   }
  }
 }

 cout<<"\n\n Records after sort:";
 for(i=0;i<3;i++)
 {
  cout<<"\n\n Name:"<<s[i].name;
  cout<<"\n\n Rollno:"<<s[i].rollno;
  cout<<"\n\n Marks:"<<s[i].marks;
 }
getch();
}
/*
In this program we were able to learn that eventhough we are comparing
the student wrt marks, we swap the whole student object for a particular
student and not just the marks.
This is the reason why temp variable is declared as an object of
student and not int.
*/

