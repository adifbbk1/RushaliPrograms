#include<iostream.h>
#include<conio.h>
#include<math.h>
void area(float a)
{
  cout<<"\n Area of a Equilateral Triangle="<<sqrt((3))/4*a*a;
}
void area(float h,float b)
{
  cout<<"\n Area of a Right Angled Triangle="<<0.5*b*h;
}
void area(float a,float b,float c)
{
  float s=(a+b+c)/2;
  float ar=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<"\n Area of a Scalene Triangle="<<ar;
}
void main()
{
  int ch;
  float x,y,z;
  clrscr();
  cout<<"\n * * * * M E N U * * * * ";
  cout<<"\n 1.EQUILATERAL TRIANGLE";
  cout<<"\n 2.RIGHT ANGLED TRIANGLE";
  cout<<"\n 3.SCALENE TRIANGLE";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:cout<<"\n Enter the side of a equilateral triangle";
	   cin>>x;
	   area(x);
	   break;
    case 2:cout<<"\n Enter the base and height of a triangle";
	   cin>>x>>y;
	   area(x,y);
	   break;
    case 3:cout<<"\n Enter the three sides of a triangle";
	   cin>>x>>y>>z;
	   area(x,y,z);
	   break;
    default:cout<<"\n WRONG CHOICE!!!!";
	    break;
  }
 getch();
}

OUTPUT : 1

*********MENU*********
1. Area of equilateral triangle
2. Area of right angled triangle
3. Area of scalene triangle

Enter your choice: 1
Enter the side of equilateral triangle:2
Area of equilateral triangle :1.732

OUTPUT :2

Enter your choice: 2
Enter the base and height of the right angled triangle: 2 and 4
Area of right angled triangle: 4

OUTPUT :3

Enter your choice: 3
Enter the radius of the Cylinder:  3
Enter the breadth of the Cylinder:  6.8
Volume of the Cylinder: 192.168

