//arrange in ascending order by comparing the last digito of the numbers

#include<iostream.h>
#include<conio.h>

void main()
{
 int size,x[50],i,j,temp;
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
  for(j=i+1;j<size;j++)
  {
   if(x[i]%10>x[j]%10)
   {
    temp=x[i];
    x[i]=x[j];
    x[j]=temp;
   }
  }
 }
 cout<<"\n\n List after sort:";
 for(j=0;j<size;j++)
 {
  cout<<" "<<x[j];
 }
 getch();
}
