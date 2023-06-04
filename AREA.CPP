/*
    Q] Area of circle
*/

   #include<iostream.h>
   #include<conio.h>
   #include<math.h>
   #define PI 3.14

   void main()
   {
     float r, area;
     const float pi = 3.14;

       clrscr();

     cout<<"\n\n Enter radius : ";
	 cin>>r;

       area = pi * pow(r , 2);

     cout<<"\n\n Area of circle = "<<area;

       getch();
   }

