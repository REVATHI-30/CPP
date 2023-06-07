/* if sum of digits you get 91 then reduce this 2 digit sum to 1 digit sum.
ie, 9+1=10 (still 2 digit)
run in loop again
1+0=1
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int num,sum=0,rem;
clrscr();

cout<<"\n\n Enter a number :";
cin>>num;

while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
cout<<"\n\n SUM:"<<sum;

while(sum>9)
{
sum=sum/10+sum%10;
}

cout<<"\n\n SUM:"<<sum;

getch();
}

