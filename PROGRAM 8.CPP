#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
void easy();
void medium();
void hard();
void easy()
{
  int a,b,c,u,sc=0;
  clrscr();
  cout<<"\n * * * * * * M  U  L  T  I  P  L  I  C  A  T  I  O  N  G  A  M  E * * * * * * * ";
  cout<<"\n YOU HAVE 10 CHANCES ....";
  sleep(2);
  cout<<"\n TRY TO SCORE YOUR BEST...";
  for(int i=0;i<=10;i++)
  {
    randomize();
    a=random(9)+1;
    b=random(9)+1;
    c=a*b;
    cout<<"\n Enter the PRODUCT of "<<a<<" and "<<b<<"=";
    cin>>u;
    if(c==u)
    {
      cout<<"\n You are going well for a a beginner....";
      sc+=10;
      cout<<"\n Score="<<sc;
    }
    else
    {
      cout<<"\n Better luck next time....Your score is :"<<sc;
      cout<<"\nPress any key to exit.";
      getch();
    }
  }
  medium();

}
void medium()
{
  int a,b,c,u,sc=0;
  clrscr();
  cout<<"\n * * * * * * M  U  L  T  I  P  L  I  C  A  T  I  O  N  G  A  M  E * * * * * * * ";
  cout<<"\n TRY TO SCORE YOUR BEST IN 10 CHANCES....";
  for(int i=0;i<=10;i++)
  {
    randomize();
    a=random(49)+1;
    b=random(49)+1;
    c=a*b;
    cout<<"\n Enter the PRODUCT of"<<a<<" and "<<b<<"=";
    cin>>u;
    if(c==u)
    {
      cout<<"\n You are Good,but try to make it in HARD too....";
      sc+=10;
      cout<<"\n Score="<<sc;
    }
    else
    {
      cout<<"\n YOU had 10 chances.....your score is :"<<sc;
      cout<<"\nPress any key to exit.";
      exit(0);
    }
  }
  hard();
}
void hard()
{
  int a,b,c,u,sc=0;
  clrscr();
  cout<<"\n * * * * * * M  U  L  T  I  P  L  I  C  A  T  I  O  N  G  A  M  E * * * * * * * ";
  cout<<"\n YOU GET ONLY 10 CHANCES ....";
  sleep(2);
  cout<<"\nMAKE THEM COUNT....";
  for(int i=0;i<=10;i++)
  {
    randomize();
    a=random(90)+1;
    b=random(90)+1;
    c=a*b;
    cout<<"\n Enter the PRODUCT of"<<a<<" and "<<b<<"=";
    cin>>u;
    if(c==u)
    {
      cout<<"\n You are expert...in calculation....";
      sc+=10;
      cout<<"\n Score="<<sc;
    }
    else
    {
      cout<<"\n YOU had 10 chances.....your score is :"<<sc;
      cout<<"\nPress any key to exit.";
      exit(0);
    }
  }
}
void main()
{
  int ch;
  clrscr();
  cout<<"\n * * * * M E N U * * * *";
  cout<<"\n 1.EASY";
  cout<<"\n 2.MEDIUM";
  cout<<"\n 3.HARD";
  cout<<"\n ENTER YOUR CHOICE:";
  cin>>ch;
  switch(ch)
  {
    case 1:easy();
	   break;
    case 2:medium();
	   break;
    case 3:hard();
	   break;
   default :cout<<"\n WRONG CHOICE!!!!";
	     break;
  }
  getch();
}

 OUTPUT :1

 1.Easy
 2.Medium
 3.Hard
    Enter your choice :1
    ***********MULTIPLICATION TABLE***********
    You have 2 chances ......
   Try to score your best......
   Enter the product of 3 and 6 =18
   You are beginner.....
   score =10
   Enter the product of 7 and 3=21
   You are expert....in calculation.......
   score=20

OUTPUT :2

 1.Easy 
 2.Medium
 3.Hard
    Enter your choice :2
    *********MULTIPLICATION TABLE***********
     Try to score your best......
     Enter the product of 38 and 48=1824
     you are good but try to make it in hard too....
     Enter the product of 34 and 16=544
     you are expert...in calculation...
     score=20

 OUTPUT :3

 1.Easy 
 2.Medium
 3.Hard
    Enter your choice:3
    ********MULTIPLICATION TABLE************
    You get only 2 chances....
    Make them count.....
    Enter the product of 11 and 39=429
    You are expert....in calculation.....
    score=10
    Enter the product of 71 and 2=142
    You are expert....in calculation
    score=20   
 
 