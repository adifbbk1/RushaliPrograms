#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
   private:
     int admno;
     char Sname;
     float eng,math,chemistry,physics,computer science,
          total;
     public:
	float student :: total()
{
   total=eng+math+chemistry+physics+computer science;
     return total:
void student :: takedata()
{
     cout<<"\nenter admission number:":
     cin>>admno;
     cout<<"\n student name:";
     gets( sname);
     cout<<"\n enter marks obtained in English:";
     cin>>eng;
     cout<<"\nenter marks obtained in Mathematics:';
     cin>>math;
     cout<<"\n enter marks obtained in physics:";
     cin>>physics;
     cout<<"\nenter marks obtained in computer science:":
     cin>>comp;
     total=Ctotal();
 }
    void student ::putdata()
 {
    cout<<"\n Student name="<<Sname;
    cout<<"\n Admission no.="<<admno;
    cout<<"\n Total marks obtained="<<total;
}
  void main()
{
  int i;
  student s[30];
  clrscr();
  for(i=0;i<3;i++)
 {
   s[i].Takedata();
 }
  for(i=0;i<3;i++)
{
  s[i].putdata();
}
   getch();
}

OUTPUT:1


Enter admission number: 1313
Enter the name: Divya
Enter the class: XII
Enter marks in 5 subjects:
ENGLISH: 95
MATHEMATICS: 96
PHYSICS: 82
CHEMISTRY: 81
COMPUTER:93

 OUTPUT:2

Enter roll number: 2
Enter the name: Namita
Enter the class: XII
Enter marks in 5 subjects:
ENGLISH: 99
MATHEMATICS:92
PHYSICS: 98
CHEMISTRY: 99
COMPUTER: 96




















 
     





