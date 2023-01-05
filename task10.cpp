#include<iostream>
using namespace std;
void p(int amount,string cname);


main()
{
  while(true)
{
  system ("cls");
  int amount=0;
  string cname;
  cout<<"Enter amount:"<<amount;
  cin>>amount;
  cout<<"Enter country name:";
  cin>>cname;
  p(amount,cname);
}  
}

void p(int amount,string cname) 
{
  int discount,tpamount;
     if(cname=="pakistan")
         {
           discount=(amount*5)/100;
           tpamount=amount-discount;
           cout<<"Price after ticket"<<tpamount;
           }

      if(cname=="ireland")
         {
           discount=(amount*10)/100;
           tpamount=amount-discount;
           cout<<"Price after ticket"<<tpamount;
           }

      if(cname=="india")
         {
           discount=(amount*20)/100;
           tpamount=amount-discount;
           cout<<"Price after ticket"<<tpamount;
           }

       if(cname=="england")
         {
           discount=(amount*30)/100;
           tpamount=amount-discount;
           cout<<"Price after ticket"<<tpamount;
           }
 
       if(cname=="canada")
         {
           discount=(amount*45)/100;
           tpamount=amount-discount;
           cout<<"Price after ticket"<<tpamount;
           }

}






