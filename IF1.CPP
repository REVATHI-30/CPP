/*
      Syntax:

      if(Condition)
      {

      }
      else
      {

      }
*/

   #include<iostream.h>
   #include<conio.h>

   void main()
   {
      int a,b;

       clrscr();

     cout<<"\n\n Enter 2 nums : ";
	cin>>a>>b;

       if(a>b)
       {
	   cout<<"\n\n max = "<<a;
       }
       else
       {
	   cout<<"\n\n max = "<<b;
       }

       getch();
   }


