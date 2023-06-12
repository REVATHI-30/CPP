//delete an elemet from an array

#include<iostream.h>
#include<conio.h>

void main()
{
int size,x[30],i,num,pos=size;
clrscr();

cout<<"\n\n Enter the size of array:";
cin>>size;

cout<<"\n\n Enter the elements of the array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

cout<<"\n\n Enter the element to be deleted:";
cin>>num;

for(i=0;i<size;i++)
{
 if(x[i]==num)
 {
  pos=i;
  break;
 }
}

if(pos==size)
{
 cout<<"\n\n number not found ";
}
else
{
 x[pos]=0;

 for(i=pos;i<size-1;i++)
 {
  x[i]=x[i+1];
 }

 cout<<"\n\n list after delete:";

 for(i=0;i<size-1;i++)
 {
 cout<<" "<<x[i];
 }
}
getch();
}
