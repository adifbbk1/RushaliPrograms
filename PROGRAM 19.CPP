#include<iostream.h>
#include<process.h>
#include<conio.h>
struct Node
{
   int info;
   Node*next;
}*front,*newptr,*save,*ptr,*rear;
Node*Create_New_Node(int);
void Insert(Node*);
void Display(Node*);
void DelNode_Q();
Node*Create_New_Node(int n)  //Function to create new node dynamically
{
   ptr=new Node;
   ptr->info=n;
   ptr->next=NULL;
   return ptr;
}
void Insert(Node*np)  //Function to insert node in Linked Queue
{
   if(front==NULL)
   {
      front=rear=np;
   }
   else
   {
      rear->next=np;
      rear=np;
   }
}
void DelNode_Q()   //Function to delete a node from the beginning of linked-Queue
{
   if(front==NULL)
     cout<<"UNDERFLOW!!!\n";
   else
   {
      ptr=front;
      front=front->next;
      delete ptr;
   }
}
void Display(Node*np)
{
   while(np!=NULL)
   {
      cout<<np->info<<"->";
      np=np->next;
   }
   cout<<"!!!\n";
}
void Insertion()
{
   front=rear=NULL;  //In the beginning Linked-Queue is empty so pointers are null
   int inf;
   char ch='y';
   while(ch=='y' || ch=='Y')
   {
      cout<<"\n Enter INFOrmation for the new node...";
      cin>>inf;
      newptr=Create_New_Node(inf);
      if(newptr==NULL)
      {
	 cout<<"\n Cannot create new node!! Aborting!!\n";
	 exit(0);
      }
      Insert(newptr);
      cout<<"\n Now the Queue(Front...to...rear) is:\n";
      Display(front);
      cout<<"\n Press Y to enter more nodes,N to exit...\n";
      cin>>ch;
   }
}
void Deletion()
{
   front=rear=NULL;
   int inf;
   char ch='y';
   while(ch=='y' || ch=='Y')
   {
      cout<<"\n Enter INFOrmation for the new node...";
      cin>>inf;
      newptr=Create_New_Node(inf);
      if(newptr==NULL)
      {
	 cout<<"\n Cannot create new node!! Aborting!!\n";
	 exit(0);
      }
      Insert(newptr);
      cout<<"\n Now the Queue(Front...to...rear) is:\n";
      Display(front);
      cout<<"\n Press Y to enter more nodes,N to exit...\n";
      cin>>ch;
   }
   clrscr();
   do
   {
      cout<<"\n The Linked-Queue now is(Front...to...rear):\n";
      Display(front);
      cout<<"\n Want to delete first node?(y/n)...";
      cin>>ch;
      if(ch=='y' || ch=='Y')
	DelNode_Q();
   }while(ch=='y' || ch=='Y');
}
void main()
{
   clrscr();
   int ch;
   cout<<"\n ********MENU********";
   cout<<"\n 1.Insert an element into linked queue";
   cout<<"\n 2.Deleting an element from the linked queue";
   cout<<"\n Enter your choice";
   cin>>ch;
   switch(ch)
   {
      case 1:Insertion();
	     break;
      case 2:Deletion();
	     break;
      default:cout<<"\n Wrong choice";
   }
   getch();
}

