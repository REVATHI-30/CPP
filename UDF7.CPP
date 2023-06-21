// functions with array

#include<iostream.h>
#include<conio.h>

void SORT(int[],int);

void main()
{
 int x[30],size,i;
 clrscr();

 cout<<"\n\n Enter size:";
 cin>>size;

 cout<<"\n\n Enter nums:";
 for(i=0;i<size;i++)
 {
  cin>>x[i];
 }

 SORT(x,size); //function call

 cout<<"\n\n List after sort:\n";

 for(i=0;i<size;i++)
 {
  cout<<" "<<x[i];
 }

 getch();
}

void SORT(int y[],int size)
{
 int i,j,temp;

 for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
  {
   if(y[i]>y[j])
   {
    temp=y[i];
    y[i]=y[j];
    y[j]=temp;
   }
  }
 }
}
