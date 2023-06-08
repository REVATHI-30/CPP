#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,sp; //for space pattern use sp and for * pattern use j
clrscr();

for(i=1;i<=5;i++)
{
for(sp=5;sp>=i;sp--)
 {
  cout<<" ";
 }

for(j=1;j<=i;j++)
 {
  cout<<"* ";
 }
cout<<"\n\n";
}
getch();
}


