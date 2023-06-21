//functions with pointers

#include<iostream.h>
#include<conio.h>

void swap(int *,int *);

void main()
{
 int a=10,b=20;
 clrscr();

 cout<<"\n\n Values before swap:";
 cout<<"\n\n a="<<a;
 cout<<"\n\n b="<<b;

 swap(&a,&b);

 cout<<"\n\n Values after swap:";
 cout<<"\n\n a="<<a;
 cout<<"\n\n b="<<b;

 getch();
 }

 void swap(int *p,int *q)
 {
  int temp;

  temp=*p;
  *p=*q;
  *q=temp;
}

