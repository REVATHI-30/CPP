#include<iostream.h>
#include<conio.h>

void main()
{
 int amount,i,size=9;
 int x[]={500,200,100,50,20,10,5,2,1};

 clrscr();

 cout<<"\n\n Enter amount:";
 cin>>amount;

 for(i=0;i<size;i++)
 {
  if(amount>=x[i])
  {
   cout<<"\n\n"<<x[i]<<"="<<amount/x[i];
   amount=amount%x[i];
  }
 }
 getch();
}
