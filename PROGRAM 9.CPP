#include<iostream.h>
#include<conio.h>
void call_by_value(int a,int b)
{
  int t=a;
      a=b;
      b=t;

}
void call_by_reference(int &a,int &b)
{
  int t=a;
      a=b;
      b=t;
}
void call_by_pointer(int *a,int *b)
{
  int t=*a;
      *a=*b;
      *b=t;
}
void main()
{
  int ch,a,b;
  clrscr();
  cout<<"\n Enter two values:";
  cin>>a>>b;
  cout<<"\n* * * * M E N U * * * * ";
  cout<<"\n 1.Call by Value";
  cout<<"\n 2.Call by Reference";
  cout<<"\n 3.Call by Pointer";
  cout<<"\n Enter your choice:";
  cin>>ch;
  clrscr();
  cout<<"\n Values before swapping";
  cout<<"\nA="<<a<<"\tB="<<b;
  switch(ch)
  {
    case 1:call_by_value(a,b);
	   cout<<"\n After swapping function is called:";
	   cout<<"\nA="<<a<<"\tB="<<b;
	   break;
    case 2:call_by_reference(a,b);
	   cout<<"\n After swapping function is called:";
	   cout<<"\nA="<<a<<"\tB="<<b;
	   break;
    case 3:call_by_pointer(&a,&b);
	   cout<<"\n After swapping function is called:";
	   cout<<"\nA="<<a<<"\tB="<<b;
	   break;
    default:cout<<"\n Wrong choice!!!!";
	    break;
  }
 getch();
}

 OUTPUT:1
 
 1.Swap by value
 2.Swap by reference
 3.Swap by passing pointers
 4.Exit
    Enter your choice:1
    Enter a :12
    Enter b :13

 Swapped values are:
 a=13
 b=12

 OUTPUT:2

 1.Swap by value
 2.Swap by reference
 3.Swap by passing pointers
 4.Exit
    Enter your choice:2
    Enter a :25 
    Enter b:78
    
 Swapped values are:
 a=78
 b=25

 OUTPUT:3

 1.Swap by value
 2.Swap by reference
 3.Swap by passing pointers
 4.Exit
    Enter your choice:3
    Enter a :45
    Enter b :89

  Swapped values are:
  a=89
  b=45

       


 







