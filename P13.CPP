#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,sp;
clrscr();

for(i=1;i<=5;i++)
{
 for(sp=1;sp<=i;sp++)
 {
  cout<<" ";
 }
 for(j=5;j>=i;j--)
 {
 cout<<"* ";
 }
cout<<"\n\n";
}
getch();
}
