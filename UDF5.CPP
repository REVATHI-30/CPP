// Function overloading

#include<iostream.h>
#include<conio.h>

void add(int a,int b)
{
 cout<<"\n\n Add: "<<a+b;
}

void add(float a, float b)
{
 cout<<"\n\n Add: "<<a+b;
}

void add(int a,int b,int c)
{
 cout<<"\n\n Add: "<<a+b+c;
}

void main()
{
 clrscr();

 add(10,20);
 add(10.11f,20.22f);

 getch();

}
