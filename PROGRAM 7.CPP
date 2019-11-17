#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
char filename[30];
int pass=1;
class flight
{
  private:
   char flightno[30];
   char flight_tict_no[30];
   char name[30];
   char source[50];
   char destination[50];
   float distance;
   float tict_cost;
  public:
   void getdata();
   void putdata();
}f1;
void flight::getdata()
{
  cout<<"\n Enter flight number:";
  gets(flightno);
  cout<<"\n Enter the flight ticket number:";
  gets(flight_tict_no);
  cout<<"\n Enter passengers name:";
  gets(name);
  cout<<"\n Enter the source of flight:";
  gets(source);
  cout<<"\n Enter the destination of flight:";
  gets(destination);
  cout<<"\n Enter the distance of journey(km):";
  cin>>distance;
  tict_cost=distance*15;
}
void flight::putdata()
{
  cout<<"\n Details of the passenger="<<pass;
  cout<<"\n Flight number="<<strupr(flightno);
  cout<<"\n Flight ticket number="<<strupr(flight_tict_no);
  cout<<"\n Passengers name:"<<strupr(name);
  cout<<"\n Source of flight:"<<strupr(source);
  cout<<"\n Destination of flight:"<<strupr(destination);
  cout<<"\n Distance of journey(KM):"<<distance;
  cout<<"\n Ticket cost:"<<tict_cost;
  cout<<"\n";
  if(pass%2==0)
  {
    getch();
    clrscr();
  }
  pass++;
}
void writedata()
{
  ofstream fout;
  cout<<"\n Enter the name to write:";
  gets(filename);
  fout.open(filename,ios::out|ios::binary|ios::noreplace);
  if(fout==NULL)
  {
    cout<<"\n File is already present can not create in same name...";
  }
  else
  {
    char ans='Y';
    while(ans=='Y'||ans=='y')
    {
      f1.getdata();
      fout.write((char *)&f1,sizeof(f1));
      cout<<"\n Do you want to enter more information(Y/N):";
      cin>>ans;
    }
  }
  fout.close();
}
void appenddata()
{
  ofstream fout;
  cout<<"\n Enter the name to write:";
  gets(filename);
  fout.open(filename,ios::app|ios::binary|ios::nocreate);
  if(fout==NULL)
  {
    cout<<"\n File is not present append operation failed";
  }
  else
  {
    char ans='Y';
    while(ans=='Y'||ans=='y')
    {
      f1.getdata();
      fout.write((char *)&f1,sizeof(f1));
      cout<<"\n Do you want to enter more information(Y/N):";
      cin>>ans;
    }
  }
  fout.close();
}
void readdata()
{
  cout<<"\n Enter the file name to read:";


  gets(filename);
  ifstream fin;
  fin.open(filename,ios::in|ios::binary);
  if(fin==NULL)
  {
    cout<<"\n File is not present...";
    getch();
    exit(0);
  }
  while(!fin.eof())
  {
    fin.read((char*)&f1,sizeof(f1));
    if(fin.eof())
     break;
    f1.putdata();
  }
  fin.close();
}
void main()
{
  clrscr();
  int ch;
  cout<<"\n1.To Read Passengers information";
  cout<<"\n2.To Write Passenger information";
  cout<<"\n3. To append Passenger information";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:readdata();
	   break;
    case 2:writedata();
	   break;
    case 3: appenddata();
	    break;
    default:cout<<"\n See the menu properly....";
	    break;
  }
 getch();
}

 OUTPUT: 1

 1.To read passenger information
 2.To write passenger information
 3.To append passenger information 
     Enter your choice:2
     Enter the file name to write :flight
     Enter flight number :1234
     Enter flight ticket number :12345
     Enter passengers name : Aamir
     Enter the source of flight :HYBD
     Enter the destination of flight :VSKP
     Enter the distance of journey(km) :200
     Do you want to enter more information(Y/N):Y

 OUTPUT: 2
 
 1.To read passenger information
 2.To write passenger information
 3.To append passenger information
     Enter your choice :1
     Enter the file name to write:flight
     Enter  the flight number: 1234
     Enter flight ticket number: 12345
     Enter passengers name: Rushali 
     Enter the source of flight:HYBD
     Enter the destination of flight: VSKP
     Enter the distance of journey(km) :200
     Do you want to enter more information(Y/N):N 



