#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void length(char str[])
{
  int i,l=0;
  for(i=0;str[i]!='\0';i++)
   l++;
  cout<<"\n Length of "<<str<<"="<<l;
}
void compare(char str1[],char str2[])
{
  int i,l1=0,l2=0,f=1;
  for(i=0;str1[i]!='\0';i++)
   l1++;
  for(i=0;str2[i]!='\0';i++)
   l2++;
  if(l1!=l2)
  {
    f=0;
    cout<<"\n Both the Strings are not equal....";
  }
  else
  {
    for(i=0;i<=l1||i<=l2;i++)
    {
      if(str1[i]!=str2[i])
      {
	f=0;
	cout<<"\n Strings are not Equal";
	break;
      }
    }
  }
  if(f==1)
   cout<<"\n Both are equal Strings....";
}
void concatenate(char str1[],char str2[])
{
  char str[60];
  int i,l1=0,l2=0,l3;
  for(i=0;str1[i]!='\0';i++)
   l1++;
  for(i=0;str2[i]!='\0';i++)
   l2++;
  l3=l1+l2;
  for(i=0;i<l3;i++)
  {
    if(i<l1)
     str[i]=str1[i];
    else
     str[i]=str2[i-l1];
  }
  str[i]='\0';
  cout<<"\n First String:"<<str1;
  cout<<"\n Second String:"<<str2;
  cout<<"\n Concatenate String:"<<str;
}
void main()
{
  int ch;char str[60],str1[65],str2[70];
  clrscr();
  cout<<"\n* * * * M E N U * * * * ";
  cout<<"\n 1.Length of a String";
  cout<<"\n 2.Compare two Strings";
  cout<<"\n 3.Concatenate String";
  cout<<"\n Enter your Choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:cout<<"\n Enter the length of a string:";
	 cin>>str;
	 length(str);
	 break;
    case 2:cout<<"\n Enter two strings:";
	 cin>>str1>>str2;
	 compare(str1,str2);
	 break;
    case 3:cout<<"\n Enter first and second string:";
	 cin>>str1>>str2;
	 concatenate(str1,str2);
	 break;
    default:cout<<"\n Wrong Choice!!!!";
	  break;
  }
 getch();
}

 OUTPUT: 	1

 1.Length of a string 
 2.Comapare two string
 3.Concatenate two string
     Enter your choice: 1
     Enter the length of a string :Rushali
     Length of Rushali :7

 OUTPUT: 2
 1.Length of a string
 2.Compare two string
 3.Concatenate two string
     Enter your choice: 2
     Enter the string one and two: RUSHALI RATAN , RUSHALI
     Both the strings are not equal.
      
 OUTPUT: 3
 1.Length of a string
 2.Compare two string  
 3.Cocatenate two string
     Enter your choice: 3
     Enter first and second strings: Aamir khan
     First string: Aamir
     Second string: khan
     Cocatenate string: Aamir khan
















