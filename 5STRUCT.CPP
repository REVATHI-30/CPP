#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

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
   if(strcmp(s[i].name,s[j].name)>0)
    {
   temp=s[i];
   s[i]=s[j];
   s[j]=temp;
    }
  }
}

for(i=0;i<3;i++)
{
 cout<<"\n\n Name:"<<s[i].name;
 cout<<"\n\n rollno:"<<s[i].rollno;
 cout<<"\n\n marks:"<<s[i].marks;
}

getch();
}

/*

This program helps us to learn how to arrange the list of students
in ascending order wrt their name.
since it is a string we use the string functions i.e, strcmp() to actually
find the difference between 2 strings.
If suppose name 1 starts with letter B and name 2 starts with letter A.
66-65 will give output as 1 which is positive.
We can therefore conclude that if the difference is positive we need to swap
the whole object.
*/

