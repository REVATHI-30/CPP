// take the number of values to be printed as input from user and print fibonacci series

#include<iostream.h>
#include<conio.h>

void main()
{
 int a=0,b=1,c=0,n,i=1;
 clrscr();

 cout<<"Enter the number of the values to be printed : ";
 cin>>n;

 if(n>=1)
 {
 cout<<"\n\n"<<a;
 }
 if(n>=2)
 {
 cout<<" "<<b; // the reason for writing " " is that the empty space will be printed so it looks neat
 }

 while(i<=n-2)
 {
  c=a+b;
  cout<<" "<<c;
  a=b;
  b=c;
  i++;
 }
getch();
}
