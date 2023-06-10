#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
int num,rem,sum=0,temp;
clrscr();

for(num=1;num<=1000;num++)
{
sum=0;
temp=num;

while(temp !=0)
{
 rem=temp%10;
 sum=sum+pow(rem,3);
 temp=temp/10;
}
if(sum==num)
{
cout<<"\n\n "<<num;
}
}
getch();
}
