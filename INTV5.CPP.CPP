#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,temp,size,x[30];
clrscr();

cout<<"\n\n Enter the size of array :";
cin>>size;

cout<<"\n\n Enter the elements of the array:";
for(i=0;i<size;i++)
{
 cin>>x[i];
}

for(i=0,j=size-1;i<size/2,j>size/2;i++,j--)
{
/*in this case its not like for one value of i the j loop completes first
then i increments and again j loop.
In this case while i is happening j should simultaneously happen so we use
i and j in the same for loop.
*/

  temp=x[i];
  x[i]=x[j];
  x[j]=temp;

}
cout<<"\n\n after reversing:";
for(i=0;i<size;i++)
{
 cout<<" "<<x[i];
}

getch();
}

