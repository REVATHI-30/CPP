/*
 copy constructor is called the very moment when the object is created and
 another object of the same class is assigned to it.
*/

#include<iostream.h>
#include<conio.h>

class abc
{
 int a;

 public:
 abc()   //default constructor
 {
 }

 abc(int x)  //parameterised constructor
 {
  a=x;
 }

 abc(abc &obj) // this is a reference object of the same class and thus data type is the same as class name.
 {
   a=obj.a;
 }

 void show()
 {
  cout<<"\n\n a="<<a;
 }
};

void main()
{
 clrscr();

 abc A(100);
 A.show();

 abc B(A);
 B.show();

 abc C=B;
 C.show();

 abc D;
 D=C;
 D.show();

 getch();
}
