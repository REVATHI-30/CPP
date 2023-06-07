/* if the number is 123.
1+2+3 is same as 3+2+1.
So we can use reverse of a number.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int num,rem,sum=0;
clrscr();

cout<<"Enter a number : ";
cin>>num;

while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
cout<<"\n\n SUM: "<<sum;
getch();
}
