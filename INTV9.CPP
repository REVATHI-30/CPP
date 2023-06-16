//rotate arrays values to right

#include<iostream.h>
#include<conio.h>

void main()
{
 int size,x[30],i,j,temp;
 clrscr();

 cout<<"\n\n Enter size:";
 cin>>size;

 cout<<"\n\n Enter numbers:";
 for(i=0;i<size;i++)
 {
  cin>>x[i];
 }

temp=x[0];

for(i=0;i<size-1;i++)
{
 x[i]=x[i+1];
}
x[size-1]=temp;

cout<<"\n\n list:\n";
for(j=0;j<size;j++)
{
 cout<<" "<<x[j];
}
getch();
}
