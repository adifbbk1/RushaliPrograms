#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class publication
{
  private:
   char title[50];
   float price;
  public:
   void getdata();
   void putdata();
};
class book:public publication
{
  private:
   int page_count;
  public:
   void getdata();
   void putdata();
};
class tape:public publication
{
  private:
   float playtime;
  public:
   void getdata();
   void putdata();
};
void publication::getdata()
{
  cout<<"\n Enter the Title of a String:";
  gets(title);
  cout<<"\n Enetr the Price:";
  cin>>price;
}
void publication::putdata()
{
  cout<<"\n Title="<<title;
  cout<<"\n Price="<<price;
}
void book::getdata()
{
  cout<<"\n Enter the Details of the Book:";
  publication::getdata();
  cout<<"\n Enter number of pages:";
  cin>>page_count;
}
void book::putdata()
{
  cout<<"\n Book Details:";
  publication::putdata();
  cout<<"\n Page Count="<<page_count;
}
void tape::getdata()
{
  cout<<"\n Enter Tape Details:";
  publication::getdata();
  cout<<"\n Enter Playing Time:";
  cin>>playtime;
}
void tape::putdata()
{
  cout<<"\n Tape Details:";
  publication::putdata();
  cout<<"\n Playing Time="<<playtime;
}
void main()
{
  clrscr();
  book b1;
  b1.getdata();
  b1.putdata();
  tape t1;
  t1.getdata();
  t1.putdata();
  getch();
}

 OUTPUT:1
 
 Enter the details of book
 Enter title of book: Wings of fire
 Enter price of book: 300
 Enter number of pages: 180

 Book details:
 title of book:Wings of fire
 Price of book:300
 Number of pages:180

 OUTPUT:2

 Enter the details of book
 Enter title of book :Unfinished
 Enter price of book: 500
 Enter playing time:30

 Tape details
 title of book:Unfinished
 Price of book: 500
 Playing time: 30	

 