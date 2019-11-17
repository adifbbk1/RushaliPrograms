/*A program to implement merge sort.Array A[] in ascending order, array B[]
in descending order and the resultant array in ascending order*/

#include<iostream.h>
#include<conio.h>
void MergeSort(int a[],int b[],int m,int n)     //definition of Mergesort()
{
  int c[30];
  int ctrA,ctrB,ctrC,i,s=m+n-1;          //variable declaration
  ctrA=ctrC=0;
  ctrB=n-1;
  while(ctrA<m&&ctrB>=0)             //mergesort logic starts
  {
    if(a[ctrA]<b[ctrB])
      c[ctrC++]=a[ctrA++] ;
    else
      c[ctrC++]=b[ctrB--];
    if(ctrA==m)
      break;
    if(ctrB==-1)
      break;
  }
  while(ctrA<m)
  {
    c[ctrC++]=a[ctrA++] ;
  }
  while(ctrB>=0)
  {
    c[ctrC++]=b[ctrB--];
  }
  cout<<"\n The Merged array in ascending order:";
  for(i=0;i<=s;i++)              //display merged array
  {
     cout<<c[i]<<" ";
  }
}
void main()
{
  clrscr();
  int A[30],B[30],m,n,i;
  cout<<"\n Enter the size of array A:";
  cin>>m;
  cout<<"\n Enter "<<m<<" elements of array A(ascending order):";
  for(i=0;i<m;i++)
    cin>>A[i];
  cout<<"\n Enter the size of array B:";
  cin>>n;
  cout<<"\n Enter "<<n<<" elements of array B(descending order):";
  for(i=0;i<n;i++)
    cin>>B[i];
  MergeSort(A,B,m,n);          //function call to MergeSort()
  getch();
}