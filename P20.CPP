#include<iostream.h>
#include<conio.h>

void main()
{
int i,j,sp;
char ch;
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
 ch='A';
 for(j=(i-1);j>=1;j--)
 {
  cout<<" "<<ch++;
 }
cout<<"\n\n";
}
getch();
}
