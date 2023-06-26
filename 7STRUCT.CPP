#include<iostream.h>
#include<conio.h>

struct time
{
 int hr,min;
};

void main()
{
 time t1,t2,t3; // creating 3 objects for structure time

 clrscr();

 cout<<"\n\n Enter the time t1:";
 cout<<"\n\n Enter the no. of hours:";
 cin>>t1.hr;
 cout<<"\n Enter the no. of minutes:";
 cin>>t1.min;

 cout<<"\n\n Enter the time t2:";
 cout<<"\n\n Enter the no. of hours:";
 cin>>t2.hr;
 cout<<"\n Enter the no. of minutes:";
 cin>>t2.min;

 t3.hr=t2.hr+t1.hr;
 t3.min=t2.min+t1.min;

 if(t3.min>=60)        // if we first for this step then we have
{                      // separately calculate for t1 and t2 mins
  t3.hr=t3.hr + (t3.min/60);
  t3.min=t3.min%60;
 }

 cout<<"\n\n The total time is :";
 cout<<"\n Hours:"<<t3.hr;
 cout<<"\n Minutes:"<<t3.min;

 getch();
}

/*
 In this program we are adding the time t1 and t2 entered by
 user and we output time t3.
 This program is done using structures but without the functions.
*/

