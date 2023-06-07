#include<iostream.h>
#include<conio.h>

void main()
{
int num,divisor;
clrscr();

cout<<"Enter a number:";
cin>>num;

for(divisor=2;divisor<num;divisor++)
{
 if(num%divisor==0)
 {
  cout<<"\n\n It is not a prime number";
  break;

 /*we are including break over here because even if there is
 one divisor of the number in this range then it need not check for
 other divisors.
 It can directly decide that it is not a prime number.
 so break over here breaks the loop ie, stops divisor++.
 */

 }
 else
 {
 cout<<"\n\n prime number";
 break;
 }
}

getch();
}


