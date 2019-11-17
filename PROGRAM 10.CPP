#include<iostream.h>
#include<conio.h>
void rowsum(int r,int c,int *arr,int *rs)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    rs[i]=0;
    for(j=0;j<r;j++)
    {
      rs[i]+=arr[i*c+j];
    }
  }
}
void columnsum(int r,int c,int *arr,int *cs)
{
  int i,j;
  for(i=0;i<c;i++)
  {
    cs[i]=0;
    for(j=0;j<r;j++)
    {
      cs[i]+=arr[j*c+i];
    }
  }
}
void main()
{
  int i,j,r,c,ch;
  clrscr();
  cout<<"\n Enter the dimensions of the matrix:";
  cin>>r>>c;
  int *arr=new int[r*c];
  int *rs=new int[r];
  int *cs=new int[c];
  cout<<"\n Enter"<<r*c<<" elements of matrix:";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>arr[i*c+j];
    }
  }
  cout<<"\n * * * * M E N U * * * * ";
  cout<<"\n 1.Row sum";
  cout<<"\n 2.Column sum";
  cout<<"\n 3.Row and column sum";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:rowsum(r,c,arr,rs);
	   cout<<"\n Matrix row column\n";
	   for(i=0;i<r;i++)
	   {
	     for(j=0;j<c;j++)
	     {
	       cout<<arr[i*c+j]<<"\t";
	     }
	     cout<<"-->"<<rs[i]<<"\n";
	   }
	   break;
    case 2:columnsum(r,c,arr,cs);
	   cout<<"\n Matrix with column sum\n";
	   for(i=0;i<r;i++)
	   {
	     for(j=0;j<c;j++)
	     {
	       cout<<arr[i*c+j]<<"\t";
	     }
	     cout<<"\n";
	   }
	   cout<<"\n__________________\n";
	   for(i=0;i<c;i++)
	   {
	     cout<<cs[i]<<"\t";
	   }
	   break;
    case 3:rowsum(r,c,arr,rs);
	   columnsum(r,c,arr,cs);
	   cout<<"\n Matrix with row and column sum\n";
	   for(i=0;i<r;i++)
	   {
	     for(j=0;j<c;j++)
	     {
	       cout<<arr[i*c+j]<<"\t";
	     }
	     cout<<"-->"<<rs[i]<<"\n";
	   }
	   cout<<"\n____________________\n";
	   for(i=0;i<c;i++)
	   {
	     cout<<cs[i]<<"\t";
	   }
	   break;
  }
 getch();
}


 OUTPUT :1

 Enter the dimensions of the matrix : 3 3
 Enter 9 elements of matrix :1 2 3 4 5 6 7 8 9 
 ***********MENU**********
 1.Row sum
 2.Column sum
 3.Row and column sum
    Enter your choice: 1
  Matrix  with row sum
  1 2 3------->6
  4 5 6------->15
  7 8 9------->24

 OUTPUT :2

 Enter the dimensions of the matrix : 3 3
 Enter 9 elements of matrix :1 2 3 4 5 6 7 8 9
 **********MENU**********
 1.Row sum
 2.Column sum
 3.Row and column sum
    Enter your choice: 2
  Matrix with column sum
 1 2 3 
 4 5 6
 7 8 9
----------------
12 15 18
   
 OUTPUT :3
 
 Enter the dimensions of the matrix : 3 3
 Enter 9 elements of matrix : 1 2 3  4 5 6 7 8 9
 **********MENU*********
 1.Row sum
 2.Column sum
 3.Row and column sum
    Enter your choice :3
   Matrix with row and column sum
 1 2 3------>6
 4 5 6 ------>15
 7 8 9------->24
----------------
12 15 18







