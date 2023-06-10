#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,sp;
clrscr();

for(i=1;i<=5;i++)
{
 for(sp=5;sp>=i;sp--)
 {
  cout<<"  ";
 }

 for(j=1;j<=i;j++)
 {
  cout<<" "<<j;
 }
 for(j=i-1;j>=1;j--)
 {
 cout<<" "<<j;
 }
cout<<"\n\n";
}
getch();
}
