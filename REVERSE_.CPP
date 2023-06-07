/* if a given number is 123
we need to print 321
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int num,rem,rev=0; //rev=0 to avoid garbage value
clrscr();

cout<<"\n\n Enter a number: ";
cin>>num;


while(num>0)
{

rem=num%10; // modulus will give last digit
rev=(rev*10)+rem;
num=num/10; // division will eliminate last digit

}

cout<<"\n\n Reverse: "<<rev;
getch();
}
