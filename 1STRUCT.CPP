#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
 char sname[30];
 int rollno;
};

struct teacher
{
 char tname[30];
 long int salary;
};

void main()
{
 student s;
 teacher t;
 clrscr();
 cout<<"\n\n Enter the name of student:";
 gets(s.sname);

 cout<<"\n\n Enter the roll no.:";
 cin>>s.rollno;

 cout<<"\n\n Enter the name of teacher:";
 gets(t.tname);

 cout<<"\n\n Enter salary:";
 cin>>t.salary;

 cout<<"\n\n student name: "<<s.sname;
 cout<<"\n\n student roll no: "<<s.rollno;
 cout<<"\n\n teacher name: "<<t.tname;
 cout<<"\n\n teacher salary: "<<t.salary;

 getch();
}
