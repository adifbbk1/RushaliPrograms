#include<iostream.h>
#include<conio.h>
void BubbleSortAsc(int[],int);
void BubbleSortDesc(int[],int);
int main()
{
 clrscr();
 int A[50],n,item,index,ch;
 cout<<"\n Enter the no of elements:";
 cin>>n;
 cout<<"\n Enter array elements..\n";
 for(int i=0;i<n;i++)
 cin>>A[i];
 cout<<"\n sorting menu";
 cout<<"\n 1.Ascending order";
 cout<<"\n 2.Descending order";
 cout<<"\n Enter your choice:";
 cin>>ch;
 switch(ch)
 {
  case 1: BubbleSortAsc (A,n);
      cout<<"\n\n The sorted array is as for(i=0;i<n;i++)shown below...\n";
      cout<<A[i]<<" ";
      cout<<endl;
      break;
  case 2: BubbleSortDesc (A,n);
      cout<<"\n\n The sorted array is as for(i=0;i<n;i++)shown below...\n";
      cout<<A[i]<<" ";
      cout<<endl;
      break;
      default:cout<<"\n wrong choice....!!!!";
      }
	return 0;
      }
      void BubbleSortAsc(int A[],int size)
      {
       int t,ctr=0;
       for(int i=0;i<size;i++)
       {
	for(int j=0;j<(size-1)-1;j++)
	{
	 if(A[j]>A[j+1])
	 {
	  t=A[j];
	  A[j]=A[j+1];
	  A[j+1]=t;
	}
	 cout<<"Array after iteration-"<<++ctr<<"-is:";
	 for(int k=0;k<size;k++)
	 cout<<A[k]<<" ";
	 cout<<endl;
       }
     }
     getch();
     }
      void BubbleSortDesc(int A[],int size)
      {
       int t,ctr=0;
       for(int i=0;i<size;i++)
       {
	for(int j=0;(size-1)-i;j++)
	{
	 if(A[j]<A[j+1])
	 {
	  t=A[j];
	  A[j]=A[j+1];
	  A[j+1]=t;
	 }
	 cout<<"Array after iteration-"<<++ctr<<"-is:";
	 for(int k=0;k<size;k++)
	 cout<<A[k]<<" ";
	 cout<<endl;
	 }
       }
       getch();
      }
















































