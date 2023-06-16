//copy the even and odd elements of an array into separate arrays

#include<iostream.h>
#include<conio.h>

void main()
{
int size,x[50],i,j=0,k=0,even[50],odd[50];
clrscr();

cout<<"\n\n Enter size:";
cin>>size;

cout<<"\n\n Enter numbers:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

for(i=0;i<size;i++)
{
 if(x[i]%2==0)
 {
  even[j]=x[i];
  j++;
 }
 else
 {
 odd[k]=x[i];
 k++;
 }
}

cout<<"\n\n Even:\n";

for(i=0;i<j;i++)
{
 cout<<" "<<even[i];
}
cout<<"\n\n Odd:\n";
for(i=0;i<k;i++)
{
 cout<<" "<<odd[i];
}
getch();
}
