/* num=123
   check=(1)^3 + (2)^3 + (3)^3
   if num==check then it is an armstrong number.
   Again, we can use num%10 to access every last digit and cube them to add.
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
int num,temp,sum=0,rem;
clrscr();

cout<<"Enter a number: ";
cin>>num;
temp=num;

while(num>0)
{
rem=num%10;
sum=sum+pow(rem,3);
num=num/10;
}

if(sum==temp)
{
cout<<"Armstrong number";
}
else
{
cout<<"Not an armstrong number";
}
getch();
}


