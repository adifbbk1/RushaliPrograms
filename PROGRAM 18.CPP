#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
const int size =50;
int Queue[size],front=-1,rear=-1;
int Insert(int Queue[],int ele)      //function to insert element in Queue
{
  if(rear==size-1)
   return -1;
  else if(rear==-1)
  {
    front=rear=0;
    Queue[rear]=ele;
  }
  else
  {
   rear++;
   Queue[rear]=ele;
  }
  return 0;
}
int Remove(int Queue[])          //function to delete element
{
  int ret;
  if (front==-1)
   return-1;
  else
  {
   ret=Queue[front];
   if (front==rear)
    front=rear=-1;
   else
    front++;
  }
  return ret;
}
void Display(int Queue[],int front, int rear)
{
  if(front==-1)
   return;
  for(int i=front;i<rear;i++)
   cout<<Queue[i]<<"<--\t";
  cout<<Queue[rear]<<endl;
}
void Insertion()
{
  int Item,res;
  char ch='y';
  while(ch=='Y'||ch=='y')
  {
    cout<<"\n Enter ITEM for insertion:";
    cin>>Item;
    res=Insert(Queue,Item);
    if(res==-1)
    {
       cout<<" UNDERFLOW!!Aborting!!\n";
       exit(0);
    }
    cout<<"\n Now the queue is:\n";
    Display(Queue,front,rear);
    cout<<"\n Want to insert more elements?(y/n)...";
    cin>>ch;
  }
}
void Deletion()
{
  int Item,res;
  char ch='y';
  while(ch=='Y'||ch=='y')
  {
     cout<<"\n Enter ITEM for insertion:";
     cin>>Item;
     res=Insert(Queue,Item);
     if(res==-1)
     {
	cout<<" UNDERFLOW!!Aborting!!\n";
	exit(0);
     }
     cout<<"\n Now the queue is:\n";
     Display(Queue,front,rear);
     cout<<"\n Want to insert more elements?(y/n)...";
     cin>>ch;

  }
  cout<<"\n **************************************";
  cout<<" Now deletion of elements begins..\n";
  ch='y';
  while(ch=='y'||ch=='Y')
  {
     res=Remove(Queue);
     if(res==-1)
     {
	cout<<"UNDERFLOW!!!Aborting!!";
	exit(0);
     }
     else
     {
       cout<<"\n Element deleted is:"<<res<<endl;
       cout<<" Now the Queue is:\n";
       Display(Queue,front,rear);
     }
     cout<<" Want to delete more elements?(y/n)...";
     cin>>ch;
  }
}
int main()
{

  clrscr();
  cout<<"\n ***************";
  cout<<"\n    M E N U       ";
  cout<<"\n **************";
  cout<<"\n 1. Insert an element in the Array-Queue";       //menu
  cout<<"\n 2. Delete an element from the Array-Queue";
  int opt;
  cout<<"\n Enter your choice:";
  cin>>opt;
  switch(opt)
  {
    case 1: Insertion();
	    break;
    case 2: Deletion();
	    break;
    default: cout<<"\n Wrong choice";

  }
  getch();
  return 0;
}
