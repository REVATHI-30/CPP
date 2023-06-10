#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;

clrscr();

for(i=1;i<=4;i++)
{

  for(j=1;j<=4;j++)
  {
   if(i==1 || i==4 || j==1 || j==4)
   {
    cout<<" 1";
   }
   else
   {
   cout<<"  ";
   }
  }
cout<<"\n\n";
}
getch();
}
