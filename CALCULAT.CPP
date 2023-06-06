/* calculator program
write a program to perform arithmetic operations using switch case
*/
#include<iostream.h>
#include<conio.h>

void main()
{
 int a,b,choice;
 clrscr();

cout<<"\n\n Enter any 2 numbers : ";
cin>>a>>b;

cout<<"\n\n 1.ADD ";
cout<<"\n\n 2.SUB ";
cout<<"\n\n 3.MUL ";
cout<<"\n\n 4.DIV ";

cout<<"\n\n Enter your choice: ";
cin>>choice;

switch(choice)
{
 case 1:
 cout<<"\n\n ADD= "<<a+b;
 break;

 case 2:
 cout<<"\n\n SUB= "<<a-b;
 break;

 case 3:
 cout<<"\n\n MUL= "<<a*b;
 break;

 case 4:
 cout<<"\n\n DIV= "<<a/b;
 break;

 default:
 cout<<"\n\n Invalid input";
 }
 getch();
}
