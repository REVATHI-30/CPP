/* palindrome num: The reverse of a number should be equal to the number itself
123 <--> 321
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int num,rem,rev=0,temp;
clrscr();

cout<<"\n\n Enter a number : ";
cin>>num;

temp=num; //inside the num value changes.so we store num in temp variable to compare later with reversed num.

while(num>0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}

if(rev==temp)
{
cout<<"\n\n palindrome number";
}
else
{
cout<<"\n\n Not a palindrome number";
}

getch();
}
