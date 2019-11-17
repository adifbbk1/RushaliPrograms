#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Clothing
{
   private:

      char code[10];       
      char type[10];
      int size;
      char material[15];
      float price;
      int Calc_price();  
   public:
      Clothing()         
      {
	 strcpy(name,"NOT ASSIGNED");
	 strcpy(code,"NOT ASSIGNED");
	 strcpy(type,"NOT ASSIGNED");
	 size=0;
	 strcpy(material,"NOT ASSIGNED");
	 price=0;
      }
      void enter();
      void show();
  };
    float clothing :: calc_Price()
      {
        if(strcmpi(Material,"COTTON")==0)
       {
         if(strcmpi(Type,"TROUSER")==0
           Price=1500;
        else if(strcmpi(Type,"SHIRT")==0)
           Price=1200;
}
   else
   {
      if(strcmpi(type,"TROUSER")==0)
	 price=0.75*1500;
      else if(strcmpi(type,"SHIRT")==0)
	 price=0.75*1200;
   }
   return price;
  }
  void clothing ::Enter()
 {
   cout<<"\n Enter cloth code";
   gets(code)
   cout<<"\n Enter type of cloth";
   gets(Type)
   cout<<"\n Enter cloth size";
   cin>>size;
   cout<<"\n Enter material";
   gets(Material);
     Price=calc_Price();
 }
    void clothing ::show()
  {
    cout<<"\n cloth code="<<code;
    cout<<"\n type="<<type;
    cout<<"\n size="<<size;
    cout<<"\n material="<<material; 
    cout<<"\n price="<<price;
 }
  void main()
  {
    clrscr();
    clothing C;
    C.Enter();
    C.Show();
     getch();
 }  

OUTPUT: 1

 ENTER  CLOTH CODE: 22
 ENTER THE CLOTH TYPE:trouser
 ENTER THE CLOTH SIZE: 32
 ENTER THE MATERIAL: cotton
 
       CLOTH CODE: 22
       CLOTH TYPE:trouser
       CLOTH SIZE:32
       CLOTH MATERIAL:COTTON
       CLOTH PRICE(Rs):1500
 
OUTPUT: 2

 ENTER THE CLOTH CODE:33
 ENTER THE CLOYH TYPE:shirt
 ENTER THE CLOTH SIZE:34
 ENTER THE MATERIAL : nylon
  
      CLOTH CODE:33
      CLOTH TYPE:shirt
      CLOTH SIZE:36
      CLOTH MATERIAL:nylon
      CLOTH PRICE(Rs):900


