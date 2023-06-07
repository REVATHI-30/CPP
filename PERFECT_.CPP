/* A perfect number is something where the sum of all the divisors
of the entered number should give the same number itself.
i.e, num=6
check the divisors of the num 6 within the range 1-->5
(we don't include the number itself)
1+2+3=6
so 6 is a perfect number.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int num,i,sum=0;
clrscr();

cout<<"\n\n Enter a number: ";
cin>>num;

for(i=1;i<num;i++)
{
 if(num%i==0)
 {
 sum=sum+i;
 }
}

if(sum==num)
{
cout<<"\n\n It is a perfect number";
}
else
{
cout<<"\n\n It is not a perfet number";
}
getch();
}

