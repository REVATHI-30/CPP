//search an element inside of an array and return it's position

#include<iostream.h>
#include<conio.h>

void main()
{
int size,num,i,x[30],pos=0;
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter the elements of an array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

cout<<"\n\n Enter the number to be searched:";
cin>>num;

for(i=0;i<size;i++)
{
 if(x[i]==num)
 {
  pos=i+1;
  break;
 }
}

if(pos==0)
{
 cout<<"\n\n Number not found";
}
else
{
 cout<<"\n\n position of num= "<<pos;
}

getch();
}
