#include<iostream.h>
#include<conio.h>
int Lsearch(int[],int,int);
int Bsearch(int[],int,int);
int main()
{
  clrscr();
  int A[50],num,n,index,ch;
  cout<<"\n Enter no. of elements:";
  cin>>n;
  cout<<"\n Enter Array elements:";
  for(int i=0;i<n;i++)
  {
    cin>>A[i];
  }
    cout<<"\n Search Techniques Menu";
    cout<<"\n 1.Linear search";
    cout<<"\n 2.Binary search";
    cout<<"\n Enter your choice:";
    cin>>ch;
    switch(ch)
    {
      case 1:cout<<"\n Enter element to be search for:";
	     cin>>num;
	     index=Lsearch(A,n,num);
	     if(index==-1)
	     cout<<"\n Sorry!!Element could not be found\n";
	     else
	       cout<<"\n Element found at index:"<<index<<"";
	       position:"<<index+1<<endl";
	     break;
      case 2:cout<<"\n Enter element to be search for:";
	     cin>>num;
	     index=Bsearch(A,n,num);
	     if(index==-1)
	     cout<<"\n Sorry!!Element found at index:"<<index<<",Position:"<<
	     index+1<<endl;
	     break;
	     default:cout<<"\n Wrong choice....!!";
	     }
	       getch();
	       return 0;
	     }
	       int Bsearch(int A[],int size,int num)
	       {
		 int first,last, mid;
		 first=0,last=size-1;
		 while(first<=last)
		 {
		   mid=(first+last)/2;
		   if(num==A[mid])
		   return mid;
		   else if(num>A[mid])
		   first=mid+1;
		   else
		      last=mid-1;
		      }
		      return-1;
		      }
		      int Lsearch(int A[],int size,int num)
		      {
			for(int i=0;i<size;i++)
			{
			if(A[i]==num)
			 return i;
			 }
			   return-1;

			}

