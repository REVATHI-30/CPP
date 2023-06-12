/*sum and avg of array element.
These elements are to be given as input by the user.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
int i,x[5],sum=0; // sum=0 to avoid garbage value
// avg can be a decimal value so take float.
float avg;

clrscr();

cout<<"\n\n Enter the elements of an array :";
for(i=0;i<5;i++)
{
 cin>>x[i];

 sum=sum+x[i];

}

avg=(sum)/5;

cout<<"\n\n sum="<<sum;
cout<<"\n\n avg="<<avg;

getch();
}
