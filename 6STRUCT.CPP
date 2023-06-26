#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct student
{
 char fname[30];
 char lname[30];
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
    gets(s[i].fname);

    cout<<"\n\n Enter last name:";
    gets(s[i].lname);

      cout<<"\n\n Enter rollno:";
    cin>>s[i].rollno;

    cout<<"\n\n Enter marks:";
    cin>>s[i].marks;
  }

  for(i=0;i<3;i++)
  {
   for(j=i+1;j<3;j++)
   {
    if(strcmp(s[i].fname,s[j].fname)>0)
    {
     temp=s[i];
     s[i]=s[j];
     s[j]=temp;
    }
   else if(strcmp(s[i].fname,s[j].fname)==0)
   {
     if(strcmp(s[i].lname,s[j].lname)>0)
     {
      temp=s[i];
      s[i]=s[j];
      s[j]=temp;
     }
   }
 }

 for(i=0;i<3;i++)
 {
  cout<<"\n\n first name:"<<s[i].fname;
  cout<<"\n\n last name:"<<s[i].lname;
  cout<<"\n\n rollno:"<<s[i].rollno;
  cout<<"\n\n marks:"<<s[i].marks;
 }
}
getch();
}

/*
 From this program we can learn that if first name of
 2 students are the same then we compare the last name and
 arrange them in increasing alphabetical order.

*/

