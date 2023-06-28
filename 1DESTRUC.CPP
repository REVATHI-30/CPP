#include<iostream.h>
#include<conio.h>

class abc
{
 int a,b;

 public:
 abc()
 {
  a=10;
  b=20;
 }
 abc(int x,int y)
 {
  a=x;
  b=y;
 }

 void show()
 {
  cout<<"\n\n a="<<a;
  cout<<"\n\n b="<<b;
 }
 ~abc()
 {
  cout<<"\n\n Destructor";
  getch();
 }
};

void main()
{
 clrscr();

 abc A;
 A.show();

 abc B(11,12);
 B.show();

 abc C(100,200);
 C.show();

 getch();
}
