// count number of even and odd numbers in an array

#include<iostream.h>
#include<conio.h>

void main()
{
 int i,size,count1=0,count2=0,x[30];
 clrscr();

cout<<"\n\n Enter size:";
cin>>size;

cout<<"\n\n Enter the elements:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

for(i=0;i<size;i++)
{
 if(i%2==0)
 {
  count1++;
 }
 else
 {
  count2++;
 }
}
cout<<"\n\n No. of even numbers :"<<count1;
cout<<"\n\n No. of odd numbers:"<<count2;

getch();
}
