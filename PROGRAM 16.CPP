#include<iostream.h>
#include<conio.h>
#include<process.h>
int Pop(int [],int&);                 //prototype
int Push(int [],int&,int);            //prototype
void Display(int [],int);            //prototype
const int size=50;
int Push(int Stack[],int & top,int ele)     //function to insert element
{
   if(top==size-1)
     return -1;
   else
   {
     top++;
     Stack[top]=ele;
   }
   return 0;
}
int Pop(int Stack[],int & top)         //function to pop element
{
  int ret;
  if(top==-1)
    return -1;
  else
  {
     ret=Stack[top] ;
     top--;
  }
  return ret;
}
void Display(int Stack[],int top)
{
  if(top==-1)
    return ;
  cout<<Stack[top]<<"<--"<<endl;
  for(int i=top-1;i>=0;i--)
    cout<<Stack[i]<<endl;
}
 int main()
{
   int Stack[size],Item,top=-1,res;
   char ch='y';
   clrscr();
   cout<<"\n**** MENU *****";
   cout<<"\n 1. Push an element into array stack";           //menu for the user
   cout<<"\n 2. Pop an element from the array stack";
   int opt;
   cout<<"\n Enter your choice:";
   cin>>opt;
   switch(opt)
   {
      case 1: while(ch=='y'||ch=='Y')
	      {
		 cout<<"\n Enter ITEM for insertion:";
		 cin>>Item;
		 res=Push(Stack,top,Item);
		 if(res==-1)
		 {
		   cout<<" OVERFLOW!!!Aborting!!\n";
		   exit(0);
		 }
		 cout<<"\n The Stack now is :\n";
		 Display(Stack,top);
		 cout<<"\n Want to insert more elements?(y/n)...";
		 cin>>ch;
	      }
	      break;
      case 2: while(ch=='y'||ch=='Y')
	      {
		 cout<<"\n Enter ITEM for insertion:";
		 cin>>Item;
		 res=Push(Stack,top,Item);
		 if(res==-1)
		 {
		   cout<<" OVERFLOW!!!Aborting!!\n";
		   exit(0);
		 }
		 cout<<"\n The Stack now is :\n";
		 Display(Stack,top);
		 cout<<"\n Want to insert more elements?(y/n)...";
		 cin>>ch;
	      }
	      cout<<"\n ***********************************";
	      cout<<"\n Now deletion of elements begins...\n";
	      ch='y';
	      while(ch=='y'||ch=='Y')
	      {
		res=Pop(Stack,top);
		if(res==-1)
		{
		  cout<<"UNDERFLOW!!!Aborting!!\n";
		  exit(0);
		}
		else
		{
		   cout<<"\n Element deleted is:"<<res<<endl;
		   cout<<"\n The Stack now is:";
		   Display(Stack,top);
		}
		cout<<"\n Want to delete more elements?(y/n)../";
		cin>>ch;
	      }
	      break;
      default:cout<<"\n Wrong choice";

   }
   getch();
   return 0;
}
