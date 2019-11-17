#include<iostream.h>
#include<conio.h>
#include<math.h>
void area(int l,int b)
{
  cout<<"\n Area of Rectangle="<<l*b;
}
void perimeter(int l,int b)
{
  cout<<"\n Perimeter of a Rectangle="<<2*(l+b);
}
void diagonal(int l,int b)
{
  cout<<"\n Diagonal of a Rectangle="<<sqrt((l*l)+(b*b));
}
void main()
{
  int ch,l,b;
  clrscr();
  cout<<"\n Enter the length and breadth of a triangle";
  cin>>l>>b;
  cout<<"\n * * * * M E N U * * * * ";
  cout<<"\n 1.AREA OF A RECTANGLE";
  cout<<"\n 2.PERIMETER OF A RECTANGLE";
  cout<<"\n 3.DIAGONAL OF A RECTANGLE";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:area(l,b);
	   break;
    case 2:perimeter(l,b);
	   break;
    case 3:diagonal(l,b);
	   break;
    default:cout<<"\n WRONG CHOICE!!!!";
	    break;
  }
 getch();
}

 OUTPUT :1

 1.Perimeter of rectangle 
 2.Area of rectangle
 3.Diagonal of rectangle
   Enter your choice:1
   Enter length and breadth of rectangle :2 and 2
   Perimeter of rectangle :8

 OUTPUT :2

 1.Perimeter of rectangle
 2.Area of rectangle
 3.Diagonal of rectangle
    Enter your choice:3
    Enter length and breadth of rectangle: 3 and 4
    Diagonal of rectangle:5 

