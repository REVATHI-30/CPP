/* when height = 3
* * *
 * *
* * *
when height = 4
* * * *
 * * *
* * * *
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int height,i,j;
clrscr();

cout<<"\n\n Enter height : ";
cin>>height;

for(i=1;i<=3;i++)
{
 if(i%2==1)
 {
  for(j=1;j<=height;j++)
  {
   cout<<" * ";
  }
 }
 else
 {
  for(j=1;j<height;j++)
  {
  cout<<"  * ";
  }
 }
cout<<"\n\n";
}
getch();
}



