/*
 t1+t2=t3
 using structures and functions.
*/

#include<iostream.h>
#include<conio.h>

struct time
{
 int hr,min;
};
time sum(time ,time ); //function declaration
void main()
{

 time t1,t2,t3;

 clrscr();

 cout<<"\n\n Enter time t1:";
 cout<<"\n Enter no. of hours:";
 cin>>t1.hr;
 cout<<"\n Enter no. of minutes:";
 cin>>t1.min;

 cout<<"\n\n Enter time t2:";
 cout<<"\n Enter no. of hours:";
 cin>>t2.hr;
 cout<<"\n Enter no. of mins:";
 cin>>t2.min;

 t3=sum(t1,t2); // function call
// t1 and t2 will be passed to the function and since they are
//objects, we need 2 objects to receive these 2 values as arguments.
 cout<<"\n\n The total time is:";
 cout<<"\n Hours:"<<t3.hr;
 cout<<"\n Minutes:"<<t3.min;

 getch();
}

time sum(time obj1,time obj2)  // the data type of object is the struct name
{
 time obj3;//this is for t3

 obj3.hr=obj1.hr+obj2.hr;
 obj3.min=obj1.min+obj2.min;
 if(obj3.min>=60)
 {
  obj3.hr=obj3.hr+(obj3.min/60);
  obj3.min=obj3.min+ (obj3.min%60);
 }

 return obj3;
}

